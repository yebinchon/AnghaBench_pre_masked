
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct al_eth_fwd_vid_table_entry {int udma_mask; int filter; int control; } ;


 int FUNC_0 (int,int) ;
 int FUNC_1 (int ,int,int ) ;
 int FUNC_2 (int ,int ,int,int ) ;

__attribute__((used)) static uint32_t FUNC_3(struct al_eth_fwd_vid_table_entry *VAR_0)
{
 uint32_t VAR_1 = 0;
 FUNC_1(VAR_1, 0, VAR_0->control);
 FUNC_1(VAR_1, 1, VAR_0->filter);
 FUNC_2(VAR_1, FUNC_0(5,2), 2, VAR_0->udma_mask);

 return VAR_1;
}
