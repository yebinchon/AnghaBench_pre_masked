
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_3__ {int* z; int* x; int* y; } ;
typedef TYPE_1__ p256_jacobian ;


 int* VAR_0 ;
 int FUNC_0 (int,int) ;
 int FUNC_1 (int*,int*,int*) ;
 int FUNC_2 (int*,int*,int) ;
 int FUNC_3 (int*) ;
 int FUNC_4 (int*,int*) ;

__attribute__((used)) static void
FUNC_5(p256_jacobian *VAR_1)
{
 uint32_t VAR_2[20], VAR_3[20], VAR_4[20], VAR_5[20];
 int VAR_6;




 FUNC_4(VAR_2, VAR_1->z);




 for (VAR_6 = 0; VAR_6 < 20; VAR_6 ++) {
  VAR_3[VAR_6] = (VAR_0[VAR_6] << 1) + VAR_1->x[VAR_6] - VAR_2[VAR_6];
  VAR_2[VAR_6] += VAR_1->x[VAR_6];
 }
 FUNC_2(VAR_2, VAR_2, 20);
 FUNC_2(VAR_3, VAR_3, 20);




 FUNC_1(VAR_4, VAR_2, VAR_3);
 for (VAR_6 = 0; VAR_6 < 20; VAR_6 ++) {
  VAR_2[VAR_6] = FUNC_0(3, VAR_4[VAR_6]);
 }
 FUNC_2(VAR_2, VAR_2, 20);




 FUNC_4(VAR_4, VAR_1->y);
 for (VAR_6 = 0; VAR_6 < 20; VAR_6 ++) {
  VAR_4[VAR_6] <<= 1;
 }
 FUNC_2(VAR_4, VAR_4, 20);
 FUNC_1(VAR_3, VAR_1->x, VAR_4);
 for (VAR_6 = 0; VAR_6 < 20; VAR_6 ++) {
  VAR_3[VAR_6] <<= 1;
 }
 FUNC_2(VAR_3, VAR_3, 20);
 FUNC_3(VAR_3);




 FUNC_4(VAR_1->x, VAR_2);
 for (VAR_6 = 0; VAR_6 < 20; VAR_6 ++) {
  VAR_1->x[VAR_6] += (VAR_0[VAR_6] << 2) - (VAR_3[VAR_6] << 1);
 }
 FUNC_2(VAR_1->x, VAR_1->x, 20);
 FUNC_3(VAR_1->x);




 FUNC_1(VAR_5, VAR_1->y, VAR_1->z);
 for (VAR_6 = 0; VAR_6 < 20; VAR_6 ++) {
  VAR_1->z[VAR_6] = VAR_5[VAR_6] << 1;
 }
 FUNC_2(VAR_1->z, VAR_1->z, 20);
 FUNC_3(VAR_1->z);





 for (VAR_6 = 0; VAR_6 < 20; VAR_6 ++) {
  VAR_3[VAR_6] += (VAR_0[VAR_6] << 1) - VAR_1->x[VAR_6];
 }
 FUNC_2(VAR_3, VAR_3, 20);
 FUNC_1(VAR_1->y, VAR_2, VAR_3);
 FUNC_4(VAR_5, VAR_4);
 for (VAR_6 = 0; VAR_6 < 20; VAR_6 ++) {
  VAR_1->y[VAR_6] += (VAR_0[VAR_6] << 2) - (VAR_5[VAR_6] << 1);
 }
 FUNC_2(VAR_1->y, VAR_1->y, 20);
 FUNC_3(VAR_1->y);
}
