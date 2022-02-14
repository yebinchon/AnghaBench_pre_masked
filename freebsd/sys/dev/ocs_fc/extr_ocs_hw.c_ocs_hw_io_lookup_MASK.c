
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef size_t uint32_t ;
struct TYPE_7__ {TYPE_1__* extent; } ;
struct TYPE_8__ {TYPE_2__ config; } ;
struct TYPE_9__ {int ** io; TYPE_3__ sli; } ;
typedef TYPE_4__ ocs_hw_t ;
typedef int ocs_hw_io_t ;
struct TYPE_6__ {size_t* base; } ;


 size_t VAR_0 ;

ocs_hw_io_t *
FUNC_0(ocs_hw_t *VAR_1, uint32_t VAR_2)
{
 uint32_t VAR_3;
 VAR_3 = VAR_2 - VAR_1->sli.config.extent[VAR_0].base[0];
 return VAR_1->io[VAR_3];
}
