
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_4__ ;
typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int ts_busy; int ts_teken; } ;
typedef TYPE_1__ teken_stat ;
typedef int teken_attr_t ;
typedef int scr_stat ;
struct TYPE_7__ {scalar_t__ ts_busy; } ;
struct TYPE_6__ {int te_refcount; } ;


 int VAR_0 ;


 TYPE_4__ VAR_1 ;
 TYPE_3__ VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *,TYPE_1__*) ;
 int * FUNC_1 (int *) ;
 int FUNC_2 (int *,int *,int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *,int *) ;

__attribute__((used)) static int
FUNC_7(scr_stat *VAR_4, void **VAR_5, int VAR_6)
{
 teken_stat *VAR_7;
 teken_attr_t VAR_8;

 if (*VAR_5 == ((void*)0)) {
  if (VAR_1.ts_busy)
   return (VAR_0);
  *VAR_5 = &VAR_1;
 }
 VAR_7 = *VAR_5;

 switch (VAR_6) {
 case 129:
  ++VAR_2.te_refcount;
  VAR_7->ts_busy = 1;

 case 128:
  VAR_8 = *FUNC_1(&VAR_7->ts_teken);
  FUNC_2(&VAR_7->ts_teken, &VAR_3, VAR_4);
  FUNC_6(&VAR_7->ts_teken, &VAR_8);

  FUNC_3(&VAR_7->ts_teken);




  FUNC_5(&VAR_7->ts_teken);
  FUNC_0(VAR_4, VAR_7);
  break;
 }

 return (0);
}
