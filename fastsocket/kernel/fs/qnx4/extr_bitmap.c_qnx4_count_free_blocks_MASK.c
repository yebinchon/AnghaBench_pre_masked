
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct super_block {int dummy; } ;
struct buffer_head {int b_data; } ;
struct TYPE_6__ {TYPE_2__* BitMap; } ;
struct TYPE_4__ {int xtnt_blk; } ;
struct TYPE_5__ {int di_size; TYPE_1__ di_first_xtnt; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct buffer_head*) ;
 int FUNC_1 (int ,int,int*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (char*) ;
 TYPE_3__* FUNC_4 (struct super_block*) ;
 struct buffer_head* FUNC_5 (struct super_block*,int) ;

unsigned long FUNC_6(struct super_block *VAR_1)
{
 int VAR_2 = FUNC_2(FUNC_4(VAR_1)->BitMap->di_first_xtnt.xtnt_blk) - 1;
 int VAR_3 = 0;
 int VAR_4 = 0;
 int VAR_5 = 0;
 int VAR_6 = FUNC_2(FUNC_4(VAR_1)->BitMap->di_size);
 struct buffer_head *VAR_7;

 while (VAR_3 < VAR_6) {
  if ((VAR_7 = FUNC_5(VAR_1, VAR_2 + VAR_5)) == ((void*)0)) {
   FUNC_3("qnx4: I/O error in counting free blocks\n");
   break;
  }
  FUNC_1(VAR_7->b_data, VAR_6 - VAR_3, &VAR_4);
  FUNC_0(VAR_7);
  VAR_3 += VAR_0;
  VAR_5++;
 }

 return VAR_4;
}
