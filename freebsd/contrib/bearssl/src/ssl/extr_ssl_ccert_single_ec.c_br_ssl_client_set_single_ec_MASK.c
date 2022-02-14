
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int br_x509_certificate ;
struct TYPE_7__ {size_t chain_len; unsigned int allowed_usages; unsigned int issuer_key_type; int * vtable; int iecdsa; int const* iec; int * mhash; int const* sk; int const* chain; } ;
struct TYPE_8__ {TYPE_2__ single_ec; } ;
struct TYPE_6__ {int mhash; } ;
struct TYPE_9__ {TYPE_3__ client_auth; int ** client_auth_vtable; TYPE_1__ eng; } ;
typedef TYPE_4__ br_ssl_client_context ;
typedef int br_ecdsa_sign ;
typedef int br_ec_private_key ;
typedef int br_ec_impl ;


 int VAR_0 ;

void
FUNC_0(br_ssl_client_context *VAR_1,
 const br_x509_certificate *VAR_2, size_t VAR_3,
 const br_ec_private_key *VAR_4, unsigned VAR_5,
 unsigned VAR_6,
 const br_ec_impl *VAR_7, br_ecdsa_sign VAR_8)
{
 VAR_1->client_auth.single_ec.vtable = &VAR_0;
 VAR_1->client_auth.single_ec.chain = VAR_2;
 VAR_1->client_auth.single_ec.chain_len = VAR_3;
 VAR_1->client_auth.single_ec.sk = VAR_4;
 VAR_1->client_auth.single_ec.allowed_usages = VAR_5;
 VAR_1->client_auth.single_ec.issuer_key_type = VAR_6;
 VAR_1->client_auth.single_ec.mhash = &VAR_1->eng.mhash;
 VAR_1->client_auth.single_ec.iec = VAR_7;
 VAR_1->client_auth.single_ec.iecdsa = VAR_8;
 VAR_1->client_auth_vtable = &VAR_1->client_auth.single_ec.vtable;
}
