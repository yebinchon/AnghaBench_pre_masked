
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int svn_ra_session_t ;
struct TYPE_3__ {int token; } ;
typedef TYPE_1__ svn_lock_t ;
typedef int svn_error_t ;
typedef int apr_pool_t ;
typedef int apr_hash_t ;
typedef int apr_hash_index_t ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int * VAR_1 ;
 int FUNC_1 (char*) ;
 int * FUNC_2 (int *,int *) ;
 int * FUNC_3 (int *) ;
 char* FUNC_4 (int *) ;
 int FUNC_5 (int *,int ) ;
 int * FUNC_6 (int ,int *,int ,char const*) ;
 int FUNC_7 (int *,char const*,int ) ;
 int FUNC_8 (int *) ;
 int * FUNC_9 (int *) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int *,TYPE_1__**,char const*,int *) ;

__attribute__((used)) static svn_error_t *
FUNC_12(svn_ra_session_t *VAR_2, apr_hash_t *VAR_3,
             apr_pool_t *VAR_4)
{
  apr_hash_index_t *VAR_5;
  apr_pool_t *VAR_6 = FUNC_9(VAR_4);

  for (VAR_5 = FUNC_2(VAR_4, VAR_3); VAR_5; VAR_5 = FUNC_3(VAR_5))
    {
      const char *VAR_7 = FUNC_4(VAR_5);
      svn_lock_t *VAR_8;

      FUNC_8(VAR_6);

      FUNC_0(FUNC_11(VAR_2, &VAR_8, VAR_7, VAR_6));

      if (! VAR_8)
        return FUNC_6
          (VAR_0, ((void*)0),
           FUNC_1("'%s' is not locked"), VAR_7);

      FUNC_7(VAR_3, VAR_7, FUNC_5(VAR_4, VAR_8->token));
    }

  FUNC_10(VAR_6);
  return VAR_1;
}
