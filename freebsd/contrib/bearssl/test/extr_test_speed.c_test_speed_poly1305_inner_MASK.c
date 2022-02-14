
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ clock_t ;
typedef int (* br_poly1305_run ) (unsigned char*,unsigned char*,unsigned char*,int,unsigned char*,int,unsigned char*,int *,int ) ;


 double VAR_0 ;
 scalar_t__ FUNC_0 () ;
 int VAR_1 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (unsigned char*,char,int) ;
 int FUNC_3 (char*,char*,double) ;
 int VAR_2 ;

__attribute__((used)) static void
FUNC_4(char *VAR_3, br_poly1305_run VAR_4)
{
 unsigned char VAR_5[8192], VAR_6[32], VAR_7[12], VAR_8[13], VAR_9[16];
 int VAR_10;
 long VAR_11;

 FUNC_2(VAR_6, 'K', sizeof VAR_6);
 FUNC_2(VAR_7, 'I', sizeof VAR_7);
 FUNC_2(VAR_8, 'A', sizeof VAR_8);
 FUNC_2(VAR_5, 'T', sizeof VAR_5);
 for (VAR_10 = 0; VAR_10 < 10; VAR_10 ++) {
  VAR_4(VAR_6, VAR_7, VAR_5, sizeof VAR_5,
   VAR_8, sizeof VAR_8, VAR_9, &VAR_1, 0);
 }
 VAR_11 = 10;
 for (;;) {
  clock_t VAR_12, VAR_13;
  double VAR_14;
  long VAR_15;

  VAR_12 = FUNC_0();
  for (VAR_15 = VAR_11; VAR_15 > 0; VAR_15 --) {
   VAR_4(VAR_6, VAR_7, VAR_5, sizeof VAR_5,
    VAR_8, sizeof VAR_8, VAR_9, &VAR_1, 0);
  }
  VAR_13 = FUNC_0();
  VAR_14 = (double)(VAR_13 - VAR_12) / VAR_0;
  if (VAR_14 >= 2.0) {
   FUNC_3("%-30s %8.2f MB/s\n", VAR_3,
    ((double)sizeof VAR_5) * (double)VAR_11
    / (VAR_14 * 1000000.0));
   FUNC_1(VAR_2);
   return;
  }
  VAR_11 <<= 1;
 }
}
