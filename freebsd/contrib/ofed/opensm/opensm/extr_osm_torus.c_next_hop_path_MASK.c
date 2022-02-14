
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct torus {struct t_switch**** sw; } ;
struct t_switch {size_t i; size_t j; size_t k; } ;


 int FUNC_0 (struct torus*,unsigned int,struct t_switch*,struct t_switch*) ;

__attribute__((used)) static
bool FUNC_1(struct torus *VAR_0, unsigned VAR_1,
     struct t_switch *VAR_2, struct t_switch *VAR_3,
     unsigned *VAR_4)
{
 struct t_switch *VAR_5 = ((void*)0);
 bool VAR_6 = 0;
 int VAR_7;





 switch (VAR_1) {
 case 0:
  VAR_5 = VAR_0->sw[VAR_3->i][VAR_2->j][VAR_2->k];
  break;
 case 1:
  VAR_5 = VAR_0->sw[VAR_2->i][VAR_3->j][VAR_2->k];
  break;
 case 2:
  VAR_5 = VAR_0->sw[VAR_2->i][VAR_2->j][VAR_3->k];
  break;
 default:
  goto out;
 }
 if (VAR_5) {
  VAR_7 = FUNC_0(VAR_0, VAR_1, VAR_2, VAR_5);
  VAR_1 *= 2;
  if (VAR_7 > 0)
   *VAR_4 = VAR_1 + 1;
  else if (VAR_7 < 0)
   *VAR_4 = VAR_1;
  else
   goto out;
  VAR_6 = 1;
 }
out:
 return VAR_6;
}
