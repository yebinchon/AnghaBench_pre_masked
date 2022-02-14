
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct writeback_control {int dummy; } ;
struct page {unsigned long index; struct address_space* mapping; } ;
struct inode {unsigned long i_size; } ;
struct address_space {struct inode* host; } ;


 int FUNC_0 (int) ;
 unsigned long VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (struct page*) ;
 int FUNC_2 (struct page*) ;
 int FUNC_3 (struct page*) ;
 int FUNC_4 (struct inode*,struct page*,int ,unsigned int) ;
 int FUNC_5 (struct page*) ;

__attribute__((used)) static int
FUNC_6(struct page *VAR_2, struct writeback_control *VAR_3)
{
 struct address_space *VAR_4 = VAR_2->mapping;
 struct inode *VAR_5;
 unsigned long VAR_6;
 unsigned VAR_7 = VAR_1;
 int VAR_8;

 FUNC_0(!VAR_4);
 VAR_5 = VAR_4->host;
 FUNC_0(!VAR_5);

 VAR_6 = VAR_5->i_size >> VAR_0;


 if (VAR_2->index < VAR_6)
  goto do_it;

 VAR_7 = VAR_5->i_size & (VAR_1-1);

 if (VAR_2->index >= VAR_6+1 || !VAR_7)
  return 0;
do_it:
 FUNC_2(VAR_2);
 VAR_8 = FUNC_4(VAR_5, VAR_2, 0, VAR_7);
 FUNC_1(VAR_2);
 FUNC_5(VAR_2);
 FUNC_3(VAR_2);
 return VAR_8;
}
