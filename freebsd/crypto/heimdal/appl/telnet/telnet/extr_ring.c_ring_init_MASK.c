
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int size; unsigned char* supply; unsigned char* consume; unsigned char* bottom; unsigned char* top; scalar_t__ clearto; } ;
typedef TYPE_1__ Ring ;


 int FUNC_0 (TYPE_1__*,int ,int) ;

int
FUNC_1(Ring *VAR_0, unsigned char *VAR_1, int VAR_2)
{
    FUNC_0(VAR_0, 0, sizeof *VAR_0);

    VAR_0->size = VAR_2;

    VAR_0->supply = VAR_0->consume = VAR_0->bottom = VAR_1;

    VAR_0->top = VAR_0->bottom+VAR_0->size;





    return 1;
}
