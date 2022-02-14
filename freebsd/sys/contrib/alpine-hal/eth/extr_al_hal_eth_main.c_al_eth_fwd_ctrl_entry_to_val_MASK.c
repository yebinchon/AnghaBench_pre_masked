
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct al_eth_fwd_ctrl_table_entry {scalar_t__ prio_sel; scalar_t__ queue_sel_1; scalar_t__ queue_sel_2; scalar_t__ udma_sel; scalar_t__ hdr_split_len_sel; scalar_t__ filter; } ;


 int FUNC_0 (int) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (int,int) ;
 int FUNC_2 (int ,int,int) ;
 int FUNC_3 (int ,int ,int,scalar_t__) ;
 scalar_t__ VAR_1 ;

__attribute__((used)) static uint32_t FUNC_4(struct al_eth_fwd_ctrl_table_entry *VAR_2)
{
 uint32_t VAR_3 = 0;
 FUNC_3(VAR_3, FUNC_1(3,0), 0, VAR_2->prio_sel);
 FUNC_3(VAR_3, FUNC_1(7,4), 4, VAR_2->queue_sel_1);
 FUNC_3(VAR_3, FUNC_1(9,8), 8, VAR_2->queue_sel_2);
 FUNC_3(VAR_3, FUNC_1(13,10), 10, VAR_2->udma_sel);
 FUNC_3(VAR_3, FUNC_1(17,15), 15, VAR_2->hdr_split_len_sel);
 if (VAR_2->hdr_split_len_sel != VAR_0)
  VAR_3 |= FUNC_0(18);
 FUNC_2(VAR_3, 19, !!(VAR_2->filter == VAR_1));

 return VAR_3;
}
