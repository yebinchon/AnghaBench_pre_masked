
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int svn_error_t ;
struct ev2_edit_baton {int editor; int closed; } ;
typedef int apr_pool_t ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (void*,int *) ;
 int FUNC_2 (int ) ;
 int * FUNC_3 (int ) ;

__attribute__((used)) static svn_error_t *
FUNC_4(void *VAR_1,
               apr_pool_t *VAR_2)
{
  struct ev2_edit_baton *VAR_3 = VAR_1;

  FUNC_0(FUNC_1(VAR_1, VAR_2));
  VAR_3->closed = VAR_0;
  return FUNC_3(FUNC_2(VAR_3->editor));
}
