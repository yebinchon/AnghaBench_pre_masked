
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct link {int dummy; } ;
struct fabric {size_t link_cnt; size_t link_cnt_max; struct link** link; TYPE_1__* osm; } ;
struct TYPE_2__ {int log; } ;


 int FUNC_0 (int *,int ,char*,int ) ;
 int VAR_0 ;
 struct link* FUNC_1 (int,int) ;
 int VAR_1 ;
 int FUNC_2 (struct link**,int ,int) ;
 void* FUNC_3 (struct link**,unsigned int) ;
 int FUNC_4 (int ) ;

__attribute__((used)) static
struct link *FUNC_5(struct fabric *VAR_2)
{
 unsigned VAR_3;
 struct link *VAR_4 = ((void*)0);
 void *VAR_5;

 if (VAR_2->link_cnt >= VAR_2->link_cnt_max) {

  VAR_3 = 16 + 5 * VAR_2->link_cnt_max / 4;
  VAR_5 = FUNC_3(VAR_2->link, VAR_3 * sizeof(*VAR_2->link));
  if (!VAR_5) {
   FUNC_0(&VAR_2->osm->log, VAR_0,
    "ERR 4E04: realloc: %s\n", FUNC_4(VAR_1));
   goto out;
  }
  VAR_2->link = VAR_5;
  VAR_2->link_cnt_max = VAR_3;
  FUNC_2(&VAR_2->link[VAR_2->link_cnt], 0,
         (VAR_2->link_cnt_max - VAR_2->link_cnt) * sizeof(*VAR_2->link));
 }
 VAR_4 = FUNC_1(1, sizeof(*VAR_4));
 if (!VAR_4) {
  FUNC_0(&VAR_2->osm->log, VAR_0,
   "ERR 4E05: calloc: %s\n", FUNC_4(VAR_1));
  goto out;
 }
 VAR_2->link[VAR_2->link_cnt++] = VAR_4;
out:
 return VAR_4;
}
