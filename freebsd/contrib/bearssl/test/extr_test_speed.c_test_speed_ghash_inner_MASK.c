
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ clock_t ;
typedef int (* br_ghash ) (unsigned char*,unsigned char*,unsigned char*,int) ;


 double VAR_0 ;
 scalar_t__ FUNC_0 () ;
 int FUNC_1 (int ) ;
 int FUNC_2 (unsigned char*,char,int) ;
 int FUNC_3 (char*,char*,double) ;
 int VAR_1 ;

__attribute__((used)) static void
FUNC_4(char *VAR_2, br_ghash VAR_3)
{
 unsigned char VAR_4[8192], VAR_5[16], VAR_6[16];
 int VAR_7;
 long VAR_8;

 FUNC_2(VAR_4, 'T', sizeof VAR_4);
 FUNC_2(VAR_5, 'P', sizeof VAR_5);
 FUNC_2(VAR_6, 0, sizeof VAR_6);
 for (VAR_7 = 0; VAR_7 < 10; VAR_7 ++) {
  VAR_3(VAR_6, VAR_5, VAR_4, sizeof VAR_4);
 }
 VAR_8 = 10;
 for (;;) {
  clock_t VAR_9, VAR_10;
  double VAR_11;
  long VAR_12;

  VAR_9 = FUNC_0();
  for (VAR_12 = VAR_8; VAR_12 > 0; VAR_12 --) {
   VAR_3(VAR_6, VAR_5, VAR_4, sizeof VAR_4);
  }
  VAR_10 = FUNC_0();
  VAR_11 = (double)(VAR_10 - VAR_9) / VAR_0;
  if (VAR_11 >= 2.0) {
   FUNC_3("%-30s %8.2f MB/s\n", VAR_2,
    ((double)sizeof VAR_4) * (double)VAR_8
    / (VAR_11 * 1000000.0));
   FUNC_1(VAR_1);
   return;
  }
  VAR_8 <<= 1;
 }
}
