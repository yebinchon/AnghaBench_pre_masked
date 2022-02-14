
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_2__ {int ctr; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int) ;
 int VAR_0 ;
 int FUNC_3 (int) ;
 int FUNC_4 (int) ;
 int VAR_1 ;
 int FUNC_5 (int) ;
 TYPE_1__ VAR_2 ;
 int FUNC_6 (char*,int,int,int,...) ;

__attribute__((used)) static void
FUNC_7(void)
{
 uint32_t VAR_3, VAR_4;
 uint32_t VAR_5;
 int VAR_6;
 int VAR_7;
 int VAR_8;
 int VAR_9;
 int VAR_10;
 int VAR_11;
 int VAR_12;
 int VAR_13;

 VAR_7 = 0;
 VAR_8 = 0 ;
 VAR_9 = 0 ;
 VAR_10 = 0 ;
 VAR_11 = 0;
 VAR_12 = 0;
 VAR_13 = 0;

 if ((VAR_2.ctr & VAR_0) == 0)
  VAR_7 = 1;




 VAR_6 = FUNC_0(VAR_2.ctr);

 if (VAR_7 == 0) {
  VAR_3 = FUNC_2(VAR_2.ctr);
  VAR_5 = (VAR_3 & VAR_1) ? 3 : 2;
  VAR_9 = 1U << (FUNC_4(VAR_3) + 3);
  if (FUNC_3(VAR_3) == 0) {
   if (VAR_3 & VAR_1)
    VAR_9 = 0;
   else
    VAR_10 = 1;
  } else {
   VAR_10 = VAR_5 <<
       (FUNC_3(VAR_3) - 1);
  }
  VAR_8 = VAR_5 << (FUNC_5(VAR_3) + 8);
 }

 VAR_4 = FUNC_1(VAR_2.ctr);
 VAR_5 = (VAR_4 & VAR_1) ? 3 : 2;
 VAR_12 = 1U << (FUNC_4(VAR_4) + 3);
 if (FUNC_3(VAR_4) == 0) {
  if (VAR_4 & VAR_1)
   VAR_12 = 0;
  else
   VAR_13 = 1;
 } else {
  VAR_13 = VAR_5 <<
      (FUNC_3(VAR_4) - 1);
  }
 VAR_11 = VAR_5 << (FUNC_5(VAR_4) + 8);



 if (VAR_9 == 0 && VAR_12 == 0)
  return;

 if (VAR_7) {
  FUNC_6("  %dKB/%dB %d-way %s unified cache\n",
      VAR_11 / 1024,
      VAR_12, VAR_13,
      VAR_6 == 0 ? "WT" : "WB");
 } else {
  FUNC_6("  %dKB/%dB %d-way instruction cache\n",
      VAR_8 / 1024,
      VAR_9, VAR_10);
  FUNC_6("  %dKB/%dB %d-way %s data cache\n",
      VAR_11 / 1024,
      VAR_12, VAR_13,
      VAR_6 == 0 ? "WT" : "WB");
 }
}
