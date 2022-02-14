
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int tree ;
struct copy_body_data {int decl_map; int src_cfun; void* dst_fn; void* src_fn; } ;
typedef int id ;


 int VAR_0 ;
 void* VAR_1 ;
 int FUNC_0 (struct copy_body_data*,int ,int) ;
 int FUNC_1 (int ,struct copy_body_data*) ;
 int VAR_2 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,int *,int *) ;

tree
FUNC_4 (tree VAR_3)
{
  struct copy_body_data VAR_4;

  FUNC_0 (&VAR_4, 0, sizeof (VAR_4));
  VAR_4.src_fn = VAR_1;
  VAR_4.dst_fn = VAR_1;
  VAR_4.src_cfun = VAR_0;
  VAR_4.decl_map = FUNC_3 (VAR_2, ((void*)0), ((void*)0));

  VAR_3 = FUNC_1 (VAR_3, &VAR_4);

  FUNC_2 (VAR_4.decl_map);

  return VAR_3;
}
