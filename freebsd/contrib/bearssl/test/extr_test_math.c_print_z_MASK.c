
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int mpz_t ;


 int FUNC_0 (unsigned char*,unsigned char*,size_t) ;
 int FUNC_1 (unsigned char*,int ,size_t) ;
 int FUNC_2 (unsigned char*,size_t*,int,int,int ,int ,int ) ;
 int FUNC_3 (char*,...) ;

__attribute__((used)) static void
FUNC_4(mpz_t VAR_0)
{
 unsigned char VAR_1[1000];
 size_t VAR_2, VAR_3;

 FUNC_2(VAR_1, &VAR_2, 1, 1, 0, 0, VAR_0);
 if (VAR_2 == 0) {
  FUNC_3(" 00");
  return;
 }
 if ((VAR_2 & 3) != 0) {
  VAR_3 = 4 - (VAR_2 & 3);
  FUNC_0(VAR_1 + VAR_3, VAR_1, VAR_2);
  FUNC_1(VAR_1, 0, VAR_3);
  VAR_2 += VAR_3;
 }
 for (VAR_3 = 0; VAR_3 < VAR_2; VAR_3 += 4) {
  FUNC_3(" %02X%02X%02X%02X",
   VAR_1[VAR_3], VAR_1[VAR_3 + 1], VAR_1[VAR_3 + 2], VAR_1[VAR_3 + 3]);
 }
}
