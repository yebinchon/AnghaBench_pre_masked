
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_10__ {scalar_t__ obp_len; int obp; } ;
struct TYPE_9__ {TYPE_1__* gp; } ;
struct TYPE_8__ {int (* scr_msg ) (TYPE_2__*,int ,int ,scalar_t__) ;} ;
typedef TYPE_2__ SCR ;
typedef TYPE_3__ EX_PRIVATE ;


 TYPE_3__* FUNC_0 (TYPE_2__*) ;
 int VAR_0 ;
 int FUNC_1 (TYPE_2__*,int ,int ,scalar_t__) ;

int
FUNC_2(SCR *VAR_1)
{
 EX_PRIVATE *VAR_2;

 VAR_2 = FUNC_0(VAR_1);

 if (VAR_2->obp_len != 0) {
  VAR_1->gp->scr_msg(VAR_1, VAR_0, VAR_2->obp, VAR_2->obp_len);
  VAR_2->obp_len = 0;
 }
 return (0);
}
