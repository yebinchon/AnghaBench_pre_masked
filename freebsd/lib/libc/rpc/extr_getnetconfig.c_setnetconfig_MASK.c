
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct netconfig_vars {int nc_configs; scalar_t__ flag; int valid; } ;
struct TYPE_2__ {int ref; int head; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int * FUNC_0 (int ,char*) ;
 int FUNC_1 (struct netconfig_vars*) ;
 scalar_t__ FUNC_2 (int) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int VAR_3 ;
 int * VAR_4 ;
 int VAR_5 ;
 TYPE_1__ VAR_6 ;
 int VAR_7 ;

void *
FUNC_5(void)
{
    struct netconfig_vars *VAR_8;

    if ((VAR_8 = (struct netconfig_vars *)FUNC_2(sizeof
  (struct netconfig_vars))) == ((void*)0)) {
 return(((void*)0));
    }





    FUNC_3(&VAR_7);
    VAR_6.ref++;
    FUNC_4(&VAR_7);

    FUNC_3(&VAR_5);
    if ((VAR_4 != ((void*)0)) || (VAR_4 = FUNC_0(VAR_2, "r")) != ((void*)0)) {
 VAR_8->valid = VAR_1;
 VAR_8->flag = 0;
 VAR_8->nc_configs = VAR_6.head;
 FUNC_4(&VAR_5);
 return ((void *)VAR_8);
    }
    FUNC_4(&VAR_5);

    FUNC_3(&VAR_7);
    VAR_6.ref--;
    FUNC_4(&VAR_7);

    VAR_3 = VAR_0;
    FUNC_1(VAR_8);
    return (((void*)0));
}
