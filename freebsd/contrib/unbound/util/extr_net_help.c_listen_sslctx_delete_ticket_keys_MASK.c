
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tls_session_ticket_key {struct tls_session_ticket_key* key_name; } ;


 int FUNC_0 (struct tls_session_ticket_key*,int) ;
 int FUNC_1 (struct tls_session_ticket_key*) ;
 int FUNC_2 (struct tls_session_ticket_key*,int,int) ;
 struct tls_session_ticket_key* VAR_0 ;

void
FUNC_3(void)
{
 struct tls_session_ticket_key *VAR_1;
 if(!VAR_0) return;
 for(VAR_1 = VAR_0; VAR_1->key_name != ((void*)0); VAR_1++) {




  FUNC_2(VAR_1->key_name, 0xdd, 80);

  FUNC_1(VAR_1->key_name);
 }
 FUNC_1(VAR_0);
 VAR_0 = ((void*)0);
}
