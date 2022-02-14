
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_3__ {int* z; int y; int x; } ;
typedef TYPE_1__ p256_jacobian ;


 int FUNC_0 (int ,int ) ;
 int FUNC_1 (unsigned char const,int) ;
 int VAR_0 ;
 int FUNC_2 (int *,int *,int ) ;
 int FUNC_3 (int *,unsigned char const*,int) ;
 int FUNC_4 (int ,int *,int) ;
 int FUNC_5 (int*,int ,int) ;
 int FUNC_6 (int *,int *,int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *,int *) ;
 int FUNC_9 (int *,int *,int *) ;

__attribute__((used)) static uint32_t
FUNC_10(p256_jacobian *VAR_1, const void *VAR_2, size_t VAR_3)
{
 const unsigned char *VAR_4;
 uint32_t VAR_5[9], VAR_6[9], VAR_7[9], VAR_8[9];
 uint32_t VAR_9;
 int VAR_10;

 if (VAR_3 != 65) {
  return 0;
 }
 VAR_4 = VAR_2;







 VAR_9 = FUNC_1(VAR_4[0], 0x04);





 VAR_5[8] = FUNC_3(VAR_5, VAR_4 + 1, 32);
 VAR_6[8] = FUNC_3(VAR_6, VAR_4 + 33, 32);
 VAR_9 |= FUNC_7(VAR_5);
 VAR_9 |= FUNC_7(VAR_6);




 FUNC_8(VAR_7, VAR_5);
 FUNC_6(VAR_7, VAR_5, VAR_7);
 FUNC_8(VAR_8, VAR_6);
 FUNC_9(VAR_7, VAR_7, VAR_5);
 FUNC_9(VAR_7, VAR_7, VAR_5);
 FUNC_9(VAR_7, VAR_7, VAR_5);
 FUNC_2(VAR_7, VAR_7, VAR_0);
 FUNC_9(VAR_7, VAR_7, VAR_8);
 FUNC_7(VAR_7);
 for (VAR_10 = 0; VAR_10 < 9; VAR_10 ++) {
  VAR_9 |= VAR_7[VAR_10];
 }




 FUNC_4(VAR_1->x, VAR_5, sizeof VAR_5);
 FUNC_4(VAR_1->y, VAR_6, sizeof VAR_6);
 FUNC_5(VAR_1->z, 0, sizeof VAR_1->z);
 VAR_1->z[0] = 1;
 return FUNC_0(VAR_9, 0);
}
