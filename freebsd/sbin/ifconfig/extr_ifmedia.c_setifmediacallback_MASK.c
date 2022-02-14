
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ifmediareq {struct ifmediareq* ifm_ulist; int ifm_current; } ;
typedef int caddr_t ;
struct TYPE_2__ {int ifr_media; } ;


 int VAR_0 ;
 int FUNC_0 (int,char*) ;
 int FUNC_1 (struct ifmediareq*) ;
 TYPE_1__ VAR_1 ;
 scalar_t__ FUNC_2 (int,int ,int ) ;

__attribute__((used)) static void
FUNC_3(int VAR_2, void *VAR_3)
{
 struct ifmediareq *VAR_4 = (struct ifmediareq *)VAR_3;
 static int VAR_5 = 0;

 if (!VAR_5) {
  VAR_1.ifr_media = VAR_4->ifm_current;
  if (FUNC_2(VAR_2, VAR_0, (caddr_t)&VAR_1) < 0)
   FUNC_0(1, "SIOCSIFMEDIA (media)");
  FUNC_1(VAR_4->ifm_ulist);
  FUNC_1(VAR_4);
  VAR_5 = 1;
 }
}
