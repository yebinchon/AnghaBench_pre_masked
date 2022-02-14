
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_4__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ duplex; int lock; } ;
typedef TYPE_1__ sb_devc ;
struct TYPE_6__ {TYPE_1__* devc; } ;


 TYPE_4__** VAR_0 ;
 int FUNC_0 (TYPE_1__*,int,int,int) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;

__attribute__((used)) static void FUNC_4(int VAR_1)
{
 unsigned long VAR_2;
 sb_devc *VAR_3 = VAR_0[VAR_1]->devc;

 FUNC_2(&VAR_3->lock, VAR_2);
 FUNC_1(VAR_3);
 FUNC_3(&VAR_3->lock, VAR_2);




 if (VAR_3->duplex) FUNC_0(VAR_3, 0x78, 0x03, 0x00);
}
