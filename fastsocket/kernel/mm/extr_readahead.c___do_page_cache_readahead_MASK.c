
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct page {unsigned long index; int lru; } ;
struct inode {int dummy; } ;
struct file {int dummy; } ;
struct address_space {int page_tree; struct inode* host; } ;
typedef unsigned long pgoff_t ;
typedef int loff_t ;


 int FUNC_0 (int) ;
 int FUNC_1 (int ) ;
 int VAR_0 ;
 int FUNC_2 (struct page*) ;
 int FUNC_3 (struct inode*) ;
 int FUNC_4 (int *,int *) ;
 int FUNC_5 (int *) ;
 struct page* FUNC_6 (struct address_space*) ;
 int VAR_1 ;
 struct page* FUNC_7 (int *,unsigned long) ;
 int FUNC_8 () ;
 int FUNC_9 () ;
 int FUNC_10 (struct address_space*,struct file*,int *,int) ;

__attribute__((used)) static int
FUNC_11(struct address_space *VAR_2, struct file *VAR_3,
   pgoff_t VAR_4, unsigned long VAR_5,
   unsigned long VAR_6)
{
 struct inode *VAR_7 = VAR_2->host;
 struct page *VAR_8;
 unsigned long VAR_9;
 FUNC_1(VAR_1);
 int VAR_10;
 int VAR_11 = 0;
 loff_t VAR_12 = FUNC_3(VAR_7);

 if (VAR_12 == 0)
  goto out;

 VAR_9 = ((VAR_12 - 1) >> VAR_0);




 for (VAR_10 = 0; VAR_10 < VAR_5; VAR_10++) {
  pgoff_t VAR_13 = VAR_4 + VAR_10;

  if (VAR_13 > VAR_9)
   break;

  FUNC_8();
  VAR_8 = FUNC_7(&VAR_2->page_tree, VAR_13);
  FUNC_9();
  if (VAR_8)
   continue;

  VAR_8 = FUNC_6(VAR_2);
  if (!VAR_8)
   break;
  VAR_8->index = VAR_13;
  FUNC_4(&VAR_8->lru, &VAR_1);
  if (VAR_10 == VAR_5 - VAR_6)
   FUNC_2(VAR_8);
  VAR_11++;
 }






 if (VAR_11)
  FUNC_10(VAR_2, VAR_3, &VAR_1, VAR_11);
 FUNC_0(!FUNC_5(&VAR_1));
out:
 return VAR_11;
}
