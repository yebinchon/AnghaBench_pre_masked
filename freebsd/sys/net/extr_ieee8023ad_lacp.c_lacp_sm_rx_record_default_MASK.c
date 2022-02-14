
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_5__ {int lip_state; } ;
struct lacp_port {int lp_state; TYPE_2__ lp_partner; TYPE_1__* lp_lsc; } ;
struct TYPE_4__ {scalar_t__ lsc_strict_mode; } ;


 int VAR_0 ;
 int FUNC_0 (struct lacp_port*) ;
 TYPE_2__ VAR_1 ;
 TYPE_2__ VAR_2 ;
 int FUNC_1 (struct lacp_port*,int ) ;

__attribute__((used)) static void
FUNC_2(struct lacp_port *VAR_3)
{
 uint8_t VAR_4;

 FUNC_0(VAR_3);

 VAR_4 = VAR_3->lp_partner.lip_state;
 if (VAR_3->lp_lsc->lsc_strict_mode)
  VAR_3->lp_partner = VAR_2;
 else
  VAR_3->lp_partner = VAR_1;
 VAR_3->lp_state |= VAR_0;
 FUNC_1(VAR_3, VAR_4);
}
