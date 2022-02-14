
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int data; } ;
typedef TYPE_1__ svn_string_t ;
typedef int svn_stream_t ;
typedef scalar_t__ svn_node_kind_t ;
typedef int svn_error_t ;
typedef int apr_pool_t ;
typedef int apr_hash_t ;


 int SVN_CONFIG_REALMSTRING_KEY ;
 int SVN_ERR (int ) ;
 int SVN_ERR_W (int ,int ) ;
 int SVN_HASH_TERMINATOR ;
 int * SVN_NO_ERROR ;
 int _ (char*) ;
 int * apr_hash_make (int *) ;
 int apr_psprintf (int *,int ,int ) ;
 scalar_t__ strcmp (int ,char const*) ;
 int svn_auth__file_path (char const**,char const*,char const*,char const*,int *) ;
 int svn_dirent_local_style (char const*,int *) ;
 TYPE_1__* svn_hash_gets (int *,int ) ;
 int svn_hash_read2 (int *,int *,int ,int *) ;
 int svn_io_check_path (char const*,scalar_t__*,int *) ;
 scalar_t__ svn_node_file ;
 int svn_stream_close (int *) ;
 int svn_stream_open_readonly (int **,char const*,int *,int *) ;

svn_error_t *
svn_config_read_auth_data(apr_hash_t **hash,
                          const char *cred_kind,
                          const char *realmstring,
                          const char *config_dir,
                          apr_pool_t *pool)
{
  svn_node_kind_t kind;
  const char *auth_path;

  *hash = ((void*)0);

  SVN_ERR(svn_auth__file_path(&auth_path, cred_kind, realmstring, config_dir,
                              pool));
  if (! auth_path)
    return SVN_NO_ERROR;

  SVN_ERR(svn_io_check_path(auth_path, &kind, pool));
  if (kind == svn_node_file)
    {
      svn_stream_t *stream;
      svn_string_t *stored_realm;

      SVN_ERR_W(svn_stream_open_readonly(&stream, auth_path, pool, pool),
                _("Unable to open auth file for reading"));

      *hash = apr_hash_make(pool);

      SVN_ERR_W(svn_hash_read2(*hash, stream, SVN_HASH_TERMINATOR, pool),
                apr_psprintf(pool, _("Error parsing '%s'"),
                             svn_dirent_local_style(auth_path, pool)));

      stored_realm = svn_hash_gets(*hash, SVN_CONFIG_REALMSTRING_KEY);

      if (!stored_realm || strcmp(stored_realm->data, realmstring) != 0)
        *hash = ((void*)0);

      SVN_ERR(svn_stream_close(stream));
    }

  return SVN_NO_ERROR;
}
