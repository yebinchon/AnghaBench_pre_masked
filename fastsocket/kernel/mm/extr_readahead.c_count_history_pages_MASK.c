
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct file_ra_state {int dummy; } ;
struct address_space {int page_tree; } ;
typedef int pgoff_t ;


 int FUNC_0 (int *,int,unsigned long) ;
 int FUNC_1 () ;
 int FUNC_2 () ;

__attribute__((used)) static pgoff_t FUNC_3(struct address_space *VAR_0,
       struct file_ra_state *VAR_1,
       pgoff_t VAR_2, unsigned long VAR_3)
{
 pgoff_t VAR_4;

 FUNC_1();
 VAR_4 = FUNC_0(&VAR_0->page_tree, VAR_2 - 1, VAR_3);
 FUNC_2();

 return VAR_2 - 1 - VAR_4;
}
