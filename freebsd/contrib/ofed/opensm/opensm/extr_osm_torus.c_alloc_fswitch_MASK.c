
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct fabric {size_t switch_cnt; size_t switch_cnt_max; struct f_switch** sw; TYPE_1__* osm; } ;
struct f_switch {unsigned int port_cnt; int n_id; void* port; } ;
typedef int guid_t ;
struct TYPE_2__ {int log; } ;


 int FUNC_0 (int *,int ,char*,int ) ;
 int VAR_0 ;
 struct f_switch* FUNC_1 (int,size_t) ;
 int VAR_1 ;
 int FUNC_2 (struct f_switch**,int ,int) ;
 void* FUNC_3 (struct f_switch**,unsigned int) ;
 int FUNC_4 (int ) ;

__attribute__((used)) static
struct f_switch *FUNC_5(struct fabric *VAR_2,
          guid_t VAR_3, unsigned VAR_4)
{
 size_t VAR_5;
 unsigned VAR_6;
 struct f_switch *VAR_7 = ((void*)0);
 void *VAR_8;

 if (VAR_2->switch_cnt >= VAR_2->switch_cnt_max) {

  VAR_6 = 16 + 5 * VAR_2->switch_cnt_max / 4;
  VAR_8 = FUNC_3(VAR_2->sw, VAR_6 * sizeof(*VAR_2->sw));
  if (!VAR_8) {
   FUNC_0(&VAR_2->osm->log, VAR_0,
    "ERR 4E02: realloc: %s\n", FUNC_4(VAR_1));
   goto out;
  }
  VAR_2->sw = VAR_8;
  VAR_2->switch_cnt_max = VAR_6;
  FUNC_2(&VAR_2->sw[VAR_2->switch_cnt], 0,
         (VAR_2->switch_cnt_max - VAR_2->switch_cnt)*sizeof(*VAR_2->sw));
 }
 VAR_5 = sizeof(*VAR_7) + VAR_4 * sizeof(*VAR_7->port);
 VAR_7 = FUNC_1(1, VAR_5);
 if (!VAR_7) {
  FUNC_0(&VAR_2->osm->log, VAR_0,
   "ERR 4E03: calloc: %s\n", FUNC_4(VAR_1));
  goto out;
 }
 VAR_7->port = (void *)(VAR_7 + 1);
 VAR_7->n_id = VAR_3;
 VAR_7->port_cnt = VAR_4;
 VAR_2->sw[VAR_2->switch_cnt++] = VAR_7;
out:
 return VAR_7;
}
