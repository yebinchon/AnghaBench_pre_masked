
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct page {int dummy; } ;
struct inode {int i_blkbits; } ;
struct buffer_head {int dummy; } ;
struct address_space {int * assoc_mapping; } ;
typedef unsigned long pgoff_t ;


 scalar_t__ FUNC_0 (struct inode*) ;
 int VAR_0 ;
 struct buffer_head* FUNC_1 (struct page*,unsigned long,unsigned long,int,unsigned long) ;
 int FUNC_2 (struct buffer_head*) ;
 scalar_t__ FUNC_3 (struct buffer_head*) ;
 int FUNC_4 (struct buffer_head*) ;
 scalar_t__ FUNC_5 (struct buffer_head*) ;
 struct page* FUNC_6 (int *,unsigned long) ;
 struct page* FUNC_7 (struct address_space*,unsigned long) ;
 int FUNC_8 (struct buffer_head*,struct buffer_head*) ;
 int FUNC_9 (struct buffer_head*) ;
 int FUNC_10 (struct inode*) ;
 int FUNC_11 (struct page*) ;
 scalar_t__ FUNC_12 (int) ;
 int FUNC_13 (struct page*) ;

struct buffer_head *FUNC_14(struct inode *VAR_1,
          struct address_space *VAR_2,
          unsigned long VAR_3,
          unsigned long VAR_4)
{
 int VAR_5 = VAR_1->i_blkbits;
 pgoff_t VAR_6 = VAR_3 >> (VAR_0 - VAR_5);
 struct page *VAR_7, *VAR_8;
 struct buffer_head *VAR_9, *VAR_10;

 VAR_7 = FUNC_7(VAR_2, VAR_6);
 if (FUNC_12(!VAR_7))
  return ((void*)0);

 VAR_9 = FUNC_1(VAR_7, VAR_3, VAR_6, VAR_5, VAR_4);
 if (FUNC_12(!VAR_9)) {
  FUNC_13(VAR_7);
  FUNC_11(VAR_7);
  return ((void*)0);
 }
 if (!FUNC_5(VAR_9) && VAR_2->assoc_mapping != ((void*)0)) {





  VAR_8 = FUNC_6(VAR_2->assoc_mapping, VAR_6);
  if (!VAR_8)
   return VAR_9;

  VAR_10 = FUNC_1(VAR_8, VAR_3, VAR_6, VAR_5,
          VAR_4);
  if (FUNC_5(VAR_10)) {
   FUNC_8(VAR_9, VAR_10);
   if (FUNC_3(VAR_10)) {
    FUNC_9(VAR_9);
    if (!FUNC_4(VAR_9) && FUNC_0(VAR_1))
     FUNC_10(VAR_1);
   }
  }
  FUNC_2(VAR_10);
  FUNC_13(VAR_8);
  FUNC_11(VAR_8);
 }
 return VAR_9;
}
