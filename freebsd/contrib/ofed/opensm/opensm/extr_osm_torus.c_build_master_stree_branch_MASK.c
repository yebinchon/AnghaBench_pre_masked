
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct t_switch {unsigned int i; unsigned int j; unsigned int k; TYPE_1__* torus; } ;
struct TYPE_2__ {unsigned int x_sz; unsigned int y_sz; unsigned int z_sz; } ;


 int FUNC_0 (struct t_switch*,struct t_switch*,unsigned int,unsigned int) ;
 struct t_switch* FUNC_1 (struct t_switch*,int,int) ;
 int FUNC_2 (struct t_switch*) ;

__attribute__((used)) static
void FUNC_3(struct t_switch *VAR_0, int VAR_1)
{
 struct t_switch *VAR_2, *VAR_3, *VAR_4;
 unsigned VAR_5, VAR_6, VAR_7, VAR_8, VAR_9;

 switch (VAR_1) {
 case 0:
  VAR_6 = VAR_0->i;
  VAR_7 = VAR_0->torus->x_sz;
  break;
 case 1:
  VAR_6 = VAR_0->j;
  VAR_7 = VAR_0->torus->y_sz;
  break;
 case 2:
  VAR_6 = VAR_0->k;
  VAR_7 = VAR_0->torus->z_sz;
  break;
 default:
  goto out;
 }






 VAR_3 = VAR_0;
 VAR_9 = 2 * VAR_1;
 VAR_4 = VAR_0;
 VAR_8 = 2 * VAR_1 + 1;

 for (VAR_5 = VAR_6; VAR_3 && VAR_5 >= 1; VAR_5--) {
  VAR_2 = FUNC_1(VAR_3, VAR_1, -1);
  if (VAR_2 && !FUNC_2(VAR_2)) {
   FUNC_0(VAR_3, VAR_2, VAR_8, VAR_9);
   VAR_3 = VAR_2;
  } else
   VAR_3 = ((void*)0);
 }
 for (VAR_5 = VAR_6; VAR_4 && VAR_5 < (VAR_7 - 1); VAR_5++) {
  VAR_2 = FUNC_1(VAR_4, VAR_1, 1);
  if (VAR_2 && !FUNC_2(VAR_2)) {
   FUNC_0(VAR_4, VAR_2, VAR_9, VAR_8);
   VAR_4 = VAR_2;
  } else
   VAR_4 = ((void*)0);
 }
 if (VAR_3 && VAR_4)
  goto out;





 for (VAR_5 = 0; VAR_5 < VAR_7; VAR_5++) {
  if (VAR_3) {
   VAR_2 = FUNC_1(VAR_3, VAR_1, -1);
   if (VAR_2 && !FUNC_2(VAR_2)) {
    FUNC_0(VAR_3, VAR_2, VAR_8, VAR_9);
    VAR_3 = VAR_2;
   } else
    VAR_3 = ((void*)0);
  }
  if (VAR_4) {
   VAR_2 = FUNC_1(VAR_4, VAR_1, 1);
   if (VAR_2 && !FUNC_2(VAR_2)) {
    FUNC_0(VAR_4, VAR_2, VAR_9, VAR_8);
    VAR_4 = VAR_2;
   } else
    VAR_4 = ((void*)0);
  }
  if (!(VAR_3 || VAR_4))
   break;
 }
out:
 return;
}
