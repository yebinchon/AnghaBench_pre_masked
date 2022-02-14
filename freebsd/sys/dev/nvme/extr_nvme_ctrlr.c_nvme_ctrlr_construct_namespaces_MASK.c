
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t uint32_t ;
struct nvme_namespace {int dummy; } ;
struct TYPE_2__ {int nn; } ;
struct nvme_controller {struct nvme_namespace* ns; TYPE_1__ cdata; } ;


 int VAR_0 ;
 size_t FUNC_0 (int ,int ) ;
 int FUNC_1 (struct nvme_namespace*,size_t,struct nvme_controller*) ;

__attribute__((used)) static int
FUNC_2(struct nvme_controller *VAR_1)
{
 struct nvme_namespace *VAR_2;
 uint32_t VAR_3;

 for (VAR_3 = 0; VAR_3 < FUNC_0(VAR_1->cdata.nn, VAR_0); VAR_3++) {
  VAR_2 = &VAR_1->ns[VAR_3];
  FUNC_1(VAR_2, VAR_3+1, VAR_1);
 }

 return (0);
}
