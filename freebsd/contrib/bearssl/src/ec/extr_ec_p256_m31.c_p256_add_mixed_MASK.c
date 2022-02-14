
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_4__ {int* x; int* y; int* z; } ;
typedef TYPE_1__ p256_jacobian ;


 int FUNC_0 (int*,int*,int) ;
 int FUNC_1 (int*,int*,int*) ;
 int FUNC_2 (int*) ;
 int FUNC_3 (int*,int*) ;
 int FUNC_4 (int*,int*,int*) ;

__attribute__((used)) static uint32_t
FUNC_5(p256_jacobian *VAR_0, const p256_jacobian *VAR_1)
{
 uint32_t VAR_2[9], VAR_3[9], VAR_4[9], VAR_5[9], VAR_6[9], VAR_7[9], VAR_8[9];
 uint32_t VAR_9;
 int VAR_10;




 FUNC_0(VAR_2, VAR_0->x, sizeof VAR_2);
 FUNC_0(VAR_4, VAR_0->y, sizeof VAR_4);




 FUNC_3(VAR_5, VAR_0->z);
 FUNC_1(VAR_3, VAR_1->x, VAR_5);
 FUNC_1(VAR_6, VAR_0->z, VAR_5);
 FUNC_1(VAR_5, VAR_1->y, VAR_6);






 FUNC_4(VAR_3, VAR_3, VAR_2);
 FUNC_4(VAR_5, VAR_5, VAR_4);
 FUNC_2(VAR_5);
 VAR_9 = 0;
 for (VAR_10 = 0; VAR_10 < 9; VAR_10 ++) {
  VAR_9 |= VAR_5[VAR_10];
 }
 VAR_9 = (VAR_9 | -VAR_9) >> 31;




 FUNC_3(VAR_8, VAR_3);
 FUNC_1(VAR_7, VAR_2, VAR_8);
 FUNC_1(VAR_6, VAR_8, VAR_3);




 FUNC_3(VAR_0->x, VAR_5);
 FUNC_4(VAR_0->x, VAR_0->x, VAR_6);
 FUNC_4(VAR_0->x, VAR_0->x, VAR_7);
 FUNC_4(VAR_0->x, VAR_0->x, VAR_7);




 FUNC_4(VAR_7, VAR_7, VAR_0->x);
 FUNC_1(VAR_0->y, VAR_5, VAR_7);
 FUNC_1(VAR_2, VAR_6, VAR_4);
 FUNC_4(VAR_0->y, VAR_0->y, VAR_2);




 FUNC_1(VAR_0->z, VAR_0->z, VAR_3);

 return VAR_9;
}
