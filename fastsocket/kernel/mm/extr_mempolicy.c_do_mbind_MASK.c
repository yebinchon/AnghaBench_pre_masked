
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct vm_area_struct {int dummy; } ;
struct mm_struct {int mmap_sem; } ;
typedef struct vm_area_struct mempolicy ;
typedef int nodemask_t ;
struct TYPE_4__ {struct mm_struct* mm; } ;


 int VAR_0 ;
 long VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 long VAR_4 ;
 scalar_t__ FUNC_0 (struct vm_area_struct*) ;
 int FUNC_1 (int ) ;
 int VAR_5 ;
 unsigned short VAR_6 ;
 unsigned long VAR_7 ;
 unsigned long VAR_8 ;
 unsigned long VAR_9 ;
 unsigned long VAR_10 ;
 unsigned long VAR_11 ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (scalar_t__) ;
 unsigned long VAR_12 ;
 unsigned long VAR_13 ;
 long FUNC_4 (struct vm_area_struct*) ;
 int FUNC_5 (int ) ;
 struct vm_area_struct* FUNC_6 (struct mm_struct*,unsigned long,unsigned long,int *,unsigned long,int *) ;
 TYPE_1__* VAR_14 ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (struct mm_struct*,unsigned long,unsigned long,struct vm_area_struct*) ;
 int FUNC_10 (int *,int ,unsigned long,int,int ) ;
 int FUNC_11 () ;
 struct vm_area_struct* FUNC_12 (unsigned short,unsigned short,int *) ;
 int FUNC_13 (struct vm_area_struct*) ;
 int FUNC_14 (struct vm_area_struct*,int *,scalar_t__) ;
 int VAR_15 ;
 int* FUNC_15 (int ) ;
 int VAR_16 ;
 int FUNC_16 (char*,unsigned long,unsigned long,unsigned short,unsigned short,int) ;
 int FUNC_17 (int *) ;
 scalar_t__ VAR_17 ;
 int FUNC_18 (TYPE_1__*) ;
 int FUNC_19 (TYPE_1__*) ;
 int FUNC_20 (int *) ;

__attribute__((used)) static long FUNC_21(unsigned long VAR_18, unsigned long VAR_19,
       unsigned short VAR_20, unsigned short VAR_21,
       nodemask_t *VAR_22, unsigned long VAR_23)
{
 struct vm_area_struct *VAR_24;
 struct mm_struct *VAR_25 = VAR_14->mm;
 struct mempolicy *VAR_26;
 unsigned long VAR_27;
 int VAR_28;
 FUNC_1(VAR_16);

 if (VAR_23 & ~(unsigned long)(VAR_11 |
         VAR_9 | VAR_10))
  return -VAR_1;
 if ((VAR_23 & VAR_10) && !FUNC_5(VAR_0))
  return -VAR_4;

 if (VAR_18 & ~VAR_12)
  return -VAR_1;

 if (VAR_20 == VAR_6)
  VAR_23 &= ~VAR_11;

 VAR_19 = (VAR_19 + VAR_13 - 1) & VAR_12;
 VAR_27 = VAR_18 + VAR_19;

 if (VAR_27 < VAR_18)
  return -VAR_1;
 if (VAR_27 == VAR_18)
  return 0;

 VAR_26 = FUNC_12(VAR_20, VAR_21, VAR_22);
 if (FUNC_0(VAR_26))
  return FUNC_4(VAR_26);





 if (!VAR_26)
  VAR_23 |= VAR_7;

 FUNC_16("mbind %lx-%lx mode:%d flags:%d nodes:%lx\n",
   VAR_18, VAR_18 + VAR_19, VAR_20, VAR_21,
   VAR_22 ? FUNC_15(*VAR_22)[0] : -1);

 if (VAR_23 & (VAR_9 | VAR_10)) {

  VAR_28 = FUNC_11();
  if (VAR_28)
   goto mpol_out;
 }
 {
  FUNC_2(VAR_17);
  if (VAR_17) {
   FUNC_7(&VAR_25->mmap_sem);
   FUNC_18(VAR_14);
   VAR_28 = FUNC_14(VAR_26, VAR_22, VAR_17);
   FUNC_19(VAR_14);
   if (VAR_28)
    FUNC_20(&VAR_25->mmap_sem);
  } else
   VAR_28 = -VAR_3;
  FUNC_3(VAR_17);
 }
 if (VAR_28)
  goto mpol_out;

 VAR_24 = FUNC_6(VAR_25, VAR_18, VAR_27, VAR_22,
     VAR_23 | VAR_8, &VAR_16);

 VAR_28 = FUNC_4(VAR_24);
 if (!FUNC_0(VAR_24)) {
  int VAR_29 = 0;

  VAR_28 = FUNC_9(VAR_25, VAR_18, VAR_27, VAR_26);

  if (!FUNC_8(&VAR_16))
   VAR_29 = FUNC_10(&VAR_16, VAR_15,
        (unsigned long)VAR_24,
        0, VAR_5);

  if (!VAR_28 && VAR_29 && (VAR_23 & VAR_11))
   VAR_28 = -VAR_2;
 } else
  FUNC_17(&VAR_16);

 FUNC_20(&VAR_25->mmap_sem);
 mpol_out:
 FUNC_13(VAR_26);
 return VAR_28;
}
