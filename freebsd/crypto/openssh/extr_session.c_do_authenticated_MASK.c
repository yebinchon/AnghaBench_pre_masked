
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct ssh {int dummy; } ;
struct TYPE_13__ {int allow_tcp_forwarding; scalar_t__ disable_forwarding; } ;
struct TYPE_12__ {int pw_name; } ;
struct TYPE_11__ {int permit_port_forwarding_flag; } ;
struct TYPE_10__ {int session_info; TYPE_3__* pw; } ;
typedef TYPE_1__ Authctxt ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 () ;
 int FUNC_1 (char*,TYPE_2__*,int ) ;
 TYPE_2__* VAR_2 ;
 int FUNC_2 (struct ssh*,int) ;
 int FUNC_3 (struct ssh*,int) ;
 int FUNC_4 (struct ssh*,TYPE_1__*) ;
 int FUNC_5 (struct ssh*,TYPE_1__*) ;
 TYPE_4__ VAR_3 ;
 int FUNC_6 (TYPE_3__*,int ) ;
 int FUNC_7 (struct ssh*,TYPE_2__*) ;
 int FUNC_8 (char*,int ) ;

void
FUNC_9(struct ssh *VAR_4, Authctxt *VAR_5)
{
 FUNC_8("%s", VAR_5->pw->pw_name);

 FUNC_1("active", VAR_2, 0);



 FUNC_7(VAR_4, VAR_2);

 if (!VAR_2->permit_port_forwarding_flag ||
     VAR_3.disable_forwarding) {
  FUNC_2(VAR_4, VAR_0);
  FUNC_2(VAR_4, VAR_1);
 } else {
  if ((VAR_3.allow_tcp_forwarding & VAR_0) == 0)
   FUNC_2(VAR_4, VAR_0);
  else
   FUNC_3(VAR_4, VAR_0);
  if ((VAR_3.allow_tcp_forwarding & VAR_1) == 0)
   FUNC_2(VAR_4, VAR_1);
  else
   FUNC_3(VAR_4, VAR_1);
 }
 FUNC_0();

 FUNC_6(VAR_5->pw, VAR_5->session_info);

 FUNC_4(VAR_4, VAR_5);

 FUNC_5(VAR_4, VAR_5);
}
