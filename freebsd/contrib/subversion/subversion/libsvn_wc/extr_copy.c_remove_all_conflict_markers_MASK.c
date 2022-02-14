
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int svn_wc__db_t ;
typedef int svn_error_t ;
typedef int * (* svn_cancel_func_t ) (void*) ;
struct svn_wc__db_info_t {scalar_t__ kind; scalar_t__ conflicted; } ;
typedef int apr_pool_t ;
typedef int apr_hash_t ;
typedef int apr_hash_index_t ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int * VAR_1 ;
 int * FUNC_1 (int *,int *) ;
 int * FUNC_2 (int *) ;
 char* FUNC_3 (int *) ;
 struct svn_wc__db_info_t* FUNC_4 (int *) ;
 int * FUNC_5 (int *,char*,char*,int *) ;
 char* FUNC_6 (char const*,char const*,int *) ;
 scalar_t__ VAR_2 ;
 int FUNC_7 (int *) ;
 int * FUNC_8 (int *) ;
 int FUNC_9 (int *) ;
 int * FUNC_10 (int **,int **,int *,char const*,int ,int *,int *) ;

__attribute__((used)) static svn_error_t *
FUNC_11(svn_wc__db_t *VAR_3,
                            const char *VAR_4,
                            const char *VAR_5,
                            svn_cancel_func_t VAR_6,
                            void *VAR_7,
                            apr_pool_t *VAR_8)
{
  apr_pool_t *VAR_9 = FUNC_8(VAR_8);
  apr_hash_t *VAR_10;
  apr_hash_t *VAR_11;
  apr_hash_index_t *VAR_12;





  FUNC_0(FUNC_10(&VAR_10, &VAR_11, VAR_3,
                                        VAR_4,
                                        VAR_0 ,
                                        VAR_8, VAR_9));

  for (VAR_12 = FUNC_1(VAR_8, VAR_10);
       VAR_12;
       VAR_12 = FUNC_2(VAR_12))
    {
      const char *VAR_13 = FUNC_3(VAR_12);
      struct svn_wc__db_info_t *VAR_14 = FUNC_4(VAR_12);

      if (VAR_6)
        FUNC_0(VAR_6(VAR_7));

      if (VAR_14->conflicted)
        {
          FUNC_7(VAR_9);
          FUNC_0(FUNC_5(
                            VAR_3,
                            FUNC_6(VAR_4, VAR_13, VAR_9),
                            FUNC_6(VAR_5, VAR_13, VAR_9),
                            VAR_9));
        }
      if (VAR_14->kind == VAR_2)
        {
          FUNC_7(VAR_9);
          FUNC_0(FUNC_11(
                            VAR_3,
                            FUNC_6(VAR_4, VAR_13, VAR_9),
                            FUNC_6(VAR_5, VAR_13, VAR_9),
                            VAR_6, VAR_7,
                            VAR_9));
        }
    }

  FUNC_9(VAR_9);
  return VAR_1;
}
