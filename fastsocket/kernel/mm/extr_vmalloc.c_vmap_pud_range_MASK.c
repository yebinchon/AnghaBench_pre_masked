
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct page {int dummy; } ;
typedef int pud_t ;
typedef int pgprot_t ;
typedef int pgd_t ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned long FUNC_0 (unsigned long,unsigned long) ;
 int * FUNC_1 (int *,int *,unsigned long) ;
 scalar_t__ FUNC_2 (int *,unsigned long,unsigned long,int ,struct page**,int*) ;

__attribute__((used)) static int FUNC_3(pgd_t *VAR_2, unsigned long VAR_3,
  unsigned long VAR_4, pgprot_t VAR_5, struct page **VAR_6, int *VAR_7)
{
 pud_t *VAR_8;
 unsigned long VAR_9;

 VAR_8 = FUNC_1(&VAR_1, VAR_2, VAR_3);
 if (!VAR_8)
  return -VAR_0;
 do {
  VAR_9 = FUNC_0(VAR_3, VAR_4);
  if (FUNC_2(VAR_8, VAR_3, VAR_9, VAR_5, VAR_6, VAR_7))
   return -VAR_0;
 } while (VAR_8++, VAR_3 = VAR_9, VAR_3 != VAR_4);
 return 0;
}
