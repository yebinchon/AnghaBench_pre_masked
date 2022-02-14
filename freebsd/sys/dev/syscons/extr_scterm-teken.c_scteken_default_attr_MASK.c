
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int ts_teken; } ;
typedef TYPE_1__ teken_stat ;
typedef int teken_attr_t ;
struct TYPE_5__ {TYPE_1__* ts; } ;
typedef TYPE_2__ scr_stat ;


 int FUNC_0 (int,int *) ;
 int FUNC_1 (int *,int *) ;

__attribute__((used)) static void
FUNC_2(scr_stat *VAR_0, int VAR_1, int VAR_2)
{
 teken_stat *VAR_3 = VAR_0->ts;
 teken_attr_t VAR_4;

 FUNC_0(VAR_1, &VAR_4);
 FUNC_1(&VAR_3->ts_teken, &VAR_4);
}
