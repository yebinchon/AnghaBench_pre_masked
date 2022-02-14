
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ena_comp_ctx {int dummy; } ;
struct ena_com_admin_queue {scalar_t__ polling; } ;


 int FUNC_0 (struct ena_comp_ctx*,struct ena_com_admin_queue*) ;
 int FUNC_1 (struct ena_comp_ctx*,struct ena_com_admin_queue*) ;

__attribute__((used)) static int FUNC_2(struct ena_comp_ctx *VAR_0,
          struct ena_com_admin_queue *VAR_1)
{
 if (VAR_1->polling)
  return FUNC_1(VAR_0,
         VAR_1);

 return FUNC_0(VAR_0,
           VAR_1);
}
