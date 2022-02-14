
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {unsigned char* key; } ;
struct TYPE_6__ {TYPE_1__ hmac; } ;
struct TYPE_7__ {TYPE_2__ _key; } ;
typedef TYPE_3__ ldns_key ;



void
FUNC_0(ldns_key *VAR_0, unsigned char *VAR_1)
{
 VAR_0->_key.hmac.key = VAR_1;
}
