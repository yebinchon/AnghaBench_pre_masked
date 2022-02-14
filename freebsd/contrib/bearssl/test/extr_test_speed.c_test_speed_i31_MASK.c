
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
typedef scalar_t__ clock_t ;


 double VAR_0 ;
 int FUNC_0 (int *,unsigned char const*,int) ;
 int FUNC_1 (int *,unsigned char*,int,int *) ;
 int FUNC_2 (int *,int *,int ) ;
 int FUNC_3 (int *,int *,int *,int ,int *) ;
 int FUNC_4 (int *,int *,int *,int *,int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int *,int *) ;
 scalar_t__ FUNC_7 () ;
 int FUNC_8 (int ) ;
 int FUNC_9 (unsigned char*,unsigned char,int) ;
 int FUNC_10 (char*,char*,double) ;
 int VAR_1 ;

__attribute__((used)) static void
FUNC_11(void)
{
 static const unsigned char VAR_2[] = {

  0x01, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
  0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
  0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
  0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
  0xFF, 0xFA, 0x51, 0x86, 0x87, 0x83, 0xBF, 0x2F,
  0x96, 0x6B, 0x7F, 0xCC, 0x01, 0x48, 0xF7, 0x09,
  0xA5, 0xD0, 0x3B, 0xB5, 0xC9, 0xB8, 0x89, 0x9C,
  0x47, 0xAE, 0xBB, 0x6F, 0xB7, 0x1E, 0x91, 0x38,
  0x64, 0x09
 };

 unsigned char VAR_3[60 + sizeof VAR_2];
 uint32_t VAR_4[20], VAR_5[20], VAR_6[20], VAR_7[20], VAR_8[60], VAR_9;
 int VAR_10;
 long VAR_11;

 FUNC_0(VAR_4, VAR_2, sizeof VAR_2);
 VAR_9 = FUNC_5(VAR_4[1]);
 FUNC_9(VAR_3, 'T', sizeof VAR_3);
 FUNC_1(VAR_5, VAR_3, sizeof VAR_3, VAR_4);
 FUNC_9(VAR_3, 'U', sizeof VAR_3);
 FUNC_1(VAR_6, VAR_3, sizeof VAR_3, VAR_4);

 for (VAR_10 = 0; VAR_10 < 10; VAR_10 ++) {
  FUNC_6(VAR_5, VAR_4);
 }
 VAR_11 = 10;
 for (;;) {
  clock_t VAR_12, VAR_13;
  double VAR_14;
  long VAR_15;

  VAR_12 = FUNC_7();
  for (VAR_15 = VAR_11; VAR_15 > 0; VAR_15 --) {
   FUNC_6(VAR_5, VAR_4);
  }
  VAR_13 = FUNC_7();
  VAR_14 = (double)(VAR_13 - VAR_12) / VAR_0;
  if (VAR_14 >= 2.0) {
   FUNC_10("%-30s %8.2f ops/s\n", "i31 to_monty",
    (double)VAR_11 / VAR_14);
   FUNC_8(VAR_1);
   break;
  }
  VAR_11 <<= 1;
 }

 for (VAR_10 = 0; VAR_10 < 10; VAR_10 ++) {
  FUNC_2(VAR_5, VAR_4, VAR_9);
 }
 VAR_11 = 10;
 for (;;) {
  clock_t VAR_16, VAR_17;
  double VAR_18;
  long VAR_19;

  VAR_16 = FUNC_7();
  for (VAR_19 = VAR_11; VAR_19 > 0; VAR_19 --) {
   FUNC_2(VAR_5, VAR_4, VAR_9);
  }
  VAR_17 = FUNC_7();
  VAR_18 = (double)(VAR_17 - VAR_16) / VAR_0;
  if (VAR_18 >= 2.0) {
   FUNC_10("%-30s %8.2f ops/s\n", "i31 from_monty",
    (double)VAR_11 / VAR_18);
   FUNC_8(VAR_1);
   break;
  }
  VAR_11 <<= 1;
 }

 for (VAR_10 = 0; VAR_10 < 10; VAR_10 ++) {
  FUNC_4(VAR_7, VAR_5, VAR_6, VAR_4, VAR_9);
 }
 VAR_11 = 10;
 for (;;) {
  clock_t VAR_20, VAR_21;
  double VAR_22;
  long VAR_23;

  VAR_20 = FUNC_7();
  for (VAR_23 = VAR_11; VAR_23 > 0; VAR_23 --) {
   FUNC_4(VAR_7, VAR_5, VAR_6, VAR_4, VAR_9);
  }
  VAR_21 = FUNC_7();
  VAR_22 = (double)(VAR_21 - VAR_20) / VAR_0;
  if (VAR_22 >= 2.0) {
   FUNC_10("%-30s %8.2f ops/s\n", "i31 montymul",
    (double)VAR_11 / VAR_22);
   FUNC_8(VAR_1);
   break;
  }
  VAR_11 <<= 1;
 }

 for (VAR_10 = 0; VAR_10 < 10; VAR_10 ++) {
  FUNC_3(VAR_5, VAR_6, VAR_4, VAR_9, VAR_8);
 }
 VAR_11 = 10;
 for (;;) {
  clock_t VAR_24, VAR_25;
  double VAR_26;
  long VAR_27;

  VAR_24 = FUNC_7();
  for (VAR_27 = VAR_11; VAR_27 > 0; VAR_27 --) {
   FUNC_3(VAR_5, VAR_6, VAR_4, VAR_9, VAR_8);
  }
  VAR_25 = FUNC_7();
  VAR_26 = (double)(VAR_25 - VAR_24) / VAR_0;
  if (VAR_26 >= 2.0) {
   FUNC_10("%-30s %8.2f ops/s\n", "i31 moddiv",
    (double)VAR_11 / VAR_26);
   FUNC_8(VAR_1);
   break;
  }
  VAR_11 <<= 1;
 }
}
