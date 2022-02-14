
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__* data; int mousex; int win; int par; } ;
typedef TYPE_1__ LIST ;


 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (TYPE_1__*,int ,int ,int ) ;

__attribute__((used)) static void
FUNC_2(LIST * VAR_0, int VAR_1)
{
    int VAR_2;

    if (VAR_0->data != 0) {
 for (VAR_2 = 0; VAR_0->data[VAR_2] != 0; VAR_2++)
     FUNC_0(VAR_0->data[VAR_2]);
 FUNC_0(*VAR_0->data);
 VAR_0->data = 0;
    }
    if (VAR_1)
 FUNC_1(VAR_0, VAR_0->par, VAR_0->win, VAR_0->mousex);
}
