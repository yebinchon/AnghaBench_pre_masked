
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_2__ {int sk; int irsacore; } ;
typedef TYPE_1__ br_ssl_server_policy_rsa_context ;
typedef int br_ssl_server_policy_class ;


 int FUNC_0 (int ,int ,unsigned char*,size_t) ;

__attribute__((used)) static uint32_t
FUNC_1(const br_ssl_server_policy_class **VAR_0,
 unsigned char *VAR_1, size_t *VAR_2)
{
 br_ssl_server_policy_rsa_context *VAR_3;

 VAR_3 = (br_ssl_server_policy_rsa_context *)VAR_0;
 return FUNC_0(VAR_3->irsacore, VAR_3->sk, VAR_1, *VAR_2);
}
