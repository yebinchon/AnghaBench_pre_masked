
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nvme_qpair {int id; int phase; int num_entries; struct nvme_command* cmd; struct nvme_completion* cpl; } ;
struct nvme_completion {int dummy; } ;
struct nvme_command {int dummy; } ;


 int FUNC_0 (struct nvme_command*) ;
 int FUNC_1 (struct nvme_completion*) ;
 int FUNC_2 (char*,...) ;

__attribute__((used)) static void
FUNC_3(struct nvme_qpair *VAR_0)
{
 struct nvme_completion *VAR_1;
 struct nvme_command *VAR_2;
 int VAR_3;

 FUNC_2("id:%04Xh phase:%d\n", VAR_0->id, VAR_0->phase);

 FUNC_2("Completion queue:\n");
 for (VAR_3 = 0; VAR_3 < VAR_0->num_entries; VAR_3++) {
  VAR_1 = &VAR_0->cpl[VAR_3];
  FUNC_2("%05d: ", VAR_3);
  FUNC_1(VAR_1);
 }

 FUNC_2("Submission queue:\n");
 for (VAR_3 = 0; VAR_3 < VAR_0->num_entries; VAR_3++) {
  VAR_2 = &VAR_0->cmd[VAR_3];
  FUNC_2("%05d: ", VAR_3);
  FUNC_0(VAR_2);
 }
}
