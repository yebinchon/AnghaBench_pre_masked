
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int* md_upte; } ;
struct thread {TYPE_1__ td_md; scalar_t__ td_kstack; } ;
typedef int pt_entry_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int* FUNC_0 (int ,scalar_t__) ;

void
FUNC_1(struct thread *VAR_4)
{
 pt_entry_t *VAR_5;
 int VAR_6;







 for (VAR_6 = 0; VAR_6 < VAR_0; VAR_6++) {
  VAR_5 = FUNC_0(VAR_3, VAR_4->td_kstack + VAR_6 * VAR_1);
  VAR_4->td_md.md_upte[VAR_6] = *VAR_5 & ~VAR_2;
 }
}
