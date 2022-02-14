
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int aid; int addr; } ;
struct sta_info {TYPE_1__ sta; int sdata; } ;


 int VAR_0 ;
 int FUNC_0 (struct sta_info*) ;
 int FUNC_1 (int ,char*,int ,int ) ;
 scalar_t__ FUNC_2 (struct sta_info*,int ) ;

__attribute__((used)) static void FUNC_3(struct sta_info *VAR_1)
{
 FUNC_1(VAR_1->sdata, "STA %pM aid %d exits power save mode\n",
        VAR_1->sta.addr, VAR_1->sta.aid);

 if (FUNC_2(VAR_1, VAR_0)) {
  FUNC_1(VAR_1->sdata, "STA %pM aid %d driver-ps-blocked\n",
         VAR_1->sta.addr, VAR_1->sta.aid);
  return;
 }

 FUNC_0(VAR_1);
}
