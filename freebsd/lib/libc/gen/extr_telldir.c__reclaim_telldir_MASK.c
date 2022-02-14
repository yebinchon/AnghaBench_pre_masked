
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct ddloc_mem {int dummy; } ;
struct TYPE_5__ {TYPE_1__* dd_td; } ;
struct TYPE_4__ {int td_locq; } ;
typedef TYPE_2__ DIR ;


 struct ddloc_mem* FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 struct ddloc_mem* FUNC_2 (struct ddloc_mem*,int ) ;
 int FUNC_3 (struct ddloc_mem*) ;
 int VAR_0 ;

void
FUNC_4(DIR *VAR_1)
{
 struct ddloc_mem *VAR_2;
 struct ddloc_mem *VAR_3;

 VAR_2 = FUNC_0(&VAR_1->dd_td->td_locq);
 while (VAR_2 != ((void*)0)) {
  VAR_3 = VAR_2;
  VAR_2 = FUNC_2(VAR_2, VAR_0);
  FUNC_3(VAR_3);
 }
 FUNC_1(&VAR_1->dd_td->td_locq);
}
