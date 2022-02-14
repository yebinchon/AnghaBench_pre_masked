
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {TYPE_2__* sk; scalar_t__ (* irsasign ) (unsigned char const*,unsigned char*,size_t,TYPE_2__*,unsigned char*) ;} ;
typedef TYPE_1__ br_ssl_server_policy_rsa_context ;
typedef int br_ssl_server_policy_class ;
struct TYPE_4__ {int n_bitlen; } ;


 unsigned char** VAR_0 ;
 int FUNC_0 (unsigned char*,unsigned char*,size_t) ;
 scalar_t__ FUNC_1 (unsigned char const*,unsigned char*,size_t,TYPE_2__*,unsigned char*) ;

__attribute__((used)) static size_t
FUNC_2(const br_ssl_server_policy_class **VAR_1,
 unsigned VAR_2, unsigned char *VAR_3, size_t VAR_4, size_t VAR_5)
{
 br_ssl_server_policy_rsa_context *VAR_6;
 unsigned char VAR_7[64];
 size_t VAR_8;
 const unsigned char *VAR_9;

 VAR_6 = (br_ssl_server_policy_rsa_context *)VAR_1;
 FUNC_0(VAR_7, VAR_3, VAR_4);
 VAR_2 &= 0xFF;
 if (VAR_2 == 0) {
  VAR_9 = ((void*)0);
 } else if (VAR_2 >= 2 && VAR_2 <= 6) {
  VAR_9 = VAR_0[VAR_2 - 2];
 } else {
  return 0;
 }
 VAR_8 = (VAR_6->sk->n_bitlen + 7) >> 3;
 if (VAR_5 < VAR_8) {
  return 0;
 }
 return VAR_6->irsasign(VAR_9, VAR_7, VAR_4, VAR_6->sk, VAR_3) ? VAR_8 : 0;
}
