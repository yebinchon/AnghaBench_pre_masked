
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_3__ {int* z; int y; int x; } ;
typedef TYPE_1__ p256_jacobian ;


 int FUNC_0 (int,int ) ;
 int* VAR_0 ;
 int FUNC_1 (int,int) ;
 int FUNC_2 (unsigned char const,int) ;
 int* VAR_1 ;
 int FUNC_3 (int*,unsigned char const*,int) ;
 int FUNC_4 (int ,int*,int) ;
 int FUNC_5 (int*,int ,int) ;
 int FUNC_6 (int*,int*,int*) ;
 int FUNC_7 (int*,int*,int) ;
 int FUNC_8 (int*) ;
 int FUNC_9 (int*) ;
 int FUNC_10 (int*,int*) ;

__attribute__((used)) static uint32_t
FUNC_11(p256_jacobian *VAR_2, const void *VAR_3, size_t VAR_4)
{
 const unsigned char *VAR_5;
 uint32_t VAR_6[20], VAR_7[20], VAR_8[20], VAR_9[20];
 uint32_t VAR_10;
 int VAR_11;

 if (VAR_4 != 65) {
  return 0;
 }
 VAR_5 = VAR_3;







 VAR_10 = FUNC_2(VAR_5[0], 0x04);





 VAR_6[19] = FUNC_3(VAR_6, VAR_5 + 1, 32);
 VAR_7[19] = FUNC_3(VAR_7, VAR_5 + 33, 32);
 VAR_10 |= FUNC_9(VAR_6);
 VAR_10 |= FUNC_9(VAR_7);




 FUNC_10(VAR_8, VAR_6);
 FUNC_6(VAR_8, VAR_6, VAR_8);
 FUNC_10(VAR_9, VAR_7);
 for (VAR_11 = 0; VAR_11 < 20; VAR_11 ++) {
  VAR_8[VAR_11] += (VAR_0[VAR_11] << 3) - FUNC_1(3, VAR_6[VAR_11]) + VAR_1[VAR_11] - VAR_9[VAR_11];
 }
 FUNC_7(VAR_8, VAR_8, 20);
 FUNC_8(VAR_8);
 FUNC_9(VAR_8);
 for (VAR_11 = 0; VAR_11 < 20; VAR_11 ++) {
  VAR_10 |= VAR_8[VAR_11];
 }




 FUNC_4(VAR_2->x, VAR_6, sizeof VAR_6);
 FUNC_4(VAR_2->y, VAR_7, sizeof VAR_7);
 FUNC_5(VAR_2->z, 0, sizeof VAR_2->z);
 VAR_2->z[0] = 1;
 return FUNC_0(VAR_10, 0);
}
