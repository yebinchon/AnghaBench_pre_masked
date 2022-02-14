
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int ref; int display_name; } ;
typedef TYPE_1__ ocs_io_t ;


 int FUNC_0 (int) ;
 int FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int *) ;
 int FUNC_3 (TYPE_1__*,char*,TYPE_1__*,int ) ;

void
FUNC_4(ocs_io_t *VAR_0)
{
 FUNC_3(VAR_0, "freeing io 0x%p %s\n", VAR_0, VAR_0->display_name);
 FUNC_0(FUNC_2(&VAR_0->ref) > 0);
 FUNC_1(&VAR_0->ref);
}
