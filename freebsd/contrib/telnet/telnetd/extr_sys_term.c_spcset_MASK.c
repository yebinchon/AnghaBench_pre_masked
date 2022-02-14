
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int cc_t ;
struct TYPE_7__ {int t_lnextc; int t_rprntc; int t_werasc; int t_suspc; int t_flushc; } ;
struct TYPE_6__ {int t_brkc; int t_stopc; int t_startc; int t_quitc; int t_intrc; int t_eofc; } ;
struct TYPE_5__ {int sg_kill; int sg_erase; } ;
struct TYPE_8__ {TYPE_3__ ltc; TYPE_2__ tc; TYPE_1__ sg; } ;






 int VAR_0 ;





 int VAR_1 ;
 int VAR_2 ;



 int VAR_3 ;



 int VAR_4 ;


 TYPE_4__ VAR_5 ;

int
FUNC_0(int VAR_6, cc_t *VAR_7, cc_t **VAR_8)
{
 switch(VAR_6) {
 case 138:
  *VAR_7 = VAR_5.tc.t_eofc;
  *VAR_8 = (cc_t *)&VAR_5.tc.t_eofc;
  return(VAR_4);
 case 140:
  *VAR_7 = VAR_5.sg.sg_erase;
  *VAR_8 = (cc_t *)&VAR_5.sg.sg_erase;
  return(VAR_4);
 case 139:
  *VAR_7 = VAR_5.sg.sg_kill;
  *VAR_8 = (cc_t *)&VAR_5.sg.sg_kill;
  return(VAR_4);
 case 134:
  *VAR_7 = VAR_5.tc.t_intrc;
  *VAR_8 = (cc_t *)&VAR_5.tc.t_intrc;
  return(VAR_4|VAR_1|VAR_2);
 case 144:
  *VAR_7 = VAR_5.tc.t_quitc;
  *VAR_8 = (cc_t *)&VAR_5.tc.t_quitc;
  return(VAR_4|VAR_1|VAR_2);
 case 128:
  *VAR_7 = VAR_5.tc.t_startc;
  *VAR_8 = (cc_t *)&VAR_5.tc.t_startc;
  return(VAR_4);
 case 129:
  *VAR_7 = VAR_5.tc.t_stopc;
  *VAR_8 = (cc_t *)&VAR_5.tc.t_stopc;
  return(VAR_4);
 case 143:
  *VAR_7 = VAR_5.ltc.t_flushc;
  *VAR_8 = (cc_t *)&VAR_5.ltc.t_flushc;
  return(VAR_4);
 case 131:
  *VAR_7 = VAR_5.ltc.t_suspc;
  *VAR_8 = (cc_t *)&VAR_5.ltc.t_suspc;
  return(VAR_4);
 case 136:
  *VAR_7 = VAR_5.ltc.t_werasc;
  *VAR_8 = (cc_t *)&VAR_5.ltc.t_werasc;
  return(VAR_4);
 case 132:
  *VAR_7 = VAR_5.ltc.t_rprntc;
  *VAR_8 = (cc_t *)&VAR_5.ltc.t_rprntc;
  return(VAR_4);
 case 133:
  *VAR_7 = VAR_5.ltc.t_lnextc;
  *VAR_8 = (cc_t *)&VAR_5.ltc.t_lnextc;
  return(VAR_4);
 case 135:
  *VAR_7 = VAR_5.tc.t_brkc;
  *VAR_8 = (cc_t *)&VAR_5.ltc.t_lnextc;
  return(VAR_4);
 case 141:
 case 130:
 case 142:
 case 137:
  *VAR_7 = (cc_t)0;
  *VAR_8 = (cc_t *)0;
  return(VAR_0);
 default:
  *VAR_7 = (cc_t)0;
  *VAR_8 = (cc_t *)0;
  return(VAR_3);
 }
}
