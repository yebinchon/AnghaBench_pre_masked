
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct x_bound {int x_cur; int x_min; int x_max; } ;


 int VAR_0 ;

__attribute__((used)) static int
FUNC_0(struct x_bound *VAR_1, int VAR_2)
{
 int VAR_3;

 VAR_3 = VAR_1->x_cur;
 if (VAR_3 < VAR_1->x_min)
  VAR_3 = VAR_1->x_min;
 else if (VAR_3 > VAR_1->x_max)
  VAR_3 = VAR_1->x_max;
 if (VAR_2) {
  VAR_3 = VAR_3 * VAR_0 / 1000;
  if (VAR_3 < VAR_2)
   VAR_3 = VAR_2;
 }
 return VAR_3;
}
