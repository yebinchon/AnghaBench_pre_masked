
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int tree ;
struct constant_descriptor_tree {int rtl; int hash; int value; } ;
typedef int rtx ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 struct constant_descriptor_tree* FUNC_1 (int ,struct constant_descriptor_tree*,int ) ;

rtx
FUNC_2 (tree VAR_2)
{
  struct constant_descriptor_tree *VAR_3;
  struct constant_descriptor_tree VAR_4;

  VAR_4.value = VAR_2;
  VAR_4.hash = FUNC_0 (VAR_2);
  VAR_3 = FUNC_1 (VAR_1, &VAR_4, VAR_4.hash);

  return (VAR_3 ? VAR_3->rtl : VAR_0);
}
