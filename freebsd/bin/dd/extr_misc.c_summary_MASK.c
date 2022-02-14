
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int swab; int trunc; double bytes; int out_part; int out_full; int in_part; int in_full; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,char*,...) ;
 scalar_t__ VAR_4 ;
 double FUNC_1 () ;
 TYPE_1__ VAR_5 ;
 int VAR_6 ;

void
FUNC_2(void)
{
 double VAR_7;

 if (VAR_3 & VAR_0)
  return;

 if (VAR_3 & VAR_2)
  FUNC_0(VAR_6, "\n");

 VAR_7 = FUNC_1();

 (void)FUNC_0(VAR_6,
     "%d+%d records in\n%d+%d records out\n",
     VAR_5.in_full, VAR_5.in_part, VAR_5.out_full, VAR_5.out_part);
 if (VAR_5.swab)
  (void)FUNC_0(VAR_6, "%d odd length swab %s\n",
       VAR_5.swab, (VAR_5.swab == 1) ? "block" : "blocks");
 if (VAR_5.trunc)
  (void)FUNC_0(VAR_6, "%d truncated %s\n",
       VAR_5.trunc, (VAR_5.trunc == 1) ? "block" : "blocks");
 if (!(VAR_3 & VAR_1)) {
  (void)FUNC_0(VAR_6,
      "%f bytes transferred in %.6f secs (%.0f bytes/sec)\n",
      VAR_5.bytes, VAR_7, VAR_5.bytes / VAR_7);
 }
 VAR_4 = 0;
}
