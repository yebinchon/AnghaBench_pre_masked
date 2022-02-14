
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_6__ {TYPE_2__* sk; TYPE_1__* iec; } ;
typedef TYPE_3__ br_ssl_server_policy_ec_context ;
typedef int br_ssl_server_policy_class ;
struct TYPE_5__ {int curve; int xlen; int x; } ;
struct TYPE_4__ {size_t (* xoff ) (int ,size_t*) ;int (* mul ) (unsigned char*,size_t,int ,int ,int ) ;} ;


 int FUNC_0 (unsigned char*,unsigned char*,size_t) ;
 int FUNC_1 (unsigned char*,size_t,int ,int ,int ) ;
 size_t FUNC_2 (int ,size_t*) ;

__attribute__((used)) static uint32_t
FUNC_3(const br_ssl_server_policy_class **VAR_0,
 unsigned char *VAR_1, size_t *VAR_2)
{
 br_ssl_server_policy_ec_context *VAR_3;
 uint32_t VAR_4;
 size_t VAR_5, VAR_6;

 VAR_3 = (br_ssl_server_policy_ec_context *)VAR_0;
 VAR_4 = VAR_3->iec->mul(VAR_1, *VAR_2, VAR_3->sk->x, VAR_3->sk->xlen, VAR_3->sk->curve);
 VAR_5 = VAR_3->iec->xoff(VAR_3->sk->curve, &VAR_6);
 FUNC_0(VAR_1, VAR_1 + VAR_5, VAR_6);
 *VAR_2 = VAR_6;
 return VAR_4;
}
