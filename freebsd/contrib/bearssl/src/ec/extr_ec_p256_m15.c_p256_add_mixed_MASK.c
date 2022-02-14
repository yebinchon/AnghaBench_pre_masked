
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_4__ {int* x; int* y; int* z; } ;
typedef TYPE_1__ p256_jacobian ;


 int* VAR_0 ;
 int FUNC_0 (int*,int*,int) ;
 int FUNC_1 (int*,int*,int*) ;
 int FUNC_2 (int*,int*,int) ;
 int FUNC_3 (int*) ;
 int FUNC_4 (int*) ;
 int FUNC_5 (int*,int*) ;

__attribute__((used)) static uint32_t
FUNC_6(p256_jacobian *VAR_1, const p256_jacobian *VAR_2)
{
 uint32_t VAR_3[20], VAR_4[20], VAR_5[20], VAR_6[20], VAR_7[20], VAR_8[20], VAR_9[20];
 uint32_t VAR_10;
 int VAR_11;




 FUNC_0(VAR_3, VAR_1->x, sizeof VAR_3);
 FUNC_0(VAR_5, VAR_1->y, sizeof VAR_5);




 FUNC_5(VAR_6, VAR_1->z);
 FUNC_1(VAR_4, VAR_2->x, VAR_6);
 FUNC_1(VAR_7, VAR_1->z, VAR_6);
 FUNC_1(VAR_6, VAR_2->y, VAR_7);






 for (VAR_11 = 0; VAR_11 < 20; VAR_11 ++) {
  VAR_4[VAR_11] += (VAR_0[VAR_11] << 1) - VAR_3[VAR_11];
  VAR_6[VAR_11] += (VAR_0[VAR_11] << 1) - VAR_5[VAR_11];
 }
 FUNC_2(VAR_4, VAR_4, 20);
 FUNC_2(VAR_6, VAR_6, 20);
 FUNC_3(VAR_6);
 FUNC_4(VAR_6);
 VAR_10 = 0;
 for (VAR_11 = 0; VAR_11 < 20; VAR_11 ++) {
  VAR_10 |= VAR_6[VAR_11];
 }
 VAR_10 = (VAR_10 | -VAR_10) >> 31;




 FUNC_5(VAR_9, VAR_4);
 FUNC_1(VAR_8, VAR_3, VAR_9);
 FUNC_1(VAR_7, VAR_9, VAR_4);




 FUNC_5(VAR_1->x, VAR_6);
 for (VAR_11 = 0; VAR_11 < 20; VAR_11 ++) {
  VAR_1->x[VAR_11] += (VAR_0[VAR_11] << 3) - VAR_7[VAR_11] - (VAR_8[VAR_11] << 1);
 }
 FUNC_2(VAR_1->x, VAR_1->x, 20);
 FUNC_3(VAR_1->x);




 for (VAR_11 = 0; VAR_11 < 20; VAR_11 ++) {
  VAR_8[VAR_11] += (VAR_0[VAR_11] << 1) - VAR_1->x[VAR_11];
 }
 FUNC_2(VAR_8, VAR_8, 20);
 FUNC_1(VAR_1->y, VAR_6, VAR_8);
 FUNC_1(VAR_3, VAR_7, VAR_5);
 for (VAR_11 = 0; VAR_11 < 20; VAR_11 ++) {
  VAR_1->y[VAR_11] += (VAR_0[VAR_11] << 1) - VAR_3[VAR_11];
 }
 FUNC_2(VAR_1->y, VAR_1->y, 20);
 FUNC_3(VAR_1->y);




 FUNC_1(VAR_1->z, VAR_1->z, VAR_4);

 return VAR_10;
}
