
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nvme_completion_poll_status {int done; int cpl; } ;
struct nvme_completion {int dummy; } ;


 int FUNC_0 (int *,int) ;
 int FUNC_1 (int *,struct nvme_completion const*,int) ;

void
FUNC_2(void *VAR_0, const struct nvme_completion *VAR_1)
{
 struct nvme_completion_poll_status *VAR_2 = VAR_0;






 FUNC_1(&VAR_2->cpl, VAR_1, sizeof(*VAR_1));
 FUNC_0(&VAR_2->done, 1);
}
