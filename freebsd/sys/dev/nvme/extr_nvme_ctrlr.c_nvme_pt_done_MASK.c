
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint16_t ;
struct TYPE_2__ {int status; int cdw0; } ;
struct nvme_pt_command {struct mtx* driver_lock; TYPE_1__ cpl; } ;
struct nvme_completion {int status; int cdw0; } ;
struct mtx {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*,int) ;
 int FUNC_1 (struct mtx*) ;
 int FUNC_2 (struct mtx*) ;
 int FUNC_3 (struct nvme_pt_command*) ;

__attribute__((used)) static void
FUNC_4(void *VAR_1, const struct nvme_completion *VAR_2)
{
 struct nvme_pt_command *VAR_3 = VAR_1;
 struct mtx *VAR_4 = VAR_3->driver_lock;
 uint16_t VAR_5;

 FUNC_0(&VAR_3->cpl, sizeof(VAR_3->cpl));
 VAR_3->cpl.cdw0 = VAR_2->cdw0;

 VAR_5 = VAR_2->status;
 VAR_5 &= ~VAR_0;
 VAR_3->cpl.status = VAR_5;

 FUNC_1(VAR_4);
 VAR_3->driver_lock = ((void*)0);
 FUNC_3(VAR_3);
 FUNC_2(VAR_4);
}
