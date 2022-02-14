
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct type_brand_s {int seq; int name; } ;
typedef scalar_t__ splay_tree_key ;


 int FUNC_0 (int ,int ) ;

__attribute__((used)) static int
FUNC_1 (splay_tree_key VAR_0, splay_tree_key VAR_1)
{
  struct type_brand_s * VAR_2 = (struct type_brand_s *) VAR_0;
  struct type_brand_s * VAR_3 = (struct type_brand_s *) VAR_1;

  int VAR_4 = FUNC_0(VAR_2->name, VAR_3->name);
  if (VAR_4 == 0)
    return VAR_3->seq - VAR_2->seq;
  else
    return VAR_4;
}
