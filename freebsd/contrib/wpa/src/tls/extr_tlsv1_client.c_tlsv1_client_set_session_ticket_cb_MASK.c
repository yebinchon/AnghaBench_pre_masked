
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int tlsv1_client_session_ticket_cb ;
struct tlsv1_client {void* session_ticket_cb_ctx; int session_ticket_cb; } ;


 int VAR_0 ;
 int FUNC_0 (int ,char*,int ,void*) ;

void FUNC_1(struct tlsv1_client *VAR_1,
     tlsv1_client_session_ticket_cb VAR_2,
     void *VAR_3)
{
 FUNC_0(VAR_0, "TLSv1: SessionTicket callback set %p (ctx %p)",
     VAR_2, VAR_3);
 VAR_1->session_ticket_cb = VAR_2;
 VAR_1->session_ticket_cb_ctx = VAR_3;
}
