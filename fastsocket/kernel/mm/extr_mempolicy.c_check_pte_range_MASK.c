
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vm_area_struct {int vm_mm; } ;
struct page {int dummy; } ;
typedef int spinlock_t ;
typedef int pte_t ;
typedef int pmd_t ;
typedef int nodemask_t ;


 unsigned long VAR_0 ;
 unsigned long VAR_1 ;
 unsigned long VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ FUNC_0 (struct page*) ;
 int FUNC_1 (struct page*,void*,unsigned long) ;
 int FUNC_2 (int,int const) ;
 int FUNC_3 (struct page*) ;
 int * FUNC_4 (int ,int *,unsigned long,int **) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int *,int *) ;
 struct page* FUNC_7 (struct vm_area_struct*,unsigned long,int ) ;

__attribute__((used)) static int FUNC_8(struct vm_area_struct *VAR_4, pmd_t *VAR_5,
  unsigned long VAR_6, unsigned long VAR_7,
  const nodemask_t *VAR_8, unsigned long VAR_9,
  void *VAR_10)
{
 pte_t *VAR_11;
 pte_t *VAR_12;
 spinlock_t *VAR_13;

 VAR_11 = VAR_12 = FUNC_4(VAR_4->vm_mm, VAR_5, VAR_6, &VAR_13);
 do {
  struct page *VAR_14;
  int VAR_15;

  if (!FUNC_5(*VAR_12))
   continue;
  VAR_14 = FUNC_7(VAR_4, VAR_6, *VAR_12);
  if (!VAR_14)
   continue;




  if (FUNC_0(VAR_14))
   continue;
  VAR_15 = FUNC_3(VAR_14);
  if (FUNC_2(VAR_15, *VAR_8) == !!(VAR_9 & VAR_0))
   continue;

  if (VAR_9 & (VAR_1 | VAR_2))
   FUNC_1(VAR_14, VAR_10, VAR_9);
  else
   break;
 } while (VAR_12++, VAR_6 += VAR_3, VAR_6 != VAR_7);
 FUNC_6(VAR_11, VAR_13);
 return VAR_6 != VAR_7;
}
