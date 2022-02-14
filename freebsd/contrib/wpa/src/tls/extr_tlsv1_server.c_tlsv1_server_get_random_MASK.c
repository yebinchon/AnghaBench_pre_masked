
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tlsv1_server {scalar_t__ state; int server_random; int client_random; } ;
struct tls_random {void* server_random_len; int server_random; void* client_random_len; int client_random; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 void* VAR_2 ;
 int FUNC_0 (struct tls_random*,int ,int) ;

int FUNC_1(struct tlsv1_server *VAR_3, struct tls_random *VAR_4)
{
 FUNC_0(VAR_4, 0, sizeof(*VAR_4));
 if (VAR_3->state == VAR_0)
  return -1;

 VAR_4->client_random = VAR_3->client_random;
 VAR_4->client_random_len = VAR_2;

 if (VAR_3->state != VAR_1) {
  VAR_4->server_random = VAR_3->server_random;
  VAR_4->server_random_len = VAR_2;
 }

 return 0;
}
