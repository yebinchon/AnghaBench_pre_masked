
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int mtime; int filesize; int special; int kind; } ;
typedef TYPE_1__ svn_io_dirent2_t ;
typedef int svn_error_t ;
typedef int svn_boolean_t ;
typedef scalar_t__ apr_status_t ;
typedef int apr_pool_t ;
typedef int apr_int32_t ;
typedef int apr_hash_t ;
struct TYPE_8__ {char* name; int mtime; int size; } ;
typedef TYPE_2__ apr_finfo_t ;
typedef int apr_dir_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (scalar_t__) ;
 scalar_t__ VAR_4 ;
 int FUNC_1 (int ) ;
 int * VAR_5 ;
 int FUNC_2 (char*) ;
 scalar_t__ FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (TYPE_2__*,int,int *) ;
 int * FUNC_5 (int *) ;
 int FUNC_6 (char const**,char*,char const*,int *) ;
 int FUNC_7 (int *,int *,TYPE_2__*) ;
 int FUNC_8 (char const*,int *) ;
 int * FUNC_9 (scalar_t__,int ,int ) ;
 int FUNC_10 (int *,char const*,TYPE_1__*) ;
 int FUNC_11 (int **,char const*,int *) ;
 TYPE_1__* FUNC_12 (int *) ;

svn_error_t *
FUNC_13(apr_hash_t **VAR_6,
                    const char *VAR_7,
                    svn_boolean_t VAR_8,
                    apr_pool_t *VAR_9,
                    apr_pool_t *VAR_10)
{
  apr_status_t VAR_11;
  apr_dir_t *VAR_12;
  apr_finfo_t VAR_13;
  apr_int32_t VAR_14 = VAR_3 | VAR_1;

  if (!VAR_8)
    VAR_14 |= VAR_2 | VAR_0;

  *VAR_6 = FUNC_5(VAR_9);

  FUNC_1(FUNC_11(&VAR_12, VAR_7, VAR_10));

  for (VAR_11 = FUNC_4(&VAR_13, VAR_14, VAR_12);
       VAR_11 == VAR_4;
       VAR_11 = FUNC_4(&VAR_13, VAR_14, VAR_12))
    {
      if ((VAR_13.name[0] == '.')
          && ((VAR_13.name[1] == '\0')
              || ((VAR_13.name[1] == '.')
                  && (VAR_13.name[2] == '\0'))))
        {
          continue;
        }
      else
        {
          const char *VAR_15;
          svn_io_dirent2_t *VAR_16 = FUNC_12(VAR_9);

          FUNC_1(FUNC_6(&VAR_15, VAR_13.name, VAR_7, VAR_9));

          FUNC_7(&(VAR_16->kind),
                                     &(VAR_16->special),
                                     &VAR_13);

          if (!VAR_8)
            {
              VAR_16->filesize = VAR_13.size;
              VAR_16->mtime = VAR_13.mtime;
            }

          FUNC_10(*VAR_6, VAR_15, VAR_16);
        }
    }

  if (! (FUNC_0(VAR_11)))
    return FUNC_9(VAR_11, FUNC_2("Can't read directory '%s'"),
                              FUNC_8(VAR_7, VAR_10));

  VAR_11 = FUNC_3(VAR_12);
  if (VAR_11)
    return FUNC_9(VAR_11, FUNC_2("Error closing directory '%s'"),
                              FUNC_8(VAR_7, VAR_10));

  return VAR_5;
}
