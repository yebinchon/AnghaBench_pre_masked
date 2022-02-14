
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sctp_endpoint {struct crypto_hash** auth_hmacs; } ;
struct crypto_hash {int dummy; } ;
typedef int gfp_t ;
typedef int __u16 ;
struct TYPE_2__ {int hmac_name; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct crypto_hash*) ;
 int VAR_2 ;
 struct crypto_hash* FUNC_1 (int ,int ,int ) ;
 struct crypto_hash** FUNC_2 (int,int ) ;
 int FUNC_3 (struct crypto_hash**) ;
 int VAR_3 ;
 TYPE_1__* VAR_4 ;

int FUNC_4(struct sctp_endpoint *VAR_5, gfp_t VAR_6)
{
 struct crypto_hash *VAR_7 = ((void*)0);
 __u16 VAR_8;


 if (!VAR_3) {
  VAR_5->auth_hmacs = ((void*)0);
  return 0;
 }

 if (VAR_5->auth_hmacs)
  return 0;


 VAR_5->auth_hmacs = FUNC_2(
       sizeof(struct crypto_hash *) * VAR_2,
       VAR_6);
 if (!VAR_5->auth_hmacs)
  return -VAR_1;

 for (VAR_8 = 0; VAR_8 < VAR_2; VAR_8++) {






  if (!VAR_4[VAR_8].hmac_name)
   continue;


  if (VAR_5->auth_hmacs[VAR_8])
   continue;


  VAR_7 = FUNC_1(VAR_4[VAR_8].hmac_name, 0,
     VAR_0);
  if (FUNC_0(VAR_7))
   goto out_err;

  VAR_5->auth_hmacs[VAR_8] = VAR_7;
 }

 return 0;

out_err:

 FUNC_3(VAR_5->auth_hmacs);
 return -VAR_1;
}
