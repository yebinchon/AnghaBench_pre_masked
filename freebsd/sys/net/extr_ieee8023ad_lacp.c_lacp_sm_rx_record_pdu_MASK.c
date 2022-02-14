
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_6__ {int lip_state; } ;
struct TYPE_5__ {int lip_state; } ;
struct lacpdu {TYPE_3__ ldu_partner; TYPE_2__ ldu_actor; } ;
struct lacp_port {int lp_state; TYPE_2__ lp_partner; TYPE_1__* lp_lsc; int lp_actor; } ;
typedef int buf ;
typedef int boolean_t ;
struct TYPE_4__ {scalar_t__ lsc_strict_mode; } ;


 int FUNC_0 (struct lacp_port*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_1 (int,int,int) ;
 int VAR_4 ;
 int FUNC_2 (struct lacp_port*) ;
 int FUNC_3 (int *,TYPE_3__*) ;
 int FUNC_4 (int,char*,int) ;
 int FUNC_5 (struct lacp_port*,int) ;

__attribute__((used)) static void
FUNC_6(struct lacp_port *VAR_5, const struct lacpdu *VAR_6)
{
 boolean_t VAR_7;
 uint8_t VAR_8;
 char VAR_9[VAR_0+1];

 FUNC_2(VAR_5);

 VAR_8 = VAR_5->lp_partner.lip_state;

 VAR_7 = (VAR_6->ldu_actor.lip_state & VAR_1)
     || ((VAR_5->lp_state & VAR_1) &&
     (VAR_6->ldu_partner.lip_state & VAR_1));

 VAR_5->lp_partner = VAR_6->ldu_actor;
 if (VAR_7 &&
     ((FUNC_1(VAR_5->lp_state, VAR_6->ldu_partner.lip_state,
     VAR_2) &&
     !FUNC_3(&VAR_5->lp_actor, &VAR_6->ldu_partner))
     || (VAR_6->ldu_partner.lip_state & VAR_2) == 0)) {







  if (VAR_5->lp_lsc->lsc_strict_mode)
   VAR_5->lp_partner.lip_state |= VAR_4;
 } else {
  VAR_5->lp_partner.lip_state &= ~VAR_4;
 }

 VAR_5->lp_state &= ~VAR_3;

 if (VAR_8 != VAR_5->lp_partner.lip_state) {
  FUNC_0((VAR_5, "old pstate %s\n",
      FUNC_4(VAR_8, VAR_9, sizeof(VAR_9))));
  FUNC_0((VAR_5, "new pstate %s\n",
      FUNC_4(VAR_5->lp_partner.lip_state, VAR_9,
      sizeof(VAR_9))));
 }

 FUNC_5(VAR_5, VAR_8);
}
