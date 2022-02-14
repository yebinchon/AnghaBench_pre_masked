
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct torus {TYPE_2__* osm; int seed_cnt; TYPE_1__* seed; } ;
struct link {TYPE_3__* end; } ;
typedef void* guid_t ;
struct TYPE_6__ {int port; int * link; int * sw; void* n_id; void* type; } ;
struct TYPE_5__ {int log; } ;
struct TYPE_4__ {struct link zp_link; struct link zm_link; struct link yp_link; struct link ym_link; struct link xp_link; struct link xm_link; } ;


 int FUNC_0 (int *,int ,char*,int) ;
 int VAR_0 ;
 void* VAR_1 ;
 int FUNC_1 (struct torus*,void**,char const*) ;

__attribute__((used)) static
bool FUNC_2(int VAR_2, struct torus *VAR_3, const char *VAR_4)
{
 guid_t VAR_5, VAR_6;
 struct link *VAR_7;
 bool VAR_8 = 0;

 if (!FUNC_1(VAR_3, &VAR_5, VAR_4))
  goto out;

 if (!FUNC_1(VAR_3, &VAR_6, VAR_4))
  goto out;

 if (!VAR_3) {
  VAR_8 = 1;
  goto out;
 }

 switch (VAR_2) {
 case -1:
  VAR_7 = &VAR_3->seed[VAR_3->seed_cnt - 1].xm_link;
  break;
 case 1:
  VAR_7 = &VAR_3->seed[VAR_3->seed_cnt - 1].xp_link;
  break;
 case -2:
  VAR_7 = &VAR_3->seed[VAR_3->seed_cnt - 1].ym_link;
  break;
 case 2:
  VAR_7 = &VAR_3->seed[VAR_3->seed_cnt - 1].yp_link;
  break;
 case -3:
  VAR_7 = &VAR_3->seed[VAR_3->seed_cnt - 1].zm_link;
  break;
 case 3:
  VAR_7 = &VAR_3->seed[VAR_3->seed_cnt - 1].zp_link;
  break;
 default:
  FUNC_0(&VAR_3->osm->log, VAR_0,
   "ERR 4E0E: unknown link direction %d\n", VAR_2);
  goto out;
 }
 VAR_7->end[0].type = VAR_1;
 VAR_7->end[0].port = -1;
 VAR_7->end[0].n_id = VAR_5;
 VAR_7->end[0].sw = ((void*)0);
 VAR_7->end[0].link = ((void*)0);

 VAR_7->end[1].type = VAR_1;
 VAR_7->end[1].port = -1;
 VAR_7->end[1].n_id = VAR_6;
 VAR_7->end[1].sw = ((void*)0);
 VAR_7->end[1].link = ((void*)0);

 VAR_8 = 1;
out:
 return VAR_8;
}
