
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int tree ;
struct c_declspecs {int attrs; } ;
struct c_declarator {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int ,int ) ;
 int FUNC_1 (struct c_declarator*,struct c_declspecs*,int ,int,int *) ;

tree
FUNC_2 (struct c_declspecs *VAR_2, struct c_declarator *VAR_3)
{
  tree VAR_4;
  tree VAR_5 = VAR_2->attrs;

  VAR_2->attrs = VAR_1;

  VAR_4 = FUNC_1 (VAR_3, VAR_2, VAR_0,
     0, ((void*)0));


  FUNC_0 (&VAR_4, VAR_5, 0);

  return VAR_4;
}
