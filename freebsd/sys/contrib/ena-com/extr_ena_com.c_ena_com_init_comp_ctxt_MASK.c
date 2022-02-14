
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u16 ;
struct ena_comp_ctx {int wait_event; } ;
struct ena_com_admin_queue {int q_depth; int comp_ctx; int q_dmadev; } ;


 int VAR_0 ;
 int FUNC_0 (int ,size_t) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (char*) ;
 struct ena_comp_ctx* FUNC_3 (struct ena_com_admin_queue*,scalar_t__,int) ;
 scalar_t__ FUNC_4 (int) ;

__attribute__((used)) static inline int FUNC_5(struct ena_com_admin_queue *VAR_1)
{
 size_t VAR_2 = VAR_1->q_depth * sizeof(struct ena_comp_ctx);
 struct ena_comp_ctx *VAR_3;
 u16 VAR_4;

 VAR_1->comp_ctx = FUNC_0(VAR_1->q_dmadev, VAR_2);
 if (FUNC_4(!VAR_1->comp_ctx)) {
  FUNC_2("memory allocation failed\n");
  return VAR_0;
 }

 for (VAR_4 = 0; VAR_4 < VAR_1->q_depth; VAR_4++) {
  VAR_3 = FUNC_3(VAR_1, VAR_4, 0);
  if (VAR_3)
   FUNC_1(VAR_3->wait_event);
 }

 return 0;
}
