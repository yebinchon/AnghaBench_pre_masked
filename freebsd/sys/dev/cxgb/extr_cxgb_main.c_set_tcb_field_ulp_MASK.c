
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct ulp_txpkt {void* len; void* cmd_dest; } ;
struct cpl_set_tcb_field {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int) ;
 void* FUNC_2 (int ) ;
 int FUNC_3 (struct cpl_set_tcb_field*,unsigned int,unsigned int,int ,int ) ;

__attribute__((used)) static inline void
FUNC_4(struct cpl_set_tcb_field *VAR_1, unsigned int VAR_2,
    unsigned int VAR_3, u64 VAR_4, u64 VAR_5)
{
 struct ulp_txpkt *VAR_6 = (struct ulp_txpkt *)VAR_1;

 VAR_6->cmd_dest = FUNC_2(FUNC_0(VAR_0));
 VAR_6->len = FUNC_2(FUNC_1(sizeof(*VAR_1) / 8));
 FUNC_3(VAR_1, VAR_2, VAR_3, VAR_4, VAR_5);
}
