
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int WINDOW ;
struct TYPE_3__ {int mousex; scalar_t__ data; scalar_t__ allocd; scalar_t__ choice; scalar_t__ offset; scalar_t__ length; int * win; int * par; } ;
typedef TYPE_1__ LIST ;


 int FUNC_0 (int ,int ,int ,int ,int,int,int,int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static void
FUNC_5(LIST * VAR_0, WINDOW *VAR_1, WINDOW *VAR_2, int VAR_3)
{
    VAR_0->par = VAR_1;
    VAR_0->win = VAR_2;
    VAR_0->length = 0;
    VAR_0->offset = 0;
    VAR_0->choice = 0;
    VAR_0->mousex = VAR_3;
    VAR_0->allocd = 0;
    VAR_0->data = 0;
    FUNC_0(FUNC_2(VAR_2), FUNC_1(VAR_2),
     FUNC_4(VAR_2), FUNC_3(VAR_2),
     VAR_3, 1, 1, 1 );
}
