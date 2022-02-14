
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint32_t ;
typedef int mpz_t ;
struct TYPE_2__ {int (* encode ) (unsigned char*,size_t,int*) ;} ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 TYPE_1__* VAR_1 ;
 scalar_t__ FUNC_1 (unsigned char*,unsigned char*,size_t) ;
 int FUNC_2 (unsigned char*,size_t*,int,int,int ,int ,int ) ;
 int FUNC_3 (int*) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (char*,...) ;
 int FUNC_6 (unsigned char*,size_t,int*) ;

__attribute__((used)) static void
FUNC_7(uint32_t *VAR_2, mpz_t VAR_3)
{
 unsigned char VAR_4[1000];
 unsigned char VAR_5[1000];
 size_t VAR_6, VAR_7;
 int VAR_8;

 VAR_6 = ((VAR_2[0] + 31) & ~(uint32_t)31) >> 3;
 VAR_1->encode(VAR_4, VAR_6, VAR_2);
 FUNC_2(VAR_5, &VAR_7, 1, 1, 0, 0, VAR_3);
 VAR_8 = 1;
 if (VAR_6 < VAR_7) {
  VAR_8 = 0;
 } else if (VAR_6 > VAR_7) {
  size_t VAR_9;

  for (VAR_9 = VAR_6; VAR_9 > VAR_7; VAR_9 --) {
   if (VAR_4[VAR_6 - VAR_9] != 0) {
    VAR_8 = 0;
    break;
   }
  }
 }
 VAR_8 = VAR_8 && FUNC_1(VAR_4 + VAR_6 - VAR_7, VAR_5, VAR_7) == 0;
 if (!VAR_8) {
  size_t VAR_10;

  FUNC_5("Mismatch:\n");
  FUNC_5("  x = ");
  FUNC_3(VAR_2);
  FUNC_5("\n");
  FUNC_5("  ex = ");
  for (VAR_10 = 0; VAR_10 < VAR_6; VAR_10 ++) {
   FUNC_5("%02X", VAR_4[VAR_10]);
  }
  FUNC_5("\n");
  FUNC_5("  z = ");
  FUNC_4(VAR_3);
  FUNC_5("\n");
  FUNC_0(VAR_0);
 }
}
