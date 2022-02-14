
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct o2hb_region {TYPE_2__* hr_bdev; } ;
struct o2hb_bio_wait_ctxt {int wc_io_complete; } ;
struct address_space {int dummy; } ;
struct TYPE_4__ {TYPE_1__* bd_inode; } ;
struct TYPE_3__ {struct address_space* i_mapping; } ;


 int FUNC_0 (struct address_space*) ;
 int FUNC_1 (struct o2hb_bio_wait_ctxt*,int) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static void FUNC_3(struct o2hb_region *VAR_0,
       struct o2hb_bio_wait_ctxt *VAR_1)
{
 struct address_space *VAR_2 = VAR_0->hr_bdev->bd_inode->i_mapping;

 FUNC_0(VAR_2);
 FUNC_1(VAR_1, 1);

 FUNC_2(&VAR_1->wc_io_complete);
}
