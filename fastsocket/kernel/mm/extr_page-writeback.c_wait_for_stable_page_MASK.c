
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct page {int dummy; } ;
struct backing_dev_info {int dummy; } ;
struct address_space {TYPE_2__* host; struct backing_dev_info* backing_dev_info; } ;
struct TYPE_4__ {TYPE_1__* i_sb; } ;
struct TYPE_3__ {int s_flags; } ;


 int VAR_0 ;
 int FUNC_0 (struct backing_dev_info*) ;
 struct address_space* FUNC_1 (struct page*) ;
 int FUNC_2 (struct page*) ;

void FUNC_3(struct page *VAR_1)
{
 struct address_space *VAR_2 = FUNC_1(VAR_1);
 struct backing_dev_info *VAR_3 = VAR_2->backing_dev_info;

 if (!FUNC_0(VAR_3))
  return;





 FUNC_2(VAR_1);
}
