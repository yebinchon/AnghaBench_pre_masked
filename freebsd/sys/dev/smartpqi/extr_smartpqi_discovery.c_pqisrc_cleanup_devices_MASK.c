
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int *** device_list; } ;
typedef TYPE_1__ pqisrc_softstate_t ;
typedef int pqi_scsi_dev_t ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (TYPE_1__*,int *) ;

void FUNC_2(pqisrc_softstate_t *VAR_2)
{

 int VAR_3 = 0,VAR_4 = 0;
 pqi_scsi_dev_t *VAR_5 = ((void*)0);
 FUNC_0("IN\n");

  for(VAR_3 = 0; VAR_3 < VAR_0; VAR_3++) {
  for(VAR_4 = 0; VAR_4 < VAR_1; VAR_4++) {
   if (VAR_2->device_list[VAR_3][VAR_4] == ((void*)0))
    continue;
   VAR_5 = VAR_2->device_list[VAR_3][VAR_4];
   FUNC_1(VAR_2, VAR_5);
  }
 }
 FUNC_0("OUT\n");
}
