
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_3__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int tconst; scalar_t__ trigger_bits; int lock; } ;
typedef TYPE_1__ sb_devc ;
struct TYPE_5__ {TYPE_1__* devc; } ;


 int VAR_0 ;
 TYPE_3__** VAR_1 ;
 scalar_t__ FUNC_0 (TYPE_1__*,int) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;

__attribute__((used)) static int FUNC_3(int VAR_2, int VAR_3, int VAR_4)
{
 sb_devc *VAR_5 = VAR_1[VAR_2]->devc;
 unsigned long VAR_6;

 FUNC_1(&VAR_5->lock, VAR_6);
 if (FUNC_0(VAR_5, 0x40))
  FUNC_0(VAR_5, VAR_5->tconst);
 FUNC_0(VAR_5, VAR_0);
 FUNC_2(&VAR_5->lock, VAR_6);

 VAR_5->trigger_bits = 0;
 return 0;
}
