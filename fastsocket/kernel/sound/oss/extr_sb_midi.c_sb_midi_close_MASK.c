
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_3__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int lock; scalar_t__ opened; scalar_t__ input_opened; scalar_t__ intr_active; } ;
typedef TYPE_1__ sb_devc ;
struct TYPE_5__ {TYPE_1__* devc; } ;


 TYPE_3__** VAR_0 ;
 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;

__attribute__((used)) static void FUNC_3(int VAR_1)
{
 sb_devc *VAR_2 = VAR_0[VAR_1]->devc;
 unsigned long VAR_3;

 if (VAR_2 == ((void*)0))
  return;

 FUNC_1(&VAR_2->lock, VAR_3);
 FUNC_0(VAR_2);
 VAR_2->intr_active = 0;
 VAR_2->input_opened = 0;
 VAR_2->opened = 0;
 FUNC_2(&VAR_2->lock, VAR_3);
}
