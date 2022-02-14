
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vm_area_struct {int vm_mm; } ;
typedef int pmd_t ;


 unsigned long VAR_0 ;
 unsigned long VAR_1 ;
 unsigned long VAR_2 ;
 unsigned long VAR_3 ;
 int FUNC_0 (scalar_t__) ;
 scalar_t__ FUNC_1 (int ,struct vm_area_struct*,int *,unsigned long) ;
 int * FUNC_2 (int ,struct vm_area_struct*,unsigned long) ;
 int FUNC_3 () ;
 int FUNC_4 (struct vm_area_struct*,unsigned long,unsigned long) ;
 int FUNC_5 (struct vm_area_struct*,unsigned long,unsigned long) ;
 int * FUNC_6 (int ,unsigned long) ;
 scalar_t__ FUNC_7 (int) ;
 int FUNC_8 (int ,unsigned long,unsigned long) ;
 int FUNC_9 (int ,unsigned long,unsigned long) ;
 int FUNC_10 (struct vm_area_struct*,unsigned long,unsigned long,unsigned long,int *,int *) ;
 int FUNC_11 (struct vm_area_struct*,int *,unsigned long,unsigned long,struct vm_area_struct*,int *,unsigned long) ;
 scalar_t__ FUNC_12 (int ) ;
 scalar_t__ FUNC_13 (int ) ;
 int FUNC_14 (int ,int *) ;

unsigned long FUNC_15(struct vm_area_struct *VAR_4,
  unsigned long VAR_5, struct vm_area_struct *VAR_6,
  unsigned long VAR_7, unsigned long VAR_8)
{
 unsigned long VAR_9, VAR_10, VAR_11;
 pmd_t *VAR_12, *VAR_13;
 bool VAR_14 = 0;

 VAR_11 = VAR_5 + VAR_8;
 FUNC_4(VAR_4, VAR_5, VAR_11);

 FUNC_9(VAR_4->vm_mm, VAR_5, VAR_11);

 for (; VAR_5 < VAR_11; VAR_5 += VAR_9, VAR_7 += VAR_9) {
  FUNC_3();
  VAR_10 = (VAR_5 + VAR_3) & VAR_2;
  if (VAR_10 - 1 > VAR_11)
   VAR_10 = VAR_11;
  VAR_9 = VAR_10 - VAR_5;
  VAR_12 = FUNC_6(VAR_4->vm_mm, VAR_5);
  if (!VAR_12)
   continue;
  VAR_13 = FUNC_2(VAR_4->vm_mm, VAR_4, VAR_7);
  if (!VAR_13)
   break;
  if (FUNC_13(*VAR_12)) {
   int VAR_15 = 0;
   if (VAR_9 == VAR_0)
    VAR_15 = FUNC_10(VAR_4, VAR_5,
          VAR_7, VAR_11,
          VAR_12, VAR_13);
   if (VAR_15 > 0) {
    VAR_14 = 1;
    continue;
   } else if (!VAR_15)
    FUNC_14(VAR_4->vm_mm, VAR_12);
   FUNC_0(FUNC_13(*VAR_12));
  }
  if (FUNC_12(*VAR_13) && FUNC_1(VAR_6->vm_mm, VAR_6,
            VAR_13,
            VAR_7))
   break;
  VAR_10 = (VAR_7 + VAR_3) & VAR_2;
  if (VAR_9 > VAR_10 - VAR_7)
   VAR_9 = VAR_10 - VAR_7;
  if (VAR_9 > VAR_1)
   VAR_9 = VAR_1;
  FUNC_11(VAR_4, VAR_12, VAR_5, VAR_5 + VAR_9,
    VAR_6, VAR_13, VAR_7);
  VAR_14 = 1;
 }
 if (FUNC_7(VAR_14))
  FUNC_5(VAR_4, VAR_11-VAR_8, VAR_5);

 FUNC_8(VAR_4->vm_mm, VAR_11-VAR_8, VAR_11);

 return VAR_8 + VAR_5 - VAR_11;
}
