
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tlsv1_client {int server_cert; int partial_input; int cred; struct tlsv1_client* client_hello_ext; int verify; int rl; int server_rsa_key; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct tlsv1_client*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct tlsv1_client*) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *,int ) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (int ) ;

void FUNC_10(struct tlsv1_client *VAR_1)
{
 FUNC_0(VAR_1->server_rsa_key);
 FUNC_7(&VAR_1->rl, VAR_0);
 FUNC_6(&VAR_1->rl);
 FUNC_5(&VAR_1->rl);
 FUNC_2(&VAR_1->verify);
 FUNC_1(VAR_1->client_hello_ext);
 FUNC_3(VAR_1);
 FUNC_4(VAR_1->cred);
 FUNC_8(VAR_1->partial_input);
 FUNC_9(VAR_1->server_cert);
 FUNC_1(VAR_1);
}
