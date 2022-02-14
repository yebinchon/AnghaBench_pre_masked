
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_4__ {int * req_sense_data; int req_header; } ;
typedef TYPE_1__ ispstatus_cont_t ;
typedef int ispsoftc_t ;


 int FUNC_0 (int *,int *,int ) ;
 int FUNC_1 (int *,int ,int ) ;
 scalar_t__ FUNC_2 (int *) ;
 int FUNC_3 (int *,int *,int *) ;

void
FUNC_4(ispsoftc_t *VAR_0, ispstatus_cont_t *VAR_1, ispstatus_cont_t *VAR_2)
{
 int VAR_3;
 FUNC_3(VAR_0, &VAR_1->req_header, &VAR_2->req_header);
 if (FUNC_2(VAR_0)) {
  uint32_t *VAR_4, *VAR_5;
  VAR_4 = (uint32_t *) VAR_1->req_sense_data;
  VAR_5 = (uint32_t *) VAR_2->req_sense_data;
  for (VAR_3 = 0; VAR_3 < (sizeof (VAR_1->req_sense_data) / sizeof (uint32_t)); VAR_3++) {
   FUNC_1(VAR_0, VAR_4++, *VAR_5++);
  }
 } else {
  for (VAR_3 = 0; VAR_3 < sizeof (VAR_1->req_sense_data); VAR_3++) {
   FUNC_0(VAR_0, &VAR_1->req_sense_data[VAR_3], VAR_2->req_sense_data[VAR_3]);
  }
 }
}
