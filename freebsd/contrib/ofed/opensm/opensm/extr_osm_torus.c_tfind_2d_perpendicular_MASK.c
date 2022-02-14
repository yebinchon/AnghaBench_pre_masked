
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct t_switch {int tmp; } ;
struct f_switch {int dummy; } ;


 struct f_switch* FUNC_0 (int ,int ,int ) ;

__attribute__((used)) static
struct f_switch *FUNC_1(struct t_switch *VAR_0,
     struct t_switch *VAR_1,
     struct t_switch *VAR_2)
{
 if (!(VAR_0 && VAR_1 && VAR_2))
  return ((void*)0);

 return FUNC_0(VAR_0->tmp, VAR_1->tmp, VAR_2->tmp);
}
