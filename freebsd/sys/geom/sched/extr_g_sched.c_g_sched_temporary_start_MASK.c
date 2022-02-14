
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct bio {int dummy; } ;
struct TYPE_2__ {int gs_mtx; int gs_pending; int gs_npending; } ;


 int FUNC_0 (int *,struct bio*) ;
 TYPE_1__ VAR_0 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static void
FUNC_3(struct bio *VAR_1)
{

 FUNC_1(&VAR_0.gs_mtx);
 VAR_0.gs_npending++;
 FUNC_0(&VAR_0.gs_pending, VAR_1);
 FUNC_2(&VAR_0.gs_mtx);
}
