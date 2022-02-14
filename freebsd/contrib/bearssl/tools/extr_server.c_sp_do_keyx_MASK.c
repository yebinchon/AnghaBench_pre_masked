
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_10__ {TYPE_3__* sk; } ;
typedef TYPE_4__ policy_context ;
typedef int br_ssl_server_policy_class ;
struct TYPE_11__ {size_t (* xoff ) (int ,size_t*) ;int (* mul ) (unsigned char*,size_t,int ,int ,int ) ;} ;
typedef TYPE_5__ br_ec_impl ;
struct TYPE_7__ {int curve; int xlen; int x; } ;
struct TYPE_8__ {TYPE_1__ ec; int rsa; } ;
struct TYPE_9__ {int key_type; TYPE_2__ key; } ;




 TYPE_5__* FUNC_0 () ;
 int FUNC_1 () ;
 int FUNC_2 (int ,int *,unsigned char*,size_t) ;
 int FUNC_3 (int ,char*,int) ;
 int FUNC_4 (unsigned char*,unsigned char*,size_t) ;
 int VAR_0 ;
 int FUNC_5 (unsigned char*,size_t,int ,int ,int ) ;
 size_t FUNC_6 (int ,size_t*) ;

__attribute__((used)) static uint32_t
FUNC_7(const br_ssl_server_policy_class **VAR_1,
 unsigned char *VAR_2, size_t *VAR_3)
{
 policy_context *VAR_4;
 uint32_t VAR_5;
 size_t VAR_6, VAR_7;

 VAR_4 = (policy_context *)VAR_1;
 switch (VAR_4->sk->key_type) {
  const br_ec_impl *VAR_8;

 case 128:
  return FUNC_2(
   FUNC_1(),
   &VAR_4->sk->key.rsa, VAR_2, *VAR_3);
 case 129:
  VAR_8 = FUNC_0();
  VAR_5 = VAR_8->mul(VAR_2, *VAR_3, VAR_4->sk->key.ec.x,
   VAR_4->sk->key.ec.xlen, VAR_4->sk->key.ec.curve);
  VAR_6 = VAR_8->xoff(VAR_4->sk->key.ec.curve, &VAR_7);
  FUNC_4(VAR_2, VAR_2 + VAR_6, VAR_7);
  *VAR_3 = VAR_7;
  return VAR_5;
 default:
  FUNC_3(VAR_0, "ERROR: unknown private key type (%d)\n",
   (int)VAR_4->sk->key_type);
  return 0;
 }
}
