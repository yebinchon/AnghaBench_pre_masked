
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int rsa; } ;
struct TYPE_6__ {TYPE_1__ key; int key_type; } ;
struct TYPE_7__ {unsigned int usages; TYPE_2__ pkey; int * vtable; } ;
typedef TYPE_3__ br_x509_knownkey_context ;
typedef int br_rsa_public_key ;


 int VAR_0 ;
 int VAR_1 ;

void
FUNC_0(br_x509_knownkey_context *VAR_2,
 const br_rsa_public_key *VAR_3, unsigned VAR_4)
{
 VAR_2->vtable = &VAR_1;
 VAR_2->pkey.key_type = VAR_0;
 VAR_2->pkey.key.rsa = *VAR_3;
 VAR_2->usages = VAR_4;
}
