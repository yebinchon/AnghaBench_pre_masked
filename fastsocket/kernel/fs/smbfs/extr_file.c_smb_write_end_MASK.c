
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct page {int dummy; } ;
struct file {int dummy; } ;
struct address_space {int dummy; } ;
typedef int loff_t ;


 int VAR_0 ;
 int FUNC_0 (struct page*) ;
 int FUNC_1 (struct page*) ;
 int FUNC_2 () ;
 int FUNC_3 (struct page*) ;
 int FUNC_4 (struct file*,struct page*,unsigned int,unsigned int) ;
 int FUNC_5 () ;
 int FUNC_6 (struct page*) ;

__attribute__((used)) static int FUNC_7(struct file *VAR_1, struct address_space *VAR_2,
   loff_t VAR_3, unsigned VAR_4, unsigned VAR_5,
   struct page *VAR_6, void *VAR_7)
{
 int VAR_8;
 unsigned VAR_9 = VAR_3 & (VAR_0 - 1);

 FUNC_2();
 VAR_8 = FUNC_4(VAR_1, VAR_6, VAR_9, VAR_5);
 FUNC_5();

 if (!VAR_8) {
  if (!FUNC_0(VAR_6) && VAR_5 == VAR_0)
   FUNC_1(VAR_6);
  VAR_8 = VAR_5;
 }

 FUNC_6(VAR_6);
 FUNC_3(VAR_6);

 return VAR_8;
}
