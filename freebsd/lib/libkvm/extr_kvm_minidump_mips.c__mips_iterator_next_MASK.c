
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int vm_prot_t ;
typedef scalar_t__ u_long ;
struct TYPE_4__ {scalar_t__ kernbase; } ;
struct vmstate {int pte_size; TYPE_1__ hdr; } ;
struct mips_iter {int pteindex; int nptes; TYPE_2__* kd; } ;
typedef int mips64_pte_t ;
typedef int mips32_pte_t ;
struct TYPE_5__ {struct vmstate* vmst; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int) ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (int) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_2 (TYPE_2__*,int) ;
 int FUNC_3 (TYPE_2__*,int) ;

__attribute__((used)) static int
FUNC_4(struct mips_iter *VAR_7, u_long *VAR_8, u_long *VAR_9, u_long *VAR_10,
    vm_prot_t *VAR_11)
{
 struct vmstate *VAR_12 = VAR_7->kd->vmst;
 int VAR_13 = 0;
 mips64_pte_t VAR_14;
 mips32_pte_t VAR_15;





 *VAR_11 = VAR_5 | VAR_4;
 *VAR_8 = 0;
 *VAR_9 = 0;
 *VAR_10 = 0;
 for (;VAR_7->pteindex < VAR_7->nptes && VAR_13 == 0; VAR_7->pteindex++) {
  if (VAR_12->pte_size == 64) {
   VAR_14 = FUNC_3(VAR_7->kd, VAR_7->pteindex);
   if ((VAR_14 & VAR_3) == 0)
    continue;
   if ((VAR_14 & VAR_1) == 0)
    *VAR_11 |= VAR_6;
   *VAR_8 = FUNC_1(VAR_14);
  } else {
   VAR_15 = FUNC_2(VAR_7->kd, VAR_7->pteindex);
   if ((VAR_15 & VAR_3) == 0)
    continue;
   if ((VAR_15 & VAR_0) == 0)
    *VAR_11 |= VAR_6;
   *VAR_8 = FUNC_0(VAR_15);
  }
  *VAR_9 = VAR_12->hdr.kernbase + (VAR_7->pteindex << VAR_2);
  VAR_13 = 1;

 }

 return VAR_13;
}
