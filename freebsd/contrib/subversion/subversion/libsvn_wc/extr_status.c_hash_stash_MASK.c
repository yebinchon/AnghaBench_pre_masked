
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int svn_wc_status3_t ;
struct TYPE_2__ {int op_root; int has_descendants; } ;
typedef TYPE_1__ svn_wc__internal_status_t ;
typedef int svn_error_t ;
typedef int apr_pool_t ;
typedef int apr_hash_t ;


 int * VAR_0 ;
 int * FUNC_0 (int *) ;
 int FUNC_1 (int *,char const*) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int *,char const*) ;
 int FUNC_4 (int *,int ,void*) ;
 void* FUNC_5 (int const*,int *) ;

__attribute__((used)) static svn_error_t *
FUNC_6(void *VAR_1,
           const char *VAR_2,
           const svn_wc_status3_t *VAR_3,
           apr_pool_t *VAR_4)
{
  apr_hash_t *VAR_5 = VAR_1;
  apr_pool_t *VAR_6 = FUNC_0(VAR_5);
  void *VAR_7 = FUNC_5(VAR_3, VAR_6);
  const svn_wc__internal_status_t *VAR_8 = (const void*)VAR_3;


  svn_wc__internal_status_t *VAR_9 = VAR_7;
  VAR_9->has_descendants = VAR_8->has_descendants;
  VAR_9->op_root = VAR_8->op_root;

  FUNC_2(! FUNC_3(VAR_5, VAR_2));
  FUNC_4(VAR_5, FUNC_1(VAR_6, VAR_2), VAR_7);

  return VAR_0;
}
