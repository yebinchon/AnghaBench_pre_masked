
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ flags; scalar_t__ addr; int * ovfl; } ;
typedef int HTAB ;
typedef TYPE_1__ BUFHEAD ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*) ;

void
FUNC_2(HTAB *VAR_0, BUFHEAD *VAR_1)
{
 VAR_1->ovfl = ((void*)0);
 VAR_1->addr = 0;
 VAR_1->flags = 0;
 FUNC_0(VAR_1);
 FUNC_1(VAR_1);
}
