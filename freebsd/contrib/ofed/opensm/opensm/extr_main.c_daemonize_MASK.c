
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ pid_t ;
typedef int osm_opensm_t ;
typedef int FILE ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int,int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int *) ;
 int * FUNC_4 (scalar_t__,char*) ;
 scalar_t__ FUNC_5 () ;
 int FUNC_6 (int *,char*,int) ;
 int FUNC_7 () ;
 int FUNC_8 (char*,int ) ;
 int FUNC_9 (char*) ;
 scalar_t__ VAR_1 ;
 int FUNC_10 () ;
 int FUNC_11 () ;

__attribute__((used)) static int FUNC_12(osm_opensm_t * VAR_2)
{
 pid_t VAR_3;
 int VAR_4;
 FILE *VAR_5;

 VAR_4 = FUNC_8("/dev/null", VAR_0);
 if (VAR_4 < 0) {
  FUNC_9("open");
  return -1;
 }

 if ((VAR_3 = FUNC_5()) < 0) {
  FUNC_9("fork");
  FUNC_2(-1);
 } else if (VAR_3 > 0)
  FUNC_2(0);

 FUNC_11();

 if ((VAR_3 = FUNC_5()) < 0) {
  FUNC_9("fork");
  FUNC_2(-1);
 } else if (VAR_3 > 0)
  FUNC_2(0);

 if (VAR_1) {
  FUNC_10();
  VAR_5 = FUNC_4(VAR_1, "w");
  if (VAR_5) {
   FUNC_6(VAR_5, "%d\n", FUNC_7());
   FUNC_3(VAR_5);
  } else {
   FUNC_9("fopen");
   FUNC_2(1);
  }
 }

 FUNC_0(0);
 FUNC_0(1);
 FUNC_0(2);

 FUNC_1(VAR_4, 0);
 FUNC_1(VAR_4, 1);
 FUNC_1(VAR_4, 2);

 return 0;
}
