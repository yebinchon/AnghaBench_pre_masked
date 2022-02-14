
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int bus; int target; int lun; } ;
typedef TYPE_1__ pqi_scsi_dev_t ;


 int FUNC_0 (char*) ;

__attribute__((used)) static inline void FUNC_1(pqi_scsi_dev_t *VAR_0,
 int VAR_1, int VAR_2, int VAR_3)
{
 FUNC_0("IN\n");

 VAR_0->bus = VAR_1;
 VAR_0->target = VAR_2;
 VAR_0->lun = VAR_3;

 FUNC_0("OUT\n");
}
