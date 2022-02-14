
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct g_rr_queue {int q_seekdist; int q_thinktime; } ;
struct bio {scalar_t__ bio_cmd; } ;
struct TYPE_2__ {int w_anticipate; int wait_ms; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (int *) ;
 int FUNC_2 (int *,int) ;
 TYPE_1__ VAR_1 ;

__attribute__((used)) static inline int
FUNC_3(struct g_rr_queue *VAR_2, struct bio *VAR_3)
{
 int VAR_4 = FUNC_2(&VAR_1.wait_ms, 2);

 if (!VAR_1.w_anticipate && (VAR_3->bio_cmd == VAR_0))
  return (0);

 if (FUNC_1(&VAR_2->q_thinktime) &&
     FUNC_0(&VAR_2->q_thinktime) > VAR_4)
  return (0);

 if (FUNC_1(&VAR_2->q_seekdist) &&
     FUNC_0(&VAR_2->q_seekdist) > 8192)
  return (0);

 return (1);
}
