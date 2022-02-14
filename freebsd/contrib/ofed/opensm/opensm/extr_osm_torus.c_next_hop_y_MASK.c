
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct torus {scalar_t__*** sw; } ;
struct t_switch {size_t i; size_t j; size_t k; } ;


 int FUNC_0 (struct torus*,int,struct t_switch*,struct t_switch*,unsigned int*) ;
 int FUNC_1 (struct torus*,int,struct t_switch*,struct t_switch*,unsigned int*) ;

__attribute__((used)) static
bool FUNC_2(struct torus *VAR_0,
  struct t_switch *VAR_1, struct t_switch *VAR_2, unsigned *VAR_3)
{
 if (VAR_0->sw[VAR_1->i][VAR_2->j][VAR_1->k])




  return FUNC_1(VAR_0, 1, VAR_1, VAR_2, VAR_3);
 else





  return FUNC_0(VAR_0, 1, VAR_1, VAR_2, VAR_3);
}
