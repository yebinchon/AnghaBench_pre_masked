
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef void* uint32_t ;
struct TYPE_5__ {void* max_outstanding_io; void* max_transfer_size; void* max_sg_elem; void* conf_tab_sz; void* conf_tab_off; } ;
struct TYPE_6__ {TYPE_1__ pqi_cap; } ;
typedef TYPE_2__ pqisrc_softstate_t ;


 int FUNC_0 (char*) ;
 int FUNC_1 (char*,void*) ;
 int VAR_0 ;
 void* VAR_1 ;
 int FUNC_2 (TYPE_2__*,void**) ;

int FUNC_3(pqisrc_softstate_t *VAR_2)
{
 int VAR_3 = VAR_0;
 uint32_t VAR_4[6] = {0};

 FUNC_0("IN\n");

 VAR_4[0] = VAR_1;
 VAR_3 = FUNC_2(VAR_2, VAR_4);
 if (!VAR_3) {
  VAR_2->pqi_cap.max_sg_elem = VAR_4[1];
  VAR_2->pqi_cap.max_transfer_size = VAR_4[2];
  VAR_2->pqi_cap.max_outstanding_io = VAR_4[3];
  VAR_2->pqi_cap.conf_tab_off = VAR_4[4];
  VAR_2->pqi_cap.conf_tab_sz = VAR_4[5];

  FUNC_1("max_sg_elem = %x\n",
     VAR_2->pqi_cap.max_sg_elem);
  FUNC_1("max_transfer_size = %x\n",
     VAR_2->pqi_cap.max_transfer_size);
  FUNC_1("max_outstanding_io = %x\n",
     VAR_2->pqi_cap.max_outstanding_io);
 }

 FUNC_0("OUT\n");
 return VAR_3;
}
