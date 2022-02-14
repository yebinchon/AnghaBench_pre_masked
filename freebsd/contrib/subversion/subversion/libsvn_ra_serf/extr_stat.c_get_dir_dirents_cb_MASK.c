
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {char const* data; } ;
typedef TYPE_1__ svn_string_t ;
typedef int svn_error_t ;
struct get_dir_baton_t {scalar_t__ is_directory; int supports_deadprop_count; int result_pool; int dirents; int path; } ;
struct fill_dirent_baton_t {int * supports_deadprop_count; int result_pool; scalar_t__ entry; } ;
typedef int apr_pool_t ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int * VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int ,char const*) ;
 int FUNC_3 (struct fill_dirent_baton_t*,char const*,char const*,char const*,TYPE_1__ const*,int *) ;
 scalar_t__ FUNC_4 (char const*,char*) ;
 scalar_t__ FUNC_5 (int ) ;
 int * FUNC_6 (int ,int *,int ) ;
 char* FUNC_7 (int ,char const*) ;
 scalar_t__ FUNC_8 (int ,char const*) ;
 int FUNC_9 (int ,int ,scalar_t__) ;
 char* FUNC_10 (char const*,int *) ;

__attribute__((used)) static svn_error_t *
FUNC_11(void *VAR_3,
                   const char *VAR_4,
                   const char *VAR_5,
                   const char *VAR_6,
                   const svn_string_t *VAR_7,
                   apr_pool_t *VAR_8)
{
  struct get_dir_baton_t *VAR_9 = VAR_3;
  const char *VAR_10;

  VAR_10 = FUNC_7(VAR_9->path, VAR_4);

  if (VAR_10 && VAR_10[0] != '\0')
    {
      struct fill_dirent_baton_t VAR_11;

      VAR_10 = FUNC_10(VAR_10, VAR_8);
      VAR_11.entry = FUNC_8(VAR_9->dirents, VAR_10);

      if (!VAR_11.entry)
        {
          VAR_11.entry = FUNC_5(VAR_9->result_pool);
          FUNC_9(VAR_9->dirents,
                        FUNC_2(VAR_9->result_pool, VAR_10),
                        VAR_11.entry);
        }

      VAR_11.result_pool = VAR_9->result_pool;
      VAR_11.supports_deadprop_count = &VAR_9->supports_deadprop_count;
      FUNC_0(FUNC_3(&VAR_11, VAR_4, VAR_5, VAR_6, VAR_7, VAR_8));
    }
  else if (VAR_10 && !VAR_9->is_directory)
    {
      if (FUNC_4(VAR_5, "DAV:") == 0 && FUNC_4(VAR_6, "resourcetype") == 0)
        {
          if (FUNC_4(VAR_7->data, "collection") != 0)
            {

              return FUNC_6(VAR_0, ((void*)0),
                                      FUNC_1("Can't get properties of non-directory"));
            }
          else
            VAR_9->is_directory = VAR_2;
        }
    }

  return VAR_1;
}
