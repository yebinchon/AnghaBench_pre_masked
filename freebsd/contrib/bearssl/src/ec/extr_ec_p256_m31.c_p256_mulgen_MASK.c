
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
typedef int p256_jacobian ;


 int FUNC_0 (int,int *,int *,int) ;
 int FUNC_1 (int,int ) ;
 int FUNC_2 (int *,int) ;
 int FUNC_3 (int *,int ,int) ;
 int FUNC_4 (int *,int *) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static void
FUNC_6(p256_jacobian *VAR_0, const unsigned char *VAR_1, size_t VAR_2)
{
 p256_jacobian VAR_3;
 uint32_t VAR_4;

 FUNC_3(&VAR_3, 0, sizeof VAR_3);
 VAR_4 = 1;
 while (VAR_2 -- > 0) {
  int VAR_5;
  unsigned VAR_6;

  VAR_6 = *VAR_1 ++;
  for (VAR_5 = 0; VAR_5 < 2; VAR_5 ++) {
   uint32_t VAR_7;
   uint32_t VAR_8;
   p256_jacobian VAR_9, VAR_10;

   FUNC_5(&VAR_3);
   FUNC_5(&VAR_3);
   FUNC_5(&VAR_3);
   FUNC_5(&VAR_3);
   VAR_7 = (VAR_6 >> 4) & 0x0F;
   VAR_8 = FUNC_1(VAR_7, 0);
   FUNC_2(&VAR_9, VAR_7);
   VAR_10 = VAR_3;
   FUNC_4(&VAR_10, &VAR_9);
   FUNC_0(VAR_8 & VAR_4, &VAR_3, &VAR_9, sizeof VAR_3);
   FUNC_0(VAR_8 & ~VAR_4, &VAR_3, &VAR_10, sizeof VAR_3);
   VAR_4 &= ~VAR_8;
   VAR_6 <<= 4;
  }
 }
 *VAR_0 = VAR_3;
}
