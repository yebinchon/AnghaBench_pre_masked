
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {int invalidate_rkey; } ;
struct ib_send_wr {TYPE_1__ ex; int wr_id; int opcode; } ;
struct ib_mr {int rkey; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct ib_mr*,int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct ib_send_wr*,int ,int) ;

__attribute__((used)) static void
FUNC_3(struct ib_send_wr *VAR_2, struct ib_mr *VAR_3)
{
 u32 VAR_4;

 FUNC_2(VAR_2, 0, sizeof(*VAR_2));
 VAR_2->opcode = VAR_0;
 VAR_2->wr_id = VAR_1;
 VAR_2->ex.invalidate_rkey = VAR_3->rkey;

 VAR_4 = FUNC_1(VAR_3->rkey);
 FUNC_0(VAR_3, VAR_4);
}
