
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct lio_mbuf_free_info {int mb; int map; } ;
struct lio_instr_queue {int txtag; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,int ) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ) ;

void
FUNC_3(struct lio_instr_queue *VAR_1, struct lio_mbuf_free_info *VAR_2)
{

 FUNC_0(VAR_1->txtag, VAR_2->map, VAR_0);
 FUNC_1(VAR_1->txtag, VAR_2->map);
 FUNC_2(VAR_2->mb);
}
