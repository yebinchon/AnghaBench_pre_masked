
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct page {int dummy; } ;
typedef int pte_t ;
typedef int pmd_t ;
typedef int pgprot_t ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_0 (int) ;
 int VAR_3 ;
 int FUNC_1 (struct page*,int ) ;
 int * FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int *,unsigned long,int *,int ) ;

__attribute__((used)) static int FUNC_5(pmd_t *VAR_4, unsigned long VAR_5,
  unsigned long VAR_6, pgprot_t VAR_7, struct page **VAR_8, int *VAR_9)
{
 pte_t *VAR_10;






 VAR_10 = FUNC_2(VAR_4, VAR_5);
 if (!VAR_10)
  return -VAR_1;
 do {
  struct page *VAR_11 = VAR_8[*VAR_9];

  if (FUNC_0(!FUNC_3(*VAR_10)))
   return -VAR_0;
  if (FUNC_0(!VAR_11))
   return -VAR_1;
  FUNC_4(&VAR_3, VAR_5, VAR_10, FUNC_1(VAR_11, VAR_7));
  (*VAR_9)++;
 } while (VAR_10++, VAR_5 += VAR_2, VAR_5 != VAR_6);
 return 0;
}
