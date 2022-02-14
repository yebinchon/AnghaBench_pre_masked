
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_8__ {int mtx_lock; } ;
struct TYPE_7__ {TYPE_2__ p_profmtx; TYPE_2__ p_itimmtx; TYPE_2__ p_statmtx; TYPE_2__ p_slock; TYPE_2__ p_mtx; } ;


 TYPE_2__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 TYPE_2__ VAR_5 ;
 TYPE_2__ VAR_6 ;
 int FUNC_0 () ;
 int FUNC_1 (TYPE_2__*,char*,int *,int) ;
 int FUNC_2 (TYPE_2__*) ;
 TYPE_1__ VAR_7 ;

void
FUNC_3(void)
{


 FUNC_0();




 FUNC_1(&VAR_0, "Giant", ((void*)0), VAR_1 | VAR_3);
 FUNC_1(&VAR_5, "blocked lock", ((void*)0), VAR_4);
 VAR_5.mtx_lock = 0xdeadc0de;
 FUNC_1(&VAR_7, "process lock", ((void*)0), VAR_1 | VAR_2);
 FUNC_1(&VAR_7, "process slock", ((void*)0), VAR_4);
 FUNC_1(&VAR_7, "pstatl", ((void*)0), VAR_4);
 FUNC_1(&VAR_7, "pitiml", ((void*)0), VAR_4);
 FUNC_1(&VAR_7, "pprofl", ((void*)0), VAR_4);
 FUNC_1(&VAR_6, "cdev", ((void*)0), VAR_1);
 FUNC_2(&VAR_0);
}
