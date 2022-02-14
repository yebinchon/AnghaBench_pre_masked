
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int svn_error_t ;
struct node_baton_t {int has_props; } ;


 int * VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static svn_error_t *
FUNC_0(void *VAR_2)
{
  struct node_baton_t *VAR_3 = VAR_2;



  VAR_3->has_props = VAR_1;

  return VAR_0;
}
