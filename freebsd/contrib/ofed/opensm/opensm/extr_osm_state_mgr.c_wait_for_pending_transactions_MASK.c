
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {unsigned int qp0_mads_outstanding; int event; int mutex; int cond; } ;
typedef TYPE_1__ osm_stats_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int ,int ) ;
 int VAR_2 ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

int FUNC_4(osm_stats_t * VAR_3)
{






 while (1) {
  unsigned VAR_4 = VAR_3->qp0_mads_outstanding;
  if (!VAR_4 || VAR_2)
   break;
  FUNC_0(&VAR_3->event, VAR_0, VAR_1);
 }

 return VAR_2;
}
