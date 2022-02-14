
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sctp_transport {int dead; int asoc; int proto_unreach_timer; int T3_rtx_timer; int hb_timer; } ;


 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct sctp_transport*) ;
 scalar_t__ FUNC_3 (int *) ;

void FUNC_4(struct sctp_transport *VAR_0)
{
 VAR_0->dead = 1;


 if (FUNC_0(&VAR_0->hb_timer))
  FUNC_2(VAR_0);






 if (FUNC_3(&VAR_0->T3_rtx_timer) &&
     FUNC_0(&VAR_0->T3_rtx_timer))
  FUNC_2(VAR_0);


 if (FUNC_3(&VAR_0->proto_unreach_timer) &&
     FUNC_0(&VAR_0->proto_unreach_timer))
  FUNC_1(VAR_0->asoc);

 FUNC_2(VAR_0);
}
