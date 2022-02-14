
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct torus {int x_sz; int y_sz; struct t_switch**** sw; } ;
struct t_switch {int dummy; } ;


 int FUNC_0 (int,int) ;
 scalar_t__ FUNC_1 (struct torus*,int,int,int const) ;

__attribute__((used)) static
struct t_switch *FUNC_2(struct torus *VAR_0, const int VAR_1)
{
 int VAR_2, VAR_3, VAR_4 = VAR_0->x_sz / 2;
 int VAR_5, VAR_6, VAR_7 = VAR_0->y_sz / 2;
 struct t_switch ****VAR_8 = VAR_0->sw;

 if (FUNC_1(VAR_0, VAR_4, VAR_7, VAR_1))
  return VAR_8[VAR_4][VAR_7][VAR_1];

 for (VAR_3 = 1, VAR_6 = 1; VAR_3 <= VAR_4 && VAR_6 <= VAR_7; VAR_3++, VAR_6++) {

  VAR_2 = FUNC_0(VAR_4 - VAR_3, VAR_0->x_sz);
  VAR_5 = FUNC_0(VAR_7 - VAR_6, VAR_0->y_sz);
  if (FUNC_1(VAR_0, VAR_2, VAR_5, VAR_1))
   return VAR_8[VAR_2][VAR_5][VAR_1];

  VAR_2 = FUNC_0(VAR_4 + VAR_3, VAR_0->x_sz);
  VAR_5 = FUNC_0(VAR_7 + VAR_6, VAR_0->y_sz);
  if (FUNC_1(VAR_0, VAR_2, VAR_5, VAR_1))
   return VAR_8[VAR_2][VAR_5][VAR_1];
 }
 return ((void*)0);
}
