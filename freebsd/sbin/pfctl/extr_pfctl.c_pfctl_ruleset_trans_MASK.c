
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct pfctl {int loadopt; TYPE_1__* trans; int dev; struct pf_anchor** astack; } ;
struct pf_anchor {int dummy; } ;
struct TYPE_3__ {int pfrb_size; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 scalar_t__ VAR_12 ;
 scalar_t__ FUNC_0 (TYPE_1__*,int ,char*) ;
 scalar_t__ FUNC_1 (int ,TYPE_1__*,int ,int) ;

int
FUNC_2(struct pfctl *VAR_13, char *VAR_14, struct pf_anchor *VAR_15)
{
 int VAR_16 = VAR_13->trans->pfrb_size;

 if ((VAR_13->loadopt & VAR_3) != 0) {
  if (FUNC_0(VAR_13->trans, VAR_8, VAR_14) ||
      FUNC_0(VAR_13->trans, VAR_6, VAR_14) ||
      FUNC_0(VAR_13->trans, VAR_9, VAR_14))
   return (1);
 }
 if (VAR_15 == VAR_13->astack[0] && ((VAR_12 &&
     (VAR_13->loadopt & VAR_1) != 0))) {
  if (FUNC_0(VAR_13->trans, VAR_5, VAR_14))
   return (2);
 }
 if ((VAR_13->loadopt & VAR_2) != 0) {
  if (FUNC_0(VAR_13->trans, VAR_10, VAR_14) ||
      FUNC_0(VAR_13->trans, VAR_7, VAR_14))
   return (3);
 }
 if (VAR_13->loadopt & VAR_4)
  if (FUNC_0(VAR_13->trans, VAR_11, VAR_14))
   return (4);
 if (FUNC_1(VAR_13->dev, VAR_13->trans, VAR_0, VAR_16))
  return (5);

 return (0);
}
