
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t u_int ;
struct nvme_resv_status_ext {int* regctl; TYPE_1__* ctrlr; int gen; } ;
typedef int s ;
struct TYPE_2__ {scalar_t__ hostid; int rkey; int ctrlr_id; } ;


 size_t FUNC_0 (size_t,size_t) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (void*) ;

__attribute__((used)) static inline
void FUNC_5(struct nvme_resv_status_ext *VAR_0, size_t VAR_1)
{
 u_int VAR_2, VAR_3;

 VAR_0->gen = FUNC_2(VAR_0->gen);
 VAR_3 = (VAR_0->regctl[1] << 8) | VAR_0->regctl[0];
 VAR_3 = FUNC_0(VAR_3, (VAR_1 - sizeof(VAR_0)) / sizeof(VAR_0->ctrlr[0]));
 for (VAR_2 = 0; VAR_2 < VAR_3; VAR_2++) {
  VAR_0->ctrlr[VAR_2].ctrlr_id = FUNC_1(VAR_0->ctrlr[VAR_2].ctrlr_id);
  VAR_0->ctrlr[VAR_2].rkey = FUNC_3(VAR_0->ctrlr[VAR_2].rkey);
  FUNC_4((void *)VAR_0->ctrlr[VAR_2].hostid);
 }
}
