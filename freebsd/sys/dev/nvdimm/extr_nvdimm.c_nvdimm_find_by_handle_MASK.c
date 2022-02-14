
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nvdimm_dev {int dummy; } ;
typedef scalar_t__ nfit_handle_t ;
typedef int device_t ;


 int VAR_0 ;
 int FUNC_0 (int ,int **,int*) ;
 struct nvdimm_dev* FUNC_1 (int ) ;
 int FUNC_2 (int *,int ) ;
 int VAR_1 ;
 scalar_t__ FUNC_3 (int ) ;

struct nvdimm_dev *
FUNC_4(nfit_handle_t VAR_2)
{
 struct nvdimm_dev *VAR_3;
 device_t *VAR_4;
 int VAR_5, VAR_6, VAR_7;

 VAR_3 = ((void*)0);
 VAR_6 = FUNC_0(VAR_1, &VAR_4, &VAR_7);
 if (VAR_6 != 0)
  return (((void*)0));
 for (VAR_5 = 0; VAR_5 < VAR_7; VAR_5++) {
  if (FUNC_3(VAR_4[VAR_5]) == VAR_2) {
   VAR_3 = FUNC_1(VAR_4[VAR_5]);
   break;
  }
 }
 FUNC_2(VAR_4, VAR_0);
 return (VAR_3);
}
