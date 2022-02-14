
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint64_t ;
struct TYPE_2__ {scalar_t__ mrie; int interval_timer; int report_count; } ;
struct ctl_lun {scalar_t__ ie_asc; scalar_t__ ie_reportcnt; int ie_callout; TYPE_1__ MODE_IE; scalar_t__ ie_reported; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,int) ;
 int FUNC_1 (struct ctl_lun*,int,int ) ;
 int VAR_3 ;
 scalar_t__ FUNC_2 (int ) ;

__attribute__((used)) static void
FUNC_3(void *VAR_4)
{
 struct ctl_lun *VAR_5 = VAR_4;
 uint64_t VAR_6;

 if (VAR_5->ie_asc == 0)
  return;

 if (VAR_5->MODE_IE.mrie == VAR_1)
  FUNC_1(VAR_5, -1, VAR_0);
 else
  VAR_5->ie_reported = 0;

 if (VAR_5->ie_reportcnt < FUNC_2(VAR_5->MODE_IE.report_count)) {
  VAR_5->ie_reportcnt++;
  VAR_6 = FUNC_2(VAR_5->MODE_IE.interval_timer);
  if (VAR_6 == 0 || VAR_6 == VAR_2)
   VAR_6 = 3000;
  FUNC_0(&VAR_5->ie_callout, VAR_6 * VAR_3 / 10);
 }
}
