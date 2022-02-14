
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct timeval {int dummy; } ;
struct TYPE_3__ {struct timeval timestamp; } ;
typedef TYPE_1__ ldns_pkt ;



struct timeval
FUNC_0(const ldns_pkt *VAR_0)
{
 return VAR_0->timestamp;
}
