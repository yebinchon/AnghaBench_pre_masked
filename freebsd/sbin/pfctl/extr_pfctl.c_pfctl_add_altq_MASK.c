
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pfctl {int opts; TYPE_1__* paltq; int dev; } ;
struct pf_altq {int ifname; } ;
struct TYPE_2__ {int altq; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_0 (int,char*) ;
 scalar_t__ VAR_6 ;
 int FUNC_1 (int,char*,...) ;
 scalar_t__ FUNC_2 (int ,int ,TYPE_1__*) ;
 int VAR_7 ;
 int FUNC_3 (int *,struct pf_altq*,int) ;
 int FUNC_4 (int *) ;

int
FUNC_5(struct pfctl *VAR_8, struct pf_altq *VAR_9)
{
 if (VAR_5 &&
     (VAR_7 & VAR_3) != 0) {
  FUNC_3(&VAR_8->paltq->altq, VAR_9, sizeof(struct pf_altq));
  if ((VAR_8->opts & VAR_4) == 0) {
   if (FUNC_2(VAR_8->dev, VAR_0, VAR_8->paltq)) {
    if (VAR_6 == VAR_2)
     FUNC_1(1, "qtype not configured");
    else if (VAR_6 == VAR_1)
     FUNC_1(1, "%s: driver does not support "
         "altq", VAR_9->ifname);
    else
     FUNC_0(1, "DIOCADDALTQ");
   }
  }
  FUNC_4(&VAR_8->paltq->altq);
 }
 return (0);
}
