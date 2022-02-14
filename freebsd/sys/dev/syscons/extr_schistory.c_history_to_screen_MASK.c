
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int history_pos; int ysize; int xsize; int vtb; int history; } ;
typedef TYPE_1__ scr_stat ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int ,int,int *,int,int) ;
 int FUNC_2 (int ,int,int) ;

__attribute__((used)) static void
FUNC_3(scr_stat *VAR_0)
{
 int VAR_1;
 int VAR_2;

 VAR_1 = VAR_0->history_pos;
 for (VAR_2 = 1; VAR_2 <= VAR_0->ysize; ++VAR_2) {
  VAR_1 = FUNC_2(VAR_0->history, VAR_1, -VAR_0->xsize);
  FUNC_1(VAR_0->history, VAR_1,
       &VAR_0->vtb, VAR_0->xsize*(VAR_0->ysize - VAR_2),
       VAR_0->xsize);
 }
 FUNC_0(VAR_0);
}
