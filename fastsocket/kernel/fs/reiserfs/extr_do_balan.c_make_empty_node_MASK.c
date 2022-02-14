
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct buffer_info {int bi_position; scalar_t__ bi_parent; int * bi_bh; } ;
struct block_head {int dummy; } ;
struct TYPE_2__ {scalar_t__ dc_size; } ;


 struct block_head* FUNC_0 (int *) ;
 TYPE_1__* FUNC_1 (scalar_t__,int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int ,char*) ;
 int FUNC_4 (struct block_head*,int ) ;
 int FUNC_5 (struct block_head*,int ) ;

void FUNC_6(struct buffer_info *VAR_0)
{
 struct block_head *VAR_1;

 FUNC_3(VAR_0->bi_bh == ((void*)0), "PAP-12295: pointer to the buffer is NULL");

 VAR_1 = FUNC_0(VAR_0->bi_bh);
 FUNC_5(VAR_1, 0);
 FUNC_4(VAR_1, FUNC_2(VAR_0->bi_bh));

 if (VAR_0->bi_parent)
  FUNC_1(VAR_0->bi_parent, VAR_0->bi_position)->dc_size = 0;
}
