
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct md_s {int queue_mtx; int flags; } ;
struct g_provider {TYPE_1__* geom; } ;
struct TYPE_2__ {struct md_s* softc; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static void
FUNC_3(struct g_provider *VAR_1)
{
 struct md_s *VAR_2 = VAR_1->geom->softc;

 FUNC_0(&VAR_2->queue_mtx);
 VAR_2->flags |= VAR_0;
 FUNC_2(&VAR_2->flags);
 FUNC_1(&VAR_2->queue_mtx);
}
