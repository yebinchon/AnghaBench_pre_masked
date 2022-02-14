
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_2__ {int tls_version; } ;
struct tlsv1_client {scalar_t__ state; int master_secret; TYPE_1__ rl; int const* server_random; int const* client_random; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,size_t) ;
 int FUNC_1 (int *) ;
 int * FUNC_2 (size_t) ;
 int FUNC_3 (int *,int const*,size_t) ;
 int FUNC_4 (int ,int ,int ,char const*,int *,size_t,int *,size_t) ;

int FUNC_5(struct tlsv1_client *VAR_3, const char *VAR_4,
       const u8 *VAR_5, size_t VAR_6,
       int VAR_7, u8 *VAR_8, size_t VAR_9)
{
 u8 *VAR_10, *VAR_11;
 size_t VAR_12 = 2 * VAR_2;
 int VAR_13;

 if (VAR_3->state != VAR_0)
  return -1;

 if (VAR_6 > 65535)
  return -1;

 if (VAR_5)
  VAR_12 += 2 + VAR_6;

 VAR_10 = FUNC_2(VAR_12);
 if (!VAR_10)
  return -1;

 if (VAR_7) {
  FUNC_3(VAR_10, VAR_3->server_random, VAR_2);
  FUNC_3(VAR_10 + VAR_2, VAR_3->client_random,
     VAR_2);
 } else {
  FUNC_3(VAR_10, VAR_3->client_random, VAR_2);
  FUNC_3(VAR_10 + VAR_2, VAR_3->server_random,
     VAR_2);
 }

 if (VAR_5) {
  VAR_11 = VAR_10 + 2 * VAR_2;
  FUNC_0(VAR_11, VAR_6);
  VAR_11 += 2;
  FUNC_3(VAR_11, VAR_5, VAR_6);
 }

 VAR_13 = FUNC_4(VAR_3->rl.tls_version,
        VAR_3->master_secret, VAR_1,
        VAR_4, VAR_10, VAR_12, VAR_8, VAR_9);
 FUNC_1(VAR_10);
 return VAR_13;
}
