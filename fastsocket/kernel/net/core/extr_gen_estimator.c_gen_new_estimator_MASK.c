
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_3__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct nlattr {int dummy; } ;
struct gnet_stats_rate_est {int bps; int pps; } ;
struct gnet_stats_basic_packed {int packets; int bytes; } ;
struct gnet_estimator {int interval; int ewma_log; } ;
struct gen_estimator {int avbps; int avpps; int list; int last_packets; int last_bytes; int ewma_log; int * stats_lock; struct gnet_stats_rate_est* rate_est; struct gnet_stats_basic_packed* bstats; } ;
typedef int spinlock_t ;
struct TYPE_4__ {int function; } ;
struct TYPE_5__ {int list; TYPE_1__ timer; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *) ;
 TYPE_3__* VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (struct gen_estimator*) ;
 scalar_t__ VAR_6 ;
 struct gen_estimator* FUNC_2 (int,int ) ;
 int FUNC_3 (int *,int *) ;
 scalar_t__ FUNC_4 (int *) ;
 int FUNC_5 (TYPE_1__*,scalar_t__) ;
 struct gnet_estimator* FUNC_6 (struct nlattr*) ;
 int FUNC_7 (struct nlattr*) ;
 int FUNC_8 (TYPE_1__*,int ,int) ;

int FUNC_9(struct gnet_stats_basic_packed *VAR_7,
        struct gnet_stats_rate_est *VAR_8,
        spinlock_t *VAR_9,
        struct nlattr *VAR_10)
{
 struct gen_estimator *VAR_11;
 struct gnet_estimator *VAR_12 = FUNC_6(VAR_10);
 int VAR_13;

 if (FUNC_7(VAR_10) < sizeof(*VAR_12))
  return -VAR_0;

 if (VAR_12->interval < -2 || VAR_12->interval > 3)
  return -VAR_0;

 VAR_11 = FUNC_2(sizeof(*VAR_11), VAR_2);
 if (VAR_11 == ((void*)0))
  return -VAR_1;

 VAR_13 = VAR_12->interval + 2;
 VAR_11->bstats = VAR_7;
 VAR_11->rate_est = VAR_8;
 VAR_11->stats_lock = VAR_9;
 VAR_11->ewma_log = VAR_12->ewma_log;
 VAR_11->last_bytes = VAR_7->bytes;
 VAR_11->avbps = VAR_8->bps<<5;
 VAR_11->last_packets = VAR_7->packets;
 VAR_11->avpps = VAR_8->pps<<10;

 if (!VAR_4[VAR_13].timer.function) {
  FUNC_0(&VAR_4[VAR_13].list);
  FUNC_8(&VAR_4[VAR_13].timer, VAR_5, VAR_13);
 }

 if (FUNC_4(&VAR_4[VAR_13].list))
  FUNC_5(&VAR_4[VAR_13].timer, VAR_6 + ((VAR_3/4) << VAR_13));

 FUNC_3(&VAR_11->list, &VAR_4[VAR_13].list);
 FUNC_1(VAR_11);

 return 0;
}
