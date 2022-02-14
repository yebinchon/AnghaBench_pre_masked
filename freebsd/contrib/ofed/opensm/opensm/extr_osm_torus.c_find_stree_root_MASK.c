
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct torus {int z_sz; int y_sz; int x_sz; struct t_switch**** sw; } ;
struct t_switch {int dummy; } ;


 int FUNC_0 (int,int) ;
 struct t_switch* FUNC_1 (struct torus*,int) ;

__attribute__((used)) static
struct t_switch *FUNC_2(struct torus *VAR_0)
{
 int VAR_1, VAR_2, VAR_3, VAR_4, VAR_5 = VAR_0->z_sz / 2;
 struct t_switch ****VAR_6 = VAR_0->sw;
 struct t_switch *VAR_7;
 bool VAR_8;
 for (VAR_4 = 0; VAR_4 <= VAR_5; VAR_4++) {

  VAR_3 = FUNC_0(VAR_5 - VAR_4, VAR_0->z_sz);
  VAR_8 = 1;
  for (VAR_2 = 0; VAR_2 < VAR_0->y_sz && VAR_8; VAR_2++)
   for (VAR_1 = 0; VAR_1 < VAR_0->x_sz && VAR_8; VAR_1++)
    VAR_8 = VAR_6[VAR_1][VAR_2][VAR_3];

  if (VAR_8) {
   VAR_7 = FUNC_1(VAR_0, VAR_3);
   if (VAR_7)
    goto out;
  }
  if (!VAR_4)
   continue;

  VAR_3 = FUNC_0(VAR_5 + VAR_4, VAR_0->z_sz);
  VAR_8 = 1;
  for (VAR_2 = 0; VAR_2 < VAR_0->y_sz && VAR_8; VAR_2++)
   for (VAR_1 = 0; VAR_1 < VAR_0->x_sz && VAR_8; VAR_1++)
    VAR_8 = VAR_6[VAR_1][VAR_2][VAR_3];

  if (VAR_8) {
   VAR_7 = FUNC_1(VAR_0, VAR_3);
   if (VAR_7)
    goto out;
  }
 }
 VAR_7 = FUNC_1(VAR_0, VAR_5);
out:
 return VAR_7;
}
