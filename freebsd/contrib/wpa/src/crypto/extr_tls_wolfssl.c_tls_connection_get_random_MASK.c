
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tls_random {int server_random_len; int server_random; int client_random_len; int client_random; } ;
struct tls_connection {int server_random; int client_random; int * ssl; } ;
typedef int WOLFSSL ;


 int FUNC_0 (struct tls_random*,int ,int) ;
 int FUNC_1 (int *,int ,int) ;
 int FUNC_2 (int *,int ,int) ;

int FUNC_3(void *VAR_0, struct tls_connection *VAR_1,
         struct tls_random *VAR_2)
{
 WOLFSSL *VAR_3;

 if (!VAR_1 || !VAR_2)
  return -1;
 VAR_3 = VAR_1->ssl;
 if (!VAR_3)
  return -1;

 FUNC_0(VAR_2, 0, sizeof(*VAR_2));
 VAR_2->client_random = VAR_1->client_random;
 VAR_2->client_random_len = FUNC_1(
  VAR_3, VAR_1->client_random, sizeof(VAR_1->client_random));
 VAR_2->server_random = VAR_1->server_random;
 VAR_2->server_random_len = FUNC_2(
  VAR_3, VAR_1->server_random, sizeof(VAR_1->server_random));

 return 0;
}
