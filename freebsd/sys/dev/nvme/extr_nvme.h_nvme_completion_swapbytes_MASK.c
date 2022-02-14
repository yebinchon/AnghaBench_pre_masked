
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nvme_completion {void* status; void* sqid; void* sqhd; int cdw0; } ;


 void* FUNC_0 (void*) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static inline
void FUNC_2(struct nvme_completion *VAR_0)
{

 VAR_0->cdw0 = FUNC_1(VAR_0->cdw0);

 VAR_0->sqhd = FUNC_0(VAR_0->sqhd);
 VAR_0->sqid = FUNC_0(VAR_0->sqid);

 VAR_0->status = FUNC_0(VAR_0->status);
}
