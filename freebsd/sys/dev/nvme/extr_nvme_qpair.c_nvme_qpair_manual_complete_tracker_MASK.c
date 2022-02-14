
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct nvme_tracker {int cid; } ;
struct nvme_qpair {int id; } ;
struct nvme_completion {int status; int cid; int sqid; } ;
typedef int error_print_t ;
typedef int cpl ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct nvme_completion*,int ,int) ;
 int FUNC_1 (struct nvme_qpair*,struct nvme_tracker*,struct nvme_completion*,int ) ;

__attribute__((used)) static void
FUNC_2(struct nvme_qpair *VAR_6,
    struct nvme_tracker *VAR_7, uint32_t VAR_8, uint32_t VAR_9, uint32_t VAR_10,
    error_print_t VAR_11)
{
 struct nvme_completion VAR_12;

 FUNC_0(&VAR_12, 0, sizeof(VAR_12));
 VAR_12.sqid = VAR_6->id;
 VAR_12.cid = VAR_7->cid;
 VAR_12.status |= (VAR_8 & VAR_2) << VAR_3;
 VAR_12.status |= (VAR_9 & VAR_4) << VAR_5;
 VAR_12.status |= (VAR_10 & VAR_0) << VAR_1;
 FUNC_1(VAR_6, VAR_7, &VAR_12, VAR_11);
}
