
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sctp_transport {int hb_timer; } ;
typedef int sctp_cmd_seq_t ;


 int FUNC_0 (int *,int ) ;
 int FUNC_1 (struct sctp_transport*) ;
 int FUNC_2 (struct sctp_transport*) ;

__attribute__((used)) static void FUNC_3(sctp_cmd_seq_t *VAR_0,
         struct sctp_transport *VAR_1)
{

 if (!FUNC_0(&VAR_1->hb_timer, FUNC_2(VAR_1)))
  FUNC_1(VAR_1);
}
