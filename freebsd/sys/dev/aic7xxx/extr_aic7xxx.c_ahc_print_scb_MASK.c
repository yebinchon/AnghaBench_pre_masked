
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct scb {int sg_count; TYPE_2__* sg_list; struct hardware_scb* hscb; } ;
struct TYPE_3__ {int* cdb; } ;
struct hardware_scb {int control; int scsiid; int lun; int cdb_len; int tag; int sgptr; int datacnt; int dataptr; TYPE_1__ shared_data; } ;
struct TYPE_4__ {int addr; int len; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (char*,...) ;

void
FUNC_2(struct scb *VAR_1)
{
 int VAR_2;

 struct hardware_scb *VAR_3 = VAR_1->hscb;

 FUNC_1("scb:%p control:0x%x scsiid:0x%x lun:%d cdb_len:%d\n",
        (void *)VAR_1,
        VAR_3->control,
        VAR_3->scsiid,
        VAR_3->lun,
        VAR_3->cdb_len);
 FUNC_1("Shared Data: ");
 for (VAR_2 = 0; VAR_2 < sizeof(VAR_3->shared_data.cdb); VAR_2++)
  FUNC_1("%#02x", VAR_3->shared_data.cdb[VAR_2]);
 FUNC_1("        dataptr:%#x datacnt:%#x sgptr:%#x tag:%#x\n",
  FUNC_0(VAR_3->dataptr),
  FUNC_0(VAR_3->datacnt),
  FUNC_0(VAR_3->sgptr),
  VAR_3->tag);
 if (VAR_1->sg_count > 0) {
  for (VAR_2 = 0; VAR_2 < VAR_1->sg_count; VAR_2++) {
   FUNC_1("sg[%d] - Addr 0x%x%x : Length %d\n",
          VAR_2,
          (FUNC_0(VAR_1->sg_list[VAR_2].len) >> 24
           & VAR_0),
          FUNC_0(VAR_1->sg_list[VAR_2].addr),
          FUNC_0(VAR_1->sg_list[VAR_2].len));
  }
 }
}
