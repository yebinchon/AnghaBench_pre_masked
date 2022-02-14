
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct octeon_device {int dummy; } ;
struct lio_soft_command {scalar_t__ ctxptr; } ;
struct lio_ctrl_pkt {int (* cb_fn ) (struct lio_ctrl_pkt*) ;} ;


 int FUNC_0 (struct octeon_device*,struct lio_soft_command*) ;
 int FUNC_1 (struct lio_ctrl_pkt*) ;

__attribute__((used)) static void
FUNC_2(struct octeon_device *VAR_0, uint32_t VAR_1, void *VAR_2)
{
 struct lio_soft_command *VAR_3 = (struct lio_soft_command *)VAR_2;
 struct lio_ctrl_pkt *VAR_4;

 VAR_4 = (struct lio_ctrl_pkt *)VAR_3->ctxptr;
 if (!VAR_1 && VAR_4->cb_fn)
  VAR_4->cb_fn(VAR_4);

 FUNC_0(VAR_0, VAR_3);
}
