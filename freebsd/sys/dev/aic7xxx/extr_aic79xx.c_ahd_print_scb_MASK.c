
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint32_t ;
struct scb {struct hardware_scb* hscb; } ;
struct TYPE_3__ {int* cdb; } ;
struct TYPE_4__ {TYPE_1__ idata; } ;
struct hardware_scb {int control; int scsiid; int lun; int cdb_len; int sgptr; int datacnt; int dataptr; TYPE_2__ shared_data; } ;


 int FUNC_0 (struct scb*) ;
 int FUNC_1 (struct scb*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (char*,...) ;

void
FUNC_5(struct scb *VAR_0)
{
 struct hardware_scb *VAR_1;
 int VAR_2;

 VAR_1 = VAR_0->hscb;
 FUNC_4("scb:%p control:0x%x scsiid:0x%x lun:%d cdb_len:%d\n",
        (void *)VAR_0,
        VAR_1->control,
        VAR_1->scsiid,
        VAR_1->lun,
        VAR_1->cdb_len);
 FUNC_4("Shared Data: ");
 for (VAR_2 = 0; VAR_2 < sizeof(VAR_1->shared_data.idata.cdb); VAR_2++)
  FUNC_4("%#02x", VAR_1->shared_data.idata.cdb[VAR_2]);
 FUNC_4("        dataptr:%#x%x datacnt:%#x sgptr:%#x tag:%#x\n",
        (uint32_t)((FUNC_3(VAR_1->dataptr) >> 32) & 0xFFFFFFFF),
        (uint32_t)(FUNC_3(VAR_1->dataptr) & 0xFFFFFFFF),
        FUNC_2(VAR_1->datacnt),
        FUNC_2(VAR_1->sgptr),
        FUNC_0(VAR_0));
 FUNC_1(VAR_0);
}
