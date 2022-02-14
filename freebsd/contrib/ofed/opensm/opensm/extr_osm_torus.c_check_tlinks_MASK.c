
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct torus {int z_sz; int y_sz; int x_sz; struct t_switch**** sw; } ;
struct t_switch {int dummy; } ;


 int FUNC_0 (int,int ) ;
 int FUNC_1 (struct torus*,int,struct t_switch*,struct t_switch*) ;

__attribute__((used)) static
void FUNC_2(struct torus *VAR_0, int VAR_1, int VAR_2, int VAR_3)
{
 struct t_switch ****VAR_4 = VAR_0->sw;
 int VAR_5 = FUNC_0(VAR_1 + 1, VAR_0->x_sz);
 int VAR_6 = FUNC_0(VAR_2 + 1, VAR_0->y_sz);
 int VAR_7 = FUNC_0(VAR_3 + 1, VAR_0->z_sz);






 if (VAR_4[VAR_1][VAR_2][VAR_3] && VAR_4[VAR_5][VAR_2][VAR_3])
  FUNC_1(VAR_0, 0, VAR_4[VAR_1][VAR_2][VAR_3], VAR_4[VAR_5][VAR_2][VAR_3]);

 if (VAR_4[VAR_1][VAR_6][VAR_3] && VAR_4[VAR_5][VAR_6][VAR_3])
  FUNC_1(VAR_0, 0, VAR_4[VAR_1][VAR_6][VAR_3], VAR_4[VAR_5][VAR_6][VAR_3]);

 if (VAR_4[VAR_1][VAR_2][VAR_7] && VAR_4[VAR_5][VAR_2][VAR_7])
  FUNC_1(VAR_0, 0, VAR_4[VAR_1][VAR_2][VAR_7], VAR_4[VAR_5][VAR_2][VAR_7]);

 if (VAR_4[VAR_1][VAR_6][VAR_7] && VAR_4[VAR_5][VAR_6][VAR_7])
  FUNC_1(VAR_0, 0, VAR_4[VAR_1][VAR_6][VAR_7], VAR_4[VAR_5][VAR_6][VAR_7]);


 if (VAR_4[VAR_1][VAR_2][VAR_3] && VAR_4[VAR_1][VAR_6][VAR_3])
  FUNC_1(VAR_0, 1, VAR_4[VAR_1][VAR_2][VAR_3], VAR_4[VAR_1][VAR_6][VAR_3]);

 if (VAR_4[VAR_5][VAR_2][VAR_3] && VAR_4[VAR_5][VAR_6][VAR_3])
  FUNC_1(VAR_0, 1, VAR_4[VAR_5][VAR_2][VAR_3], VAR_4[VAR_5][VAR_6][VAR_3]);

 if (VAR_4[VAR_1][VAR_2][VAR_7] && VAR_4[VAR_1][VAR_6][VAR_7])
  FUNC_1(VAR_0, 1, VAR_4[VAR_1][VAR_2][VAR_7], VAR_4[VAR_1][VAR_6][VAR_7]);

 if (VAR_4[VAR_5][VAR_2][VAR_7] && VAR_4[VAR_5][VAR_6][VAR_7])
  FUNC_1(VAR_0, 1, VAR_4[VAR_5][VAR_2][VAR_7], VAR_4[VAR_5][VAR_6][VAR_7]);


 if (VAR_4[VAR_1][VAR_2][VAR_3] && VAR_4[VAR_1][VAR_2][VAR_7])
  FUNC_1(VAR_0, 2, VAR_4[VAR_1][VAR_2][VAR_3], VAR_4[VAR_1][VAR_2][VAR_7]);

 if (VAR_4[VAR_5][VAR_2][VAR_3] && VAR_4[VAR_5][VAR_2][VAR_7])
  FUNC_1(VAR_0, 2, VAR_4[VAR_5][VAR_2][VAR_3], VAR_4[VAR_5][VAR_2][VAR_7]);

 if (VAR_4[VAR_1][VAR_6][VAR_3] && VAR_4[VAR_1][VAR_6][VAR_7])
  FUNC_1(VAR_0, 2, VAR_4[VAR_1][VAR_6][VAR_3], VAR_4[VAR_1][VAR_6][VAR_7]);

 if (VAR_4[VAR_5][VAR_6][VAR_3] && VAR_4[VAR_5][VAR_6][VAR_7])
  FUNC_1(VAR_0, 2, VAR_4[VAR_5][VAR_6][VAR_3], VAR_4[VAR_5][VAR_6][VAR_7]);
}
