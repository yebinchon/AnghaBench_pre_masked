
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nvme_completion {int cdw0; } ;
struct nvme_async_event_request {int log_page_id; int ctrlr; int log_page_size; int log_page_buffer; int cpl; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (int *,struct nvme_completion const*,int) ;
 scalar_t__ FUNC_2 (struct nvme_completion const*) ;
 int VAR_1 ;
 int FUNC_3 (int ,int,int ,int ,int ,int ,struct nvme_async_event_request*) ;
 int FUNC_4 (int ,struct nvme_async_event_request*) ;
 int FUNC_5 (int ,int) ;
 int FUNC_6 (int ,struct nvme_completion const*,int,int *,int ) ;
 int FUNC_7 (int ,char*,int,int,int) ;

__attribute__((used)) static void
FUNC_8(void *VAR_2, const struct nvme_completion *VAR_3)
{
 struct nvme_async_event_request *VAR_4 = VAR_2;

 if (FUNC_2(VAR_3)) {






  return;
 }


 VAR_4->log_page_id = (VAR_3->cdw0 & 0xFF0000) >> 16;

 FUNC_7(VAR_4->ctrlr, "async event occurred (type 0x%x, info 0x%02x,"
     " page 0x%02x)\n", (VAR_3->cdw0 & 0x07), (VAR_3->cdw0 & 0xFF00) >> 8,
     VAR_4->log_page_id);

 if (FUNC_0(VAR_4->log_page_id)) {
  VAR_4->log_page_size = FUNC_5(VAR_4->ctrlr,
      VAR_4->log_page_id);
  FUNC_1(&VAR_4->cpl, VAR_3, sizeof(*VAR_3));
  FUNC_3(VAR_4->ctrlr, VAR_4->log_page_id,
      VAR_0, VAR_4->log_page_buffer,
      VAR_4->log_page_size, VAR_1,
      VAR_4);

 } else {
  FUNC_6(VAR_4->ctrlr, VAR_3, VAR_4->log_page_id,
      ((void*)0), 0);





  FUNC_4(VAR_4->ctrlr, VAR_4);
 }
}
