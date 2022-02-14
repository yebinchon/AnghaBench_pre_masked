
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct torus {int z_sz; int y_sz; int x_sz; } ;
struct t_switch {int k; int j; int i; } ;


 int FUNC_0 (int ,int ,int ) ;
 struct t_switch* FUNC_1 (struct t_switch*,unsigned int,int) ;

__attribute__((used)) static
int FUNC_2(struct torus *VAR_0, unsigned VAR_1,
    struct t_switch *VAR_2, struct t_switch *VAR_3)
{
 int VAR_4 = 0;
 struct t_switch *VAR_5;

 switch (VAR_1) {
 case 0:
  VAR_4 = FUNC_0(VAR_2->i, VAR_3->i, VAR_0->x_sz);
  break;
 case 1:
  VAR_4 = FUNC_0(VAR_2->j, VAR_3->j, VAR_0->y_sz);
  break;
 case 2:
  VAR_4 = FUNC_0(VAR_2->k, VAR_3->k, VAR_0->z_sz);
  break;
 default:
  break;
 }
 if (!VAR_4)
  goto out;

 VAR_5 = VAR_2;
 while (VAR_5) {
  VAR_5 = FUNC_1(VAR_5, VAR_1, VAR_4);
  if (VAR_5 == VAR_3)
   goto out;
 }
 VAR_4 *= -1;
 VAR_5 = VAR_2;
 while (VAR_5) {
  VAR_5 = FUNC_1(VAR_5, VAR_1, VAR_4);
  if (VAR_5 == VAR_3)
   goto out;
 }
 VAR_4 = 0;
out:
 return VAR_4;
}
