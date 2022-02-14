
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_1__ ;


typedef int xo_ssize_t ;
struct TYPE_8__ {scalar_t__ (* xo_flush ) (int ) ;int xo_opaque; } ;
typedef TYPE_1__ xo_handle_t ;
typedef scalar_t__ ssize_t ;


 int VAR_0 ;

 scalar_t__ FUNC_0 (int ) ;
 TYPE_1__* FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (TYPE_1__*,int ,int *,int *,int ) ;
 int FUNC_3 (TYPE_1__*) ;
 scalar_t__ FUNC_4 (TYPE_1__*) ;

xo_ssize_t
FUNC_5 (xo_handle_t *VAR_1)
{
    ssize_t VAR_2;

    VAR_1 = FUNC_1(VAR_1);

    switch (FUNC_3(VAR_1)) {
    case 128:
 FUNC_2(VAR_1, VAR_0, ((void*)0), ((void*)0), 0);
    }

    VAR_2 = FUNC_4(VAR_1);
    if (VAR_2 >= 0 && VAR_1->xo_flush)
 if (VAR_1->xo_flush(VAR_1->xo_opaque) < 0)
     return -1;

    return VAR_2;
}
