
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct netconfig_vars {scalar_t__ valid; struct netconfig_vars* linep; struct netconfig_vars* ncp; struct netconfig_vars* nc_lookups; struct netconfig_vars* next; int * nc_configs; scalar_t__ flag; } ;
struct netconfig_list {scalar_t__ valid; struct netconfig_list* linep; struct netconfig_list* ncp; struct netconfig_list* nc_lookups; struct netconfig_list* next; int * nc_configs; scalar_t__ flag; } ;
struct TYPE_2__ {scalar_t__ ref; scalar_t__ eof; int * tail; struct netconfig_vars* head; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (struct netconfig_vars*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int VAR_4 ;
 int * VAR_5 ;
 int VAR_6 ;
 TYPE_1__ VAR_7 ;
 int VAR_8 ;

int
FUNC_4(void *VAR_9)
{
    struct netconfig_vars *VAR_10 = (struct netconfig_vars *)VAR_9;

    struct netconfig_list *VAR_11, *VAR_12;




    if (VAR_10 == ((void*)0) || (VAR_10->valid != VAR_3 &&
     VAR_10->valid != VAR_2)) {
 VAR_4 = VAR_1;
 return (-1);
    }




    VAR_10->valid = VAR_0;
    VAR_10->flag = 0;
    VAR_10->nc_configs = ((void*)0);
    FUNC_2(&VAR_8);
    if (--VAR_7.ref > 0) {
 FUNC_3(&VAR_8);
     FUNC_1(VAR_10);
 return(0);
    }





    VAR_11 = VAR_7.head;
    VAR_7.eof = VAR_7.ref = 0;
    VAR_7.head = ((void*)0);
    VAR_7.tail = ((void*)0);
    FUNC_3(&VAR_8);

    while (VAR_11 != ((void*)0)) {
 VAR_12 = VAR_11->next;
 FUNC_1(VAR_11->ncp->nc_lookups);
 FUNC_1(VAR_11->ncp);
 FUNC_1(VAR_11->linep);
 FUNC_1(VAR_11);
 VAR_11 = VAR_12;
    }
    FUNC_1(VAR_10);

    FUNC_2(&VAR_6);
    FUNC_0(VAR_5);
    VAR_5 = ((void*)0);
    FUNC_3(&VAR_6);

    return (0);
}
