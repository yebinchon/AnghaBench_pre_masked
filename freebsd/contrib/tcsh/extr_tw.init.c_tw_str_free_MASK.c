
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ nbuff; scalar_t__ tbuff; int * buff; scalar_t__ nlist; scalar_t__ tlist; int * list; } ;
typedef TYPE_1__ stringlist_t ;


 int FUNC_0 (int *) ;
 int VAR_0 ;
 int FUNC_1 (int *) ;

__attribute__((used)) static void
FUNC_2(stringlist_t *VAR_1)
{
    VAR_0++;
    if (VAR_1->list) {
 FUNC_1(VAR_1->list);
 VAR_1->list = ((void*)0);
 VAR_1->tlist = VAR_1->nlist = 0;
    }
    if (VAR_1->buff) {
 FUNC_1(VAR_1->buff);
 VAR_1->buff = ((void*)0);
 VAR_1->tbuff = VAR_1->nbuff = 0;
    }
    FUNC_0(&VAR_0);
}
