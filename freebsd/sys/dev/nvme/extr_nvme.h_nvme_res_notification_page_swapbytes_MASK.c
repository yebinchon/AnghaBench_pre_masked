
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nvme_res_notification_page {int nsid; int log_page_count; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static inline
void FUNC_2(struct nvme_res_notification_page *VAR_0)
{
 VAR_0->log_page_count = FUNC_1(VAR_0->log_page_count);
 VAR_0->nsid = FUNC_0(VAR_0->nsid);
}
