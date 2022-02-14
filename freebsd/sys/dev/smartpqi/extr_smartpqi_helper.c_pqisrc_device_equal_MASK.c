
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ wwid; } ;
typedef TYPE_1__ pqi_scsi_dev_t ;
typedef int boolean_t ;



boolean_t FUNC_0(pqi_scsi_dev_t *VAR_0,
 pqi_scsi_dev_t *VAR_1)
{
 return VAR_0->wwid == VAR_1->wwid;
}
