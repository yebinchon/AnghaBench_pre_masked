
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_10__ {char* data; } ;
typedef TYPE_2__ svn_stringbuf_t ;
struct TYPE_9__ {int change_set; scalar_t__ number; } ;
struct TYPE_11__ {int sha1_digest; int has_sha1; int md5_digest; void* expanded_size; void* size; TYPE_1__ id; } ;
typedef TYPE_3__ svn_fs_x__representation_t ;
typedef void* svn_filesize_t ;
typedef int svn_error_t ;
struct TYPE_12__ {int digest; } ;
typedef TYPE_4__ svn_checksum_t ;
typedef int apr_pool_t ;
typedef scalar_t__ apr_off_t ;
typedef int apr_int64_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int * VAR_4 ;
 int FUNC_1 (char*) ;
 TYPE_3__* FUNC_2 (int *,int) ;
 int FUNC_3 (int ,int ,int) ;
 int FUNC_4 (char*) ;
 int VAR_5 ;
 int FUNC_5 (TYPE_4__**,int ,char*,int *) ;
 int VAR_6 ;
 int FUNC_6 (int*,char*) ;
 char* FUNC_7 (char*,char**) ;
 int * FUNC_8 (int ,int *,int ) ;

svn_error_t *
FUNC_9(svn_fs_x__representation_t **VAR_7,
                               svn_stringbuf_t *VAR_8,
                               apr_pool_t *VAR_9,
                               apr_pool_t *VAR_10)
{
  svn_fs_x__representation_t *VAR_11;
  char *VAR_12;
  apr_int64_t VAR_13;
  char *VAR_14 = VAR_8->data;
  svn_checksum_t *VAR_15;

  VAR_11 = FUNC_2(VAR_9, sizeof(*VAR_11));
  *VAR_7 = VAR_11;

  VAR_12 = FUNC_7(" ", &VAR_14);
  if (VAR_12 == ((void*)0))
    return FUNC_8(VAR_2, ((void*)0),
                            FUNC_1("Malformed text representation offset line in node-rev"));

  FUNC_0(FUNC_6(&VAR_11->id.change_set, VAR_12));


  if (VAR_11->id.change_set == -1)
    return VAR_4;

  VAR_12 = FUNC_7(" ", &VAR_14);
  if (VAR_12 == ((void*)0))
    {
      if (VAR_11->id.change_set == VAR_3)
        return VAR_4;

      return FUNC_8(VAR_2, ((void*)0),
                              FUNC_1("Malformed text representation offset line in node-rev"));
    }

  FUNC_0(FUNC_6(&VAR_13, VAR_12));
  VAR_11->id.number = (apr_off_t)VAR_13;

  VAR_12 = FUNC_7(" ", &VAR_14);
  if (VAR_12 == ((void*)0))
    return FUNC_8(VAR_2, ((void*)0),
                            FUNC_1("Malformed text representation offset line in node-rev"));

  FUNC_0(FUNC_6(&VAR_13, VAR_12));
  VAR_11->size = (svn_filesize_t)VAR_13;

  VAR_12 = FUNC_7(" ", &VAR_14);
  if (VAR_12 == ((void*)0))
    return FUNC_8(VAR_2, ((void*)0),
                            FUNC_1("Malformed text representation offset line in node-rev"));

  FUNC_0(FUNC_6(&VAR_13, VAR_12));
  VAR_11->expanded_size = (svn_filesize_t)VAR_13;


  VAR_12 = FUNC_7(" ", &VAR_14);
  if ((VAR_12 == ((void*)0)) || (FUNC_4(VAR_12) != (VAR_0 * 2)))
    return FUNC_8(VAR_2, ((void*)0),
                            FUNC_1("Malformed text representation offset line in node-rev"));

  FUNC_0(FUNC_5(&VAR_15, VAR_5, VAR_12,
                                 VAR_10));
  if (VAR_15)
    FUNC_3(VAR_11->md5_digest, VAR_15->digest, sizeof(VAR_11->md5_digest));


  VAR_12 = FUNC_7(" ", &VAR_14);
  if (VAR_12 == ((void*)0))
    return VAR_4;


  if (FUNC_4(VAR_12) != (VAR_1 * 2))
    return FUNC_8(VAR_2, ((void*)0),
                            FUNC_1("Malformed text representation offset line in node-rev"));

  FUNC_0(FUNC_5(&VAR_15, VAR_6, VAR_12,
                                 VAR_10));
  VAR_11->has_sha1 = VAR_15 != ((void*)0);
  if (VAR_15)
    FUNC_3(VAR_11->sha1_digest, VAR_15->digest, sizeof(VAR_11->sha1_digest));

  return VAR_4;
}
