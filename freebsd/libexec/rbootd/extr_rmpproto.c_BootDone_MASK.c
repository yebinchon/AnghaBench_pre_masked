
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_11__ {int rmp_session; } ;
struct TYPE_10__ {int rmp_session; } ;
struct TYPE_12__ {int rmp_session; } ;
struct rmp_packet {scalar_t__ r_type; TYPE_2__ r_rrpl; TYPE_1__ r_brpl; TYPE_3__ r_rrq; } ;
struct TYPE_13__ {struct rmp_packet rmp; } ;
typedef TYPE_4__ RMPCONN ;


 int FUNC_0 (TYPE_4__*) ;
 TYPE_4__* FUNC_1 (TYPE_4__*) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_2 (TYPE_4__*) ;
 scalar_t__ FUNC_3 (int ) ;
 int FUNC_4 (int ,char*,int ) ;

int
FUNC_5(RMPCONN *VAR_3)
{
 RMPCONN *VAR_4;
 struct rmp_packet *VAR_5;




 if ((VAR_4 = FUNC_1(VAR_3)) == ((void*)0)) {
  FUNC_4(VAR_0, "BootDone: no existing connection (%s)",
         FUNC_0(VAR_3));
  return(0);
 }

 VAR_5 = &VAR_4->rmp;




 if (FUNC_3(VAR_3->rmp.r_rrq.rmp_session) !=
     ((VAR_5->r_type == VAR_2)? FUNC_3(VAR_5->r_brpl.rmp_session):
                                     FUNC_3(VAR_5->r_rrpl.rmp_session))) {
  FUNC_4(VAR_0, "BootDone: bad session id (%s)",
         FUNC_0(VAR_3));
  return(0);
 }

 FUNC_2(VAR_4);

 FUNC_4(VAR_1, "%s: boot complete", FUNC_0(VAR_3));

 return(1);
}
