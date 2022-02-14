
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct page {int dummy; } ;
struct inode {struct address_space* i_mapping; } ;
struct address_space {int dummy; } ;
typedef unsigned long loff_t ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 unsigned long FUNC_1 (unsigned long) ;
 unsigned long VAR_1 ;
 struct page* FUNC_2 (struct address_space*,unsigned long) ;
 int FUNC_3 (int) ;
 int FUNC_4 (struct page**,int) ;

int FUNC_5(struct inode *VAR_2, loff_t VAR_3, loff_t VAR_4,
       struct page **VAR_5, int *VAR_6)
{
 int VAR_7, VAR_8 = 0;
 struct address_space *VAR_9 = VAR_2->i_mapping;
 unsigned long VAR_10;
 loff_t VAR_11;

 FUNC_0(VAR_3 > VAR_4);

 VAR_7 = 0;
 VAR_11 = FUNC_1(VAR_4);
 VAR_10 = VAR_3 >> VAR_1;
 do {
  VAR_5[VAR_7] = FUNC_2(VAR_9, VAR_10);
  if (!VAR_5[VAR_7]) {
   VAR_8 = -VAR_0;
   FUNC_3(VAR_8);
   goto out;
  }

  VAR_7++;
  VAR_10++;
 } while (VAR_10 < (VAR_11 >> VAR_1));

out:
 if (VAR_8 != 0) {
  if (VAR_5)
   FUNC_4(VAR_5, VAR_7);
  VAR_7 = 0;
 }

 *VAR_6 = VAR_7;

 return VAR_8;
}
