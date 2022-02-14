
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_5__ {int inception; } ;
struct TYPE_6__ {TYPE_1__ dnssec; } ;
struct TYPE_7__ {TYPE_2__ _extra; } ;
typedef TYPE_3__ ldns_key ;



void
FUNC_0(ldns_key *VAR_0, uint32_t VAR_1)
{
 VAR_0->_extra.dnssec.inception = VAR_1;
}
