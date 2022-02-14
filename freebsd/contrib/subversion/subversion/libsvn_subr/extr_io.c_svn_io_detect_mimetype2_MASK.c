
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


typedef scalar_t__ svn_node_kind_t ;
struct TYPE_7__ {int apr_err; } ;
typedef TYPE_1__ svn_error_t ;
typedef int block ;
typedef int apr_size_t ;
typedef int apr_pool_t ;
typedef int apr_hash_t ;
typedef int apr_file_t ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int VAR_1 ;
 TYPE_1__* VAR_2 ;
 int FUNC_2 (char*) ;
 int FUNC_3 (char*) ;
 int FUNC_4 (char const*,int *) ;
 int FUNC_5 (TYPE_1__*) ;
 TYPE_1__* FUNC_6 (int ,int *,int ,int ) ;
 char* FUNC_7 (int *,char*) ;
 int FUNC_8 (char const*,scalar_t__*,int *) ;
 int FUNC_9 (int *,int *) ;
 int FUNC_10 (int **,char const*,int ,int ,int *) ;
 TYPE_1__* FUNC_11 (int *,unsigned char*,int*,int *) ;
 scalar_t__ FUNC_12 (unsigned char*,int) ;
 scalar_t__ VAR_3 ;
 int FUNC_13 (int *,char const**,char const*,int *) ;

svn_error_t *
FUNC_14(const char **VAR_4,
                        const char *VAR_5,
                        apr_hash_t *VAR_6,
                        apr_pool_t *VAR_7)
{
  static const char * const VAR_8 = "application/octet-stream";

  svn_node_kind_t VAR_9;
  apr_file_t *VAR_10;
  svn_error_t *VAR_11;
  unsigned char VAR_12[1024];
  apr_size_t VAR_13 = sizeof(VAR_12);


  *VAR_4 = ((void*)0);




  if (VAR_6)
    {
      const char *VAR_14;
      char *VAR_15;

      FUNC_13(((void*)0), (const char **)&VAR_15, VAR_5, VAR_7);
      FUNC_3(VAR_15);
      if ((VAR_14 = FUNC_7(VAR_6, VAR_15)))
        {
          *VAR_4 = VAR_14;
          return VAR_2;
        }
    }


  FUNC_1(FUNC_8(VAR_5, &VAR_9, VAR_7));
  if (VAR_9 != VAR_3)
    return FUNC_6(VAR_1, ((void*)0),
                             FUNC_2("Can't detect MIME type of non-file '%s'"),
                             FUNC_4(VAR_5, VAR_7));

  FUNC_1(FUNC_10(&VAR_10, VAR_5, VAR_0, 0, VAR_7));


  VAR_11 = FUNC_11(VAR_10, VAR_12, &VAR_13, VAR_7);
  if (VAR_11 && ! FUNC_0(VAR_11->apr_err))
    return VAR_11;
  FUNC_5(VAR_11);


  FUNC_1(FUNC_9(VAR_10, VAR_7));

  if (FUNC_12(VAR_12, VAR_13))
    *VAR_4 = VAR_8;

  return VAR_2;
}
