
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {struct TYPE_4__* fatbuf; scalar_t__ links; } ;
typedef TYPE_1__ DOS_FS ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*) ;

__attribute__((used)) static int
FUNC_1(DOS_FS *VAR_1)
{
    if (VAR_1->links)
        return (VAR_0);
    FUNC_0(VAR_1->fatbuf);
    FUNC_0(VAR_1);
    return (0);
}
