
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_3__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int lock; } ;
typedef TYPE_1__ sb_devc ;
struct TYPE_5__ {TYPE_1__* devc; } ;


 TYPE_3__** VAR_0 ;
 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;

__attribute__((used)) static void FUNC_3(int VAR_1)
{
 unsigned long VAR_2;
 sb_devc *VAR_3 = VAR_0[VAR_1]->devc;

 FUNC_1(&VAR_3->lock, VAR_2);
 FUNC_0(VAR_3);
 FUNC_2(&VAR_3->lock, VAR_2);
}
