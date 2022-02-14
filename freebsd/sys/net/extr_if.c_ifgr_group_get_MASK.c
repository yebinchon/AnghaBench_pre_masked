
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_7__ {char* ifgru_group; } ;
struct TYPE_8__ {TYPE_3__ ifgr_ifgru; } ;
struct TYPE_5__ {char* ifgru_group; } ;
struct TYPE_6__ {TYPE_1__ ifgr_ifgru; } ;
union ifgroupreq_union {TYPE_4__ ifgr; TYPE_2__ ifgr32; } ;


 scalar_t__ FUNC_0 (int ) ;
 int VAR_0 ;

__attribute__((used)) static char *
FUNC_1(void *VAR_1)
{
 union ifgroupreq_union *VAR_2;

 VAR_2 = VAR_1;




 return (&VAR_2->ifgr.ifgr_ifgru.ifgru_group[0]);
}
