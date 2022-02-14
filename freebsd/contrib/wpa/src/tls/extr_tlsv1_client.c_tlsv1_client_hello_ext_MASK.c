
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct tlsv1_client {int session_ticket_included; int client_hello_ext_len; int * client_hello_ext; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,size_t) ;
 int FUNC_1 (int *) ;
 int * FUNC_2 (int) ;
 int FUNC_3 (int *,int const*,size_t) ;
 int FUNC_4 (int ,char*) ;

int FUNC_5(struct tlsv1_client *VAR_2, int VAR_3,
      const u8 *VAR_4, size_t VAR_5)
{
 u8 *VAR_6;

 VAR_2->session_ticket_included = 0;
 FUNC_1(VAR_2->client_hello_ext);
 VAR_2->client_hello_ext = ((void*)0);
 VAR_2->client_hello_ext_len = 0;

 if (VAR_4 == ((void*)0) || VAR_5 == 0)
  return 0;

 VAR_6 = VAR_2->client_hello_ext = FUNC_2(4 + VAR_5);
 if (VAR_6 == ((void*)0))
  return -1;

 FUNC_0(VAR_6, VAR_3);
 VAR_6 += 2;
 FUNC_0(VAR_6, VAR_5);
 VAR_6 += 2;
 FUNC_3(VAR_6, VAR_4, VAR_5);
 VAR_2->client_hello_ext_len = 4 + VAR_5;

 if (VAR_3 == VAR_1) {
  VAR_2->session_ticket_included = 1;
  FUNC_4(VAR_0, "TLSv1: Using session ticket");
 }

 return 0;
}
