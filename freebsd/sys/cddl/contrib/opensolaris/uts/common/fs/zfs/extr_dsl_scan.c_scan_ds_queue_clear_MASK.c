
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int scan_ds_t ;
struct TYPE_3__ {int scn_queue; } ;
typedef TYPE_1__ dsl_scan_t ;


 int * FUNC_0 (int *,void**) ;
 int FUNC_1 (int *,int) ;

__attribute__((used)) static void
FUNC_2(dsl_scan_t *VAR_0)
{
 void *VAR_1 = ((void*)0);
 scan_ds_t *VAR_2;
 while ((VAR_2 = FUNC_0(&VAR_0->scn_queue, &VAR_1)) != ((void*)0)) {
  FUNC_1(VAR_2, sizeof (*VAR_2));
 }
}
