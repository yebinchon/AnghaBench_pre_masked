
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nvme_error_information_entry {void* ttsi; void* csi; int nsid; void* lba; void* error_location; void* status; void* cid; void* sqid; void* error_count; } ;


 void* FUNC_0 (void*) ;
 int FUNC_1 (int ) ;
 void* FUNC_2 (void*) ;

__attribute__((used)) static inline
void FUNC_3(struct nvme_error_information_entry *VAR_0)
{

 VAR_0->error_count = FUNC_2(VAR_0->error_count);
 VAR_0->sqid = FUNC_0(VAR_0->sqid);
 VAR_0->cid = FUNC_0(VAR_0->cid);
 VAR_0->status = FUNC_0(VAR_0->status);
 VAR_0->error_location = FUNC_0(VAR_0->error_location);
 VAR_0->lba = FUNC_2(VAR_0->lba);
 VAR_0->nsid = FUNC_1(VAR_0->nsid);
 VAR_0->csi = FUNC_2(VAR_0->csi);
 VAR_0->ttsi = FUNC_0(VAR_0->ttsi);
}
