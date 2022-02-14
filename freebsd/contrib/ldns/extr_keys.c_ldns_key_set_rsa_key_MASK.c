
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int * key; } ;
struct TYPE_5__ {TYPE_1__ _key; } ;
typedef TYPE_2__ ldns_key ;
typedef int RSA ;
typedef int EVP_PKEY ;


 int * FUNC_0 () ;
 int FUNC_1 (int *,int *) ;

void
FUNC_2(ldns_key *VAR_0, RSA *VAR_1)
{
 EVP_PKEY *VAR_2 = FUNC_0();
 FUNC_1(VAR_2, VAR_1);
 VAR_0->_key.key = VAR_2;
}
