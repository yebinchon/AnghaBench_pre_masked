
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct netpath_vars {scalar_t__ valid; int ncp; struct netpath_vars* nchain_next; struct netpath_vars* ncp_list; struct netpath_vars* netpath_start; int * nc_handlep; } ;
struct netpath_chain {scalar_t__ valid; int ncp; struct netpath_chain* nchain_next; struct netpath_chain* ncp_list; struct netpath_chain* netpath_start; int * nc_handlep; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int *) ;
 int VAR_2 ;
 int FUNC_1 (int) ;
 int FUNC_2 (int ,char*) ;
 int FUNC_3 (struct netpath_vars*) ;
 int FUNC_4 (int ) ;
 scalar_t__ FUNC_5 () ;
 int VAR_3 ;

int
FUNC_6(void *VAR_4)
{
    struct netpath_vars *VAR_5 = (struct netpath_vars *)VAR_4;
    struct netpath_chain *VAR_6, *VAR_7;

    if (VAR_5 == ((void*)0) || VAR_5->valid != VAR_1) {
 VAR_2 = VAR_0;
 return (-1);
    }
    if (VAR_5->nc_handlep != ((void*)0))
 FUNC_0(VAR_5->nc_handlep);
    if (VAR_5->netpath_start != ((void*)0))
 FUNC_3(VAR_5->netpath_start);
    for (VAR_6 = VAR_5->ncp_list; VAR_6 != ((void*)0);
     VAR_7=VAR_6, VAR_6=VAR_6->nchain_next, FUNC_3(VAR_7)) {
 FUNC_4(VAR_6->ncp);
    }
    FUNC_3(VAR_5);






    return (0);
}
