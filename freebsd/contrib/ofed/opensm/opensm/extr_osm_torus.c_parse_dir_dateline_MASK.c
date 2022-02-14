
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct torus {int x_sz; int y_sz; int z_sz; TYPE_2__* osm; int seed_cnt; TYPE_1__* seed; } ;
struct TYPE_4__ {int log; } ;
struct TYPE_3__ {int x_dateline; int y_dateline; int z_dateline; } ;


 int FUNC_0 (int *,int ,char*,int,...) ;
 int VAR_0 ;
 char* FUNC_1 (int *,char const*) ;
 int FUNC_2 (char*,int *,int ) ;

__attribute__((used)) static
bool FUNC_3(int VAR_1, struct torus *VAR_2, const char *VAR_3)
{
 char *VAR_4;
 int *VAR_5, VAR_6;
 bool VAR_7 = 0;

 VAR_4 = FUNC_1(((void*)0), VAR_3);
 if (!VAR_4)
  goto out;

 if (!VAR_2) {
  VAR_7 = 1;
  goto out;
 }

 switch (VAR_1) {
 case 1:
  VAR_5 = &VAR_2->seed[VAR_2->seed_cnt - 1].x_dateline;
  VAR_6 = VAR_2->x_sz;
  break;
 case 2:
  VAR_5 = &VAR_2->seed[VAR_2->seed_cnt - 1].y_dateline;
  VAR_6 = VAR_2->y_sz;
  break;
 case 3:
  VAR_5 = &VAR_2->seed[VAR_2->seed_cnt - 1].z_dateline;
  VAR_6 = VAR_2->z_sz;
  break;
 default:
  FUNC_0(&VAR_2->osm->log, VAR_0,
   "ERR 4E0F: unknown dateline direction %d\n", VAR_1);
  goto out;
 }
 *VAR_5 = FUNC_2(VAR_4, ((void*)0), 0);

 if ((*VAR_5 < 0 && *VAR_5 <= -VAR_6) || *VAR_5 >= VAR_6)
  FUNC_0(&VAR_2->osm->log, VAR_0,
   "ERR 4E10: dateline value for coordinate direction %d "
   "must be %d < dl < %d\n",
   VAR_1, -VAR_6, VAR_6);
 else
  VAR_7 = 1;
out:
 return VAR_7;
}
