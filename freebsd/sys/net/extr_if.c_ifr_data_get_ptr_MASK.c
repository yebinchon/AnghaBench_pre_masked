
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_7__ {void* ifru_data; } ;
struct TYPE_8__ {TYPE_3__ ifr_ifru; } ;
struct TYPE_5__ {scalar_t__ ifru_data; } ;
struct TYPE_6__ {TYPE_1__ ifr_ifru; } ;
union ifreq_union {TYPE_4__ ifr; TYPE_2__ ifr32; } ;


 scalar_t__ FUNC_0 (int ) ;
 int VAR_0 ;

void *
FUNC_1(void *VAR_1)
{
 union ifreq_union *VAR_2;

 VAR_2 = VAR_1;





  return (VAR_2->ifr.ifr_ifru.ifru_data);
}
