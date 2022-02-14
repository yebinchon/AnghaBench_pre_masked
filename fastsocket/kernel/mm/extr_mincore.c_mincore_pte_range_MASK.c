
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int val; } ;
typedef TYPE_2__ swp_entry_t ;
struct vm_area_struct {TYPE_1__* vm_file; int vm_mm; } ;
typedef int spinlock_t ;
typedef int pte_t ;
typedef int pmd_t ;
typedef int pgoff_t ;
struct TYPE_5__ {int * f_mapping; } ;


 unsigned long VAR_0 ;
 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (TYPE_2__) ;
 unsigned char FUNC_2 (int *,int ) ;
 int FUNC_3 (struct vm_area_struct*,unsigned long,unsigned long,unsigned char*) ;
 scalar_t__ FUNC_4 (int ) ;
 scalar_t__ FUNC_5 (int ) ;
 int * FUNC_6 (int ,int *,unsigned long,int **) ;
 scalar_t__ FUNC_7 (int ) ;
 int FUNC_8 (int ) ;
 TYPE_2__ FUNC_9 (int ) ;
 int FUNC_10 (int *,int *) ;
 int VAR_1 ;

__attribute__((used)) static void FUNC_11(struct vm_area_struct *VAR_2, pmd_t *VAR_3,
   unsigned long VAR_4, unsigned long VAR_5,
   unsigned char *VAR_6)
{
 unsigned long VAR_7;
 spinlock_t *VAR_8;
 pte_t *VAR_9;

 VAR_9 = FUNC_6(VAR_2->vm_mm, VAR_3, VAR_4, &VAR_8);
 do {
  pte_t VAR_10 = *VAR_9;
  pgoff_t VAR_11;

  VAR_7 = VAR_4 + VAR_0;
  if (FUNC_5(VAR_10))
   FUNC_3(VAR_2, VAR_4, VAR_7, VAR_6);
  else if (FUNC_7(VAR_10))
   *VAR_6 = 1;
  else if (FUNC_4(VAR_10)) {
   VAR_11 = FUNC_8(VAR_10);
   *VAR_6 = FUNC_2(VAR_2->vm_file->f_mapping, VAR_11);
  } else {
   swp_entry_t VAR_12 = FUNC_9(VAR_10);

   if (FUNC_1(VAR_12)) {

    *VAR_6 = 1;
   } else {




    FUNC_0(1);
    *VAR_6 = 1;

   }
  }
  VAR_6++;
 } while (VAR_9++, VAR_4 = VAR_7, VAR_4 != VAR_5);
 FUNC_10(VAR_9 - 1, VAR_8);
}
