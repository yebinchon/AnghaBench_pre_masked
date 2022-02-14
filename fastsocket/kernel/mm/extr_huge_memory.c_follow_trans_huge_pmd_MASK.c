
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct page {int dummy; } ;
struct mm_struct {int page_table_lock; } ;
typedef int pmd_t ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned long VAR_3 ;
 unsigned long VAR_4 ;
 int FUNC_0 (struct page*) ;
 int FUNC_1 (struct page*) ;
 int FUNC_2 (int) ;
 int FUNC_3 (struct page*) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 struct page* FUNC_6 (int ) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (struct mm_struct*,unsigned long,int *,int ) ;
 int FUNC_9 (int *) ;

struct page *FUNC_10(struct mm_struct *VAR_5,
       unsigned long VAR_6,
       pmd_t *VAR_7,
       unsigned int VAR_8)
{
 struct page *VAR_9 = ((void*)0);

 FUNC_2(FUNC_9(&VAR_5->page_table_lock));

 if (VAR_8 & VAR_2 && !FUNC_7(*VAR_7))
  goto out;

 VAR_9 = FUNC_6(*VAR_7);
 FUNC_2(!FUNC_1(VAR_9));
 if (VAR_8 & VAR_1) {
  pmd_t VAR_10;
  VAR_10 = FUNC_5(FUNC_4(*VAR_7));
  FUNC_8(VAR_5, VAR_6 & VAR_3, VAR_7, VAR_10);
 }
 VAR_9 += (VAR_6 & ~VAR_3) >> VAR_4;
 FUNC_2(!FUNC_0(VAR_9));
 if (VAR_8 & VAR_0)
  FUNC_3(VAR_9);

out:
 return VAR_9;
}
