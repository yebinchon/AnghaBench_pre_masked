
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct emu_voice {int busy; } ;
struct emu_sc_info {int lock; struct emu_voice* voice; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;

struct emu_voice *
FUNC_2(struct emu_sc_info *VAR_1)
{
 struct emu_voice *VAR_2;
 int VAR_3;

 VAR_2 = ((void*)0);
 FUNC_0(&VAR_1->lock);
 for (VAR_3 = 0; VAR_3 < VAR_0 && VAR_1->voice[VAR_3].busy; VAR_3++);
 if (VAR_3 < VAR_0) {
  VAR_2 = &VAR_1->voice[VAR_3];
  VAR_2->busy = 1;
 }
 FUNC_1(&VAR_1->lock);
 return (VAR_2);
}
