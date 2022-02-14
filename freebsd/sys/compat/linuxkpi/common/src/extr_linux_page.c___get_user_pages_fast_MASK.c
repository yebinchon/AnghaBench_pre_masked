
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_6__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int vm_prot_t ;
typedef struct page* vm_page_t ;
typedef unsigned long vm_offset_t ;
typedef TYPE_3__* vm_map_t ;
struct page {scalar_t__ dirty; } ;
struct TYPE_10__ {TYPE_2__* td_proc; } ;
struct TYPE_9__ {int pmap; } ;
struct TYPE_8__ {TYPE_1__* p_vmspace; } ;
struct TYPE_7__ {TYPE_3__ vm_map; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 size_t VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 TYPE_6__* VAR_6 ;
 scalar_t__ FUNC_1 () ;
 struct page* FUNC_2 (int ,unsigned long,int) ;
 unsigned long FUNC_3 (TYPE_3__*) ;
 unsigned long FUNC_4 (TYPE_3__*) ;
 int FUNC_5 (struct page*) ;

int
FUNC_6(unsigned long VAR_7, int VAR_8, int VAR_9,
    struct page **VAR_10)
{
 vm_map_t VAR_11;
 vm_page_t *VAR_12;
 vm_offset_t VAR_13;
 vm_offset_t VAR_14;
 vm_prot_t VAR_15;
 int VAR_16;

 if (VAR_8 == 0 || FUNC_1())
  return (0);

 FUNC_0(VAR_10 != ((void*)0));
 VAR_13 = VAR_7;
 VAR_11 = &VAR_6->td_proc->p_vmspace->vm_map;
 VAR_14 = VAR_7 + (((size_t)VAR_8) << VAR_1);
 if (VAR_7 < FUNC_4(VAR_11) || VAR_14 > FUNC_3(VAR_11))
  return (-VAR_0);
 VAR_15 = VAR_9 ? (VAR_4 | VAR_5) : VAR_4;
 for (VAR_16 = 0, VAR_12 = VAR_10, VAR_13 = VAR_7; VAR_13 < VAR_14;
     VAR_12++, VAR_13 += VAR_2, VAR_16++) {
  *VAR_12 = FUNC_2(VAR_11->pmap, VAR_13, VAR_15);
  if (*VAR_12 == ((void*)0))
   break;

  if ((VAR_15 & VAR_5) != 0 &&
      (*VAR_12)->dirty != VAR_3) {
   FUNC_5(*VAR_12);
  }
 }
 return (VAR_16);
}
