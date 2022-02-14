
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ clock_t ;
typedef int br_shake_context ;


 double VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int) ;
 int FUNC_2 (int *,unsigned char*,int) ;
 int FUNC_3 (int *,unsigned char*,int) ;
 scalar_t__ FUNC_4 () ;
 int FUNC_5 (int ) ;
 int FUNC_6 (unsigned char*,char,int) ;
 int FUNC_7 (char*,int,double) ;
 int VAR_1 ;

__attribute__((used)) static void
FUNC_8(int VAR_2)
{
 unsigned char VAR_3[8192];
 br_shake_context VAR_4;
 int VAR_5;
 long VAR_6;

 FUNC_6(VAR_3, 'D', sizeof VAR_3);
 FUNC_1(&VAR_4, VAR_2);
 for (VAR_5 = 0; VAR_5 < 10; VAR_5 ++) {
  FUNC_2(&VAR_4, VAR_3, sizeof VAR_3);
 }
 VAR_6 = 10;
 for (;;) {
  clock_t VAR_7, VAR_8;
  double VAR_9;
  long VAR_10;

  VAR_7 = FUNC_4();
  for (VAR_10 = VAR_6; VAR_10 > 0; VAR_10 --) {
   FUNC_2(&VAR_4, VAR_3, sizeof VAR_3);
  }
  VAR_8 = FUNC_4();
  VAR_9 = (double)(VAR_8 - VAR_7) / VAR_0;
  if (VAR_9 >= 2.0) {
   FUNC_7("SHAKE%-3d (inject)              %8.2f MB/s\n",
    VAR_2,
    ((double)sizeof VAR_3) * (double)VAR_6
    / (VAR_9 * 1000000.0));
   FUNC_5(VAR_1);
   break;
  }
  VAR_6 <<= 1;
 }

 FUNC_0(&VAR_4);
 for (VAR_5 = 0; VAR_5 < 10; VAR_5 ++) {
  FUNC_3(&VAR_4, VAR_3, sizeof VAR_3);
 }

 VAR_6 = 10;
 for (;;) {
  clock_t VAR_11, VAR_12;
  double VAR_13;
  long VAR_14;

  VAR_11 = FUNC_4();
  for (VAR_14 = VAR_6; VAR_14 > 0; VAR_14 --) {
   FUNC_3(&VAR_4, VAR_3, sizeof VAR_3);
  }
  VAR_12 = FUNC_4();
  VAR_13 = (double)(VAR_12 - VAR_11) / VAR_0;
  if (VAR_13 >= 2.0) {
   FUNC_7("SHAKE%-3d (produce)             %8.2f MB/s\n",
    VAR_2,
    ((double)sizeof VAR_3) * (double)VAR_6
    / (VAR_13 * 1000000.0));
   FUNC_5(VAR_1);
   break;
  }
  VAR_6 <<= 1;
 }
}
