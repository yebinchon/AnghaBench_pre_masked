
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {TYPE_2__*** device_list; } ;
typedef TYPE_1__ pqisrc_softstate_t ;
struct TYPE_9__ {scalar_t__ volume_offline; int scsi3addr; } ;
typedef TYPE_2__ pqi_scsi_dev_t ;
typedef int device_status_t ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_1 (TYPE_2__*,TYPE_2__*) ;
 scalar_t__ FUNC_2 (int ,int ) ;

__attribute__((used)) static device_status_t FUNC_3(pqisrc_softstate_t *VAR_5,
 pqi_scsi_dev_t *VAR_6,
 pqi_scsi_dev_t **VAR_7)
{
 pqi_scsi_dev_t *VAR_8;
 int VAR_9,VAR_10;
 FUNC_0("IN\n");
 for(VAR_9 = 0; VAR_9 < VAR_3; VAR_9++) {
  for(VAR_10 = 0; VAR_10 < VAR_4; VAR_10++) {
   if(VAR_5->device_list[VAR_9][VAR_10] == ((void*)0))
    continue;
   VAR_8 = VAR_5->device_list[VAR_9][VAR_10];
   if (FUNC_2(VAR_6->scsi3addr,
    VAR_8->scsi3addr)) {
    *VAR_7 = VAR_8;
    if (FUNC_1(VAR_6, VAR_8)) {
     if (VAR_6->volume_offline)
      return VAR_0;
     return VAR_2;
    }
    return VAR_0;
   }
  }
 }
 FUNC_0("OUT\n");

 return VAR_1;
}
