
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct page {int dummy; } ;
struct file_ra_state {int ra_pages; } ;
struct file {int dummy; } ;
struct address_space {int backing_dev_info; } ;
typedef int pgoff_t ;


 int FUNC_0 (struct page*) ;
 scalar_t__ FUNC_1 (struct page*) ;
 scalar_t__ FUNC_2 (struct page*) ;
 scalar_t__ FUNC_3 (int ) ;
 int FUNC_4 (int ,int *) ;
 int FUNC_5 (struct address_space*,struct file_ra_state*,struct file*,int,int ,unsigned long) ;

void
FUNC_6(struct address_space *VAR_0,
      struct file_ra_state *VAR_1, struct file *VAR_2,
      struct page *VAR_3, pgoff_t VAR_4,
      unsigned long VAR_5)
{

 if (!VAR_1->ra_pages)
  return;




 if (FUNC_2(VAR_3))
  return;

 FUNC_0(VAR_3);




 if (FUNC_3(VAR_0->backing_dev_info))
  return;


 FUNC_5(VAR_0, VAR_1, VAR_2, 1, VAR_4, VAR_5);
}
