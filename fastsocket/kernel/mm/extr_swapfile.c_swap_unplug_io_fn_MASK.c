
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_5__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_8__ {int val; } ;
typedef TYPE_3__ swp_entry_t ;
struct page {int dummy; } ;
struct block_device {TYPE_2__* bd_inode; } ;
struct backing_dev_info {int dummy; } ;
struct TYPE_9__ {struct block_device* bdev; } ;
struct TYPE_7__ {TYPE_1__* i_mapping; } ;
struct TYPE_6__ {struct backing_dev_info* backing_dev_info; } ;


 scalar_t__ FUNC_0 (struct page*) ;
 int FUNC_1 (int) ;
 int FUNC_2 (struct backing_dev_info*,struct page*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct page*) ;
 int FUNC_5 (struct page*) ;
 TYPE_5__** VAR_0 ;
 int VAR_1 ;
 size_t FUNC_6 (TYPE_3__) ;
 int FUNC_7 (int *) ;

void FUNC_8(struct backing_dev_info *VAR_2, struct page *VAR_3)
{
 swp_entry_t VAR_4;

 FUNC_3(&VAR_1);
 VAR_4.val = FUNC_5(VAR_3);
 if (FUNC_0(VAR_3)) {
  struct block_device *VAR_5 = VAR_0[FUNC_6(VAR_4)]->bdev;
  struct backing_dev_info *VAR_6;
  FUNC_1(FUNC_4(VAR_3) <= 1);

  VAR_6 = VAR_5->bd_inode->i_mapping->backing_dev_info;
  FUNC_2(VAR_6, VAR_3);
 }
 FUNC_7(&VAR_1);
}
