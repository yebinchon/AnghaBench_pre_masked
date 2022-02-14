
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int br_x509_certificate ;
struct TYPE_5__ {size_t chain_len; int * vtable; int irsasign; int const* sk; int const* chain; } ;
struct TYPE_6__ {TYPE_1__ single_rsa; } ;
struct TYPE_7__ {TYPE_2__ client_auth; int ** client_auth_vtable; } ;
typedef TYPE_3__ br_ssl_client_context ;
typedef int br_rsa_private_key ;
typedef int br_rsa_pkcs1_sign ;


 int VAR_0 ;

void
FUNC_0(br_ssl_client_context *VAR_1,
 const br_x509_certificate *VAR_2, size_t VAR_3,
 const br_rsa_private_key *VAR_4, br_rsa_pkcs1_sign VAR_5)
{
 VAR_1->client_auth.single_rsa.vtable = &VAR_0;
 VAR_1->client_auth.single_rsa.chain = VAR_2;
 VAR_1->client_auth.single_rsa.chain_len = VAR_3;
 VAR_1->client_auth.single_rsa.sk = VAR_4;
 VAR_1->client_auth.single_rsa.irsasign = VAR_5;
 VAR_1->client_auth_vtable = &VAR_1->client_auth.single_rsa.vtable;
}
