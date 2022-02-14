
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct torus {int x_sz; int y_sz; struct t_switch**** sw; } ;
struct t_switch {int dummy; } ;



__attribute__((used)) static
bool FUNC_0(struct torus *VAR_0, const int VAR_1, const int VAR_2, const int VAR_3)
{
 struct t_switch ****VAR_4 = VAR_0->sw;
 bool VAR_5 = 1;
 int VAR_6, VAR_7;

 for (VAR_6 = 0; VAR_6 < VAR_0->x_sz && VAR_5; VAR_6++)
  VAR_5 = VAR_4[VAR_6][VAR_2][VAR_3];

 for (VAR_7 = 0; VAR_7 < VAR_0->y_sz && VAR_5; VAR_7++)
  VAR_5 = VAR_4[VAR_1][VAR_7][VAR_3];

 return VAR_5;
}
