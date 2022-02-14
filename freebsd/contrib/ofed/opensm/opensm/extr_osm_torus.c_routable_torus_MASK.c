
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct torus {int flags; scalar_t__ link_cnt; scalar_t__ switch_cnt; TYPE_2__* osm; TYPE_3__**** sw; scalar_t__ z_sz; scalar_t__ x_sz; scalar_t__ y_sz; } ;
struct fabric {scalar_t__ link_cnt; scalar_t__ switch_cnt; } ;
struct TYPE_6__ {TYPE_1__* ptgrp; } ;
struct TYPE_5__ {int log; } ;
struct TYPE_4__ {int port_cnt; } ;


 int VAR_0 ;
 int FUNC_0 (int *,int ,char*,...) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (struct torus*,int,int,int,TYPE_3__*,int*) ;

__attribute__((used)) static
bool FUNC_2(struct torus *VAR_3, struct fabric *VAR_4)
{
 int VAR_5, VAR_6, VAR_7, VAR_8 = -1;
 unsigned VAR_9, VAR_10;
 bool VAR_11 = 1;

 VAR_3->flags &= ~VAR_0;

 if (VAR_3->link_cnt != VAR_4->link_cnt || VAR_3->switch_cnt != VAR_4->switch_cnt)
  FUNC_0(&VAR_3->osm->log, VAR_2,
   "Warning: Could not construct torus using all "
   "known fabric switches and/or links.\n");

 for (VAR_7 = 0; VAR_7 < (int)VAR_3->z_sz; VAR_7++)
  for (VAR_6 = 0; VAR_6 < (int)VAR_3->y_sz; VAR_6++)
   for (VAR_5 = 0; VAR_5 < (int)VAR_3->x_sz; VAR_5++)
    FUNC_1(VAR_3, VAR_5, VAR_6, VAR_7,
        VAR_3->sw[VAR_5][VAR_6][VAR_7], &VAR_8);



 for (VAR_7 = 0; VAR_7 < (int)VAR_3->z_sz; VAR_7++)
  for (VAR_6 = 0; VAR_6 < (int)VAR_3->y_sz; VAR_6++) {
   VAR_9 = 0;
   VAR_10 = 0;
   for (VAR_5 = 0; VAR_5 < (int)VAR_3->x_sz; VAR_5++) {

    if (!VAR_3->sw[VAR_5][VAR_6][VAR_7])
     continue;

    if (!VAR_3->sw[VAR_5][VAR_6][VAR_7]->ptgrp[0].port_cnt)
     VAR_9++;
    if (!VAR_3->sw[VAR_5][VAR_6][VAR_7]->ptgrp[1].port_cnt)
     VAR_10++;
   }
   if (VAR_9 != VAR_10) {
    FUNC_0(&VAR_3->osm->log, VAR_1,
     "ERR 4E32: strange failures in "
     "x ring at y=%d  z=%d"
     " b2g_cnt %u g2b_cnt %u\n",
     VAR_6, VAR_7, VAR_9, VAR_10);
    VAR_11 = 0;
   }
   if (VAR_9 > 1) {
    FUNC_0(&VAR_3->osm->log, VAR_1,
     "ERR 4E33: disjoint failures in "
     "x ring at y=%d  z=%d\n", VAR_6, VAR_7);
    VAR_11 = 0;
   }
  }

 for (VAR_5 = 0; VAR_5 < (int)VAR_3->x_sz; VAR_5++)
  for (VAR_7 = 0; VAR_7 < (int)VAR_3->z_sz; VAR_7++) {
   VAR_9 = 0;
   VAR_10 = 0;
   for (VAR_6 = 0; VAR_6 < (int)VAR_3->y_sz; VAR_6++) {

    if (!VAR_3->sw[VAR_5][VAR_6][VAR_7])
     continue;

    if (!VAR_3->sw[VAR_5][VAR_6][VAR_7]->ptgrp[2].port_cnt)
     VAR_9++;
    if (!VAR_3->sw[VAR_5][VAR_6][VAR_7]->ptgrp[3].port_cnt)
     VAR_10++;
   }
   if (VAR_9 != VAR_10) {
    FUNC_0(&VAR_3->osm->log, VAR_1,
     "ERR 4E34: strange failures in "
     "y ring at x=%d  z=%d"
     " b2g_cnt %u g2b_cnt %u\n",
     VAR_5, VAR_7, VAR_9, VAR_10);
    VAR_11 = 0;
   }
   if (VAR_9 > 1) {
    FUNC_0(&VAR_3->osm->log, VAR_1,
     "ERR 4E35: disjoint failures in "
     "y ring at x=%d  z=%d\n", VAR_5, VAR_7);
    VAR_11 = 0;
   }
  }

 for (VAR_6 = 0; VAR_6 < (int)VAR_3->y_sz; VAR_6++)
  for (VAR_5 = 0; VAR_5 < (int)VAR_3->x_sz; VAR_5++) {
   VAR_9 = 0;
   VAR_10 = 0;
   for (VAR_7 = 0; VAR_7 < (int)VAR_3->z_sz; VAR_7++) {

    if (!VAR_3->sw[VAR_5][VAR_6][VAR_7])
     continue;

    if (!VAR_3->sw[VAR_5][VAR_6][VAR_7]->ptgrp[4].port_cnt)
     VAR_9++;
    if (!VAR_3->sw[VAR_5][VAR_6][VAR_7]->ptgrp[5].port_cnt)
     VAR_10++;
   }
   if (VAR_9 != VAR_10) {
    FUNC_0(&VAR_3->osm->log, VAR_1,
     "ERR 4E36: strange failures in "
     "z ring at x=%d  y=%d"
     " b2g_cnt %u g2b_cnt %u\n",
     VAR_5, VAR_6, VAR_9, VAR_10);
    VAR_11 = 0;
   }
   if (VAR_9 > 1) {
    FUNC_0(&VAR_3->osm->log, VAR_1,
     "ERR 4E37: disjoint failures in "
     "z ring at x=%d  y=%d\n", VAR_5, VAR_6);
    VAR_11 = 0;
   }
  }

 if (VAR_3->flags & VAR_0) {
  FUNC_0(&VAR_3->osm->log, VAR_1,
   "ERR 4E38: missing switch topology "
   "==> message deadlock!\n");
  VAR_11 = 0;
 }
 return VAR_11;
}
