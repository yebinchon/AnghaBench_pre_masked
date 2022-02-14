
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int vm_prot_t ;
typedef int u_long ;
struct TYPE_4__ {int kernbase; scalar_t__ paemode; } ;
struct vmstate {TYPE_1__ hdr; } ;
struct i386_iter {int pteindex; int nptes; TYPE_2__* kd; } ;
typedef int i386_pte_t ;
typedef int i386_pte_pae_t ;
struct TYPE_5__ {struct vmstate* vmst; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int) ;
 int FUNC_1 (TYPE_2__*,int) ;
 int FUNC_2 (TYPE_2__*,int) ;

__attribute__((used)) static int
FUNC_3(struct i386_iter *VAR_4, u_long *VAR_5, u_long *VAR_6, u_long *VAR_7,
    vm_prot_t *VAR_8)
{
 struct vmstate *VAR_9 = VAR_4->kd->vmst;
 i386_pte_t VAR_10;
 i386_pte_pae_t VAR_11;
 int VAR_12 = 0;

 *VAR_7 = 0;
 *VAR_5 = 0;
 *VAR_6 = 0;
 *VAR_7 = 0;
 *VAR_8 = 0;
 for (; VAR_4->pteindex < VAR_4->nptes && VAR_12 == 0; VAR_4->pteindex++) {
  if (VAR_9->hdr.paemode) {
   VAR_11 = FUNC_2(VAR_4->kd, VAR_4->pteindex);
   if ((VAR_11 & VAR_3) == 0)
    continue;
   *VAR_8 = FUNC_0(VAR_11);
   *VAR_5 = VAR_11 & VAR_2;
  } else {
   VAR_10 = FUNC_1(VAR_4->kd, VAR_4->pteindex);
   if ((VAR_10 & VAR_3) == 0)
    continue;
   *VAR_8 = FUNC_0(VAR_10);
   *VAR_5 = VAR_10 & VAR_1;
  }
  *VAR_6 = VAR_9->hdr.kernbase + (VAR_4->pteindex << VAR_0);
  VAR_12 = 1;
 }
 return VAR_12;
}
