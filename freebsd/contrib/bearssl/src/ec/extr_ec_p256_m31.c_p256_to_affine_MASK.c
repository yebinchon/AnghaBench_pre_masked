
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_3__ {int * z; int * y; int * x; } ;
typedef TYPE_1__ p256_jacobian ;


 int FUNC_0 (int *,int *,int) ;
 int FUNC_1 (int *,int *,int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,int *) ;

__attribute__((used)) static void
FUNC_4(p256_jacobian *VAR_0)
{
 uint32_t VAR_1[9], VAR_2[9];
 int VAR_3;
 FUNC_0(VAR_1, VAR_0->z, sizeof VAR_0->z);
 for (VAR_3 = 0; VAR_3 < 30; VAR_3 ++) {
  FUNC_3(VAR_1, VAR_1);
  FUNC_1(VAR_1, VAR_1, VAR_0->z);
 }






 FUNC_0(VAR_2, VAR_0->z, sizeof VAR_0->z);
 for (VAR_3 = 1; VAR_3 < 256; VAR_3 ++) {
  FUNC_3(VAR_2, VAR_2);
  switch (VAR_3) {
  case 31:
  case 190:
  case 221:
  case 252:
   FUNC_1(VAR_2, VAR_2, VAR_1);
   break;
  case 63:
  case 253:
  case 255:
   FUNC_1(VAR_2, VAR_2, VAR_0->z);
   break;
  }
 }




 FUNC_1(VAR_1, VAR_2, VAR_2);
 FUNC_1(VAR_0->x, VAR_1, VAR_0->x);
 FUNC_1(VAR_1, VAR_1, VAR_2);
 FUNC_1(VAR_0->y, VAR_1, VAR_0->y);
 FUNC_2(VAR_0->x);
 FUNC_2(VAR_0->y);





 FUNC_1(VAR_0->z, VAR_0->z, VAR_2);
 FUNC_2(VAR_0->z);
}
