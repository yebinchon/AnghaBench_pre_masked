
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int svn_skel_t ;
typedef int svn_error_t ;
struct TYPE_3__ {char* txn_id; } ;
typedef TYPE_1__ revision_t ;
typedef int apr_pool_t ;


 int * VAR_0 ;
 int FUNC_0 (int *) ;
 int * FUNC_1 (char*) ;
 int * FUNC_2 (int *) ;
 int FUNC_3 (int ,int *) ;
 int FUNC_4 (char*,int *) ;

svn_error_t *
FUNC_5(svn_skel_t **VAR_1,
                                   const revision_t *VAR_2,
                                   apr_pool_t *VAR_3)
{
  svn_skel_t *VAR_4;


  VAR_4 = FUNC_2(VAR_3);


  FUNC_3(FUNC_4(VAR_2->txn_id, VAR_3), VAR_4);


  FUNC_3(FUNC_4("revision", VAR_3), VAR_4);


  if (! FUNC_0(VAR_4))
    return FUNC_1("revision");
  *VAR_1 = VAR_4;
  return VAR_0;
}
