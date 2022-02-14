
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
typedef TYPE_4__ ccert_context ;
typedef int br_ssl_client_certificate_class ;
struct TYPE_11__ {size_t (* xoff ) (int ,size_t*) ;int (* mul ) (unsigned char*,size_t,int ,int ,int ) ;} ;
typedef TYPE_5__ br_ec_impl ;
struct TYPE_7__ {int curve; int xlen; int x; } ;
struct TYPE_8__ {TYPE_1__ ec; } ;
struct TYPE_9__ {TYPE_2__ key; } ;


 TYPE_5__* FUNC_0 () ;
 int FUNC_1 (unsigned char*,unsigned char*,size_t) ;
 int FUNC_2 (unsigned char*,size_t,int ,int ,int ) ;
 size_t FUNC_3 (int ,size_t*) ;

__attribute__((used)) static uint32_t
FUNC_4(const br_ssl_client_certificate_class **VAR_0,
 unsigned char *VAR_1, size_t *VAR_2)
{
 const br_ec_impl *VAR_3;
 ccert_context *VAR_4;
 size_t VAR_5, VAR_6;
 uint32_t VAR_7;

 VAR_4 = (ccert_context *)VAR_0;
 VAR_3 = FUNC_0();
 VAR_7 = VAR_3->mul(VAR_1, *VAR_2, VAR_4->sk->key.ec.x,
  VAR_4->sk->key.ec.xlen, VAR_4->sk->key.ec.curve);
 VAR_5 = VAR_3->xoff(VAR_4->sk->key.ec.curve, &VAR_6);
 FUNC_1(VAR_1, VAR_1 + VAR_5, VAR_6);
 *VAR_2 = VAR_6;
 return VAR_7;
}
