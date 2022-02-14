
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct carpreq {int carpr_count; size_t carpr_state; int carpr_vhid; int carpr_advbase; int carpr_advskew; char* carpr_key; } ;
typedef scalar_t__ caddr_t ;
struct TYPE_2__ {scalar_t__ ifr_data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct carpreq*,int) ;
 char** VAR_2 ;
 TYPE_1__ VAR_3 ;
 int FUNC_1 (int,int ,scalar_t__) ;
 int FUNC_2 (char*,...) ;
 scalar_t__ VAR_4 ;

__attribute__((used)) static void
FUNC_3(int VAR_5)
{
 struct carpreq VAR_6[VAR_0];
 int VAR_7;

 FUNC_0(VAR_6, sizeof(struct carpreq) * VAR_0);
 VAR_6[0].carpr_count = VAR_0;
 VAR_3.ifr_data = (caddr_t)&VAR_6;

 if (FUNC_1(VAR_5, VAR_1, (caddr_t)&VAR_3) == -1)
  return;

 for (VAR_7 = 0; VAR_7 < VAR_6[0].carpr_count; VAR_7++) {
  FUNC_2("\tcarp: %s vhid %d advbase %d advskew %d",
      VAR_2[VAR_6[VAR_7].carpr_state], VAR_6[VAR_7].carpr_vhid,
      VAR_6[VAR_7].carpr_advbase, VAR_6[VAR_7].carpr_advskew);
  if (VAR_4 && VAR_6[VAR_7].carpr_key[0] != '\0')
   FUNC_2(" key \"%s\"\n", VAR_6[VAR_7].carpr_key);
  else
   FUNC_2("\n");
 }
}
