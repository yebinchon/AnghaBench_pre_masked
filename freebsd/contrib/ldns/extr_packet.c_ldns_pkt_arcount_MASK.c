
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint16_t ;
struct TYPE_5__ {TYPE_1__* _header; } ;
typedef TYPE_2__ ldns_pkt ;
struct TYPE_4__ {int _arcount; } ;



uint16_t
FUNC_0(const ldns_pkt *VAR_0)
{
 return VAR_0->_header->_arcount;
}
