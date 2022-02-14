
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct timeval {scalar_t__ tv_usec; scalar_t__ tv_sec; } ;
struct event_base {int dummy; } ;
struct ev_token_bucket_cfg {int tick_timeout; } ;
struct bufferevent_rate_limit_group {int weakrand_seed; int lock; int master_refill_event; int rate_limit; int members; int rate_limit_cfg; } ;
typedef int ev_uint32_t ;
typedef scalar_t__ ev_intptr_t ;


 int FUNC_0 (int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int *) ;
 int VAR_3 ;
 int FUNC_2 (struct bufferevent_rate_limit_group*,int) ;
 int FUNC_3 (struct timeval*,struct ev_token_bucket_cfg const*) ;
 int FUNC_4 (int *,struct ev_token_bucket_cfg const*,int ,int ) ;
 int FUNC_5 (int *,int *) ;
 int FUNC_6 (int *,struct event_base*,int,int,int ,struct bufferevent_rate_limit_group*) ;
 int FUNC_7 (struct event_base*,struct timeval*) ;
 int FUNC_8 (int *,int ) ;
 int FUNC_9 (int *,struct ev_token_bucket_cfg const*,int) ;
 struct bufferevent_rate_limit_group* FUNC_10 (int,int) ;

struct bufferevent_rate_limit_group *
FUNC_11(struct event_base *VAR_4,
    const struct ev_token_bucket_cfg *VAR_5)
{
 struct bufferevent_rate_limit_group *VAR_6;
 struct timeval VAR_7;
 ev_uint32_t VAR_8;

 FUNC_7(VAR_4, &VAR_7);
 VAR_8 = FUNC_3(&VAR_7, VAR_5);

 VAR_6 = FUNC_10(1, sizeof(struct bufferevent_rate_limit_group));
 if (!VAR_6)
  return ((void*)0);
 FUNC_9(&VAR_6->rate_limit_cfg, VAR_5, sizeof(VAR_6->rate_limit_cfg));
 FUNC_1(&VAR_6->members);

 FUNC_4(&VAR_6->rate_limit, VAR_5, VAR_8, 0);

 FUNC_6(&VAR_6->master_refill_event, VAR_4, -1, VAR_2|VAR_1,
     VAR_3, VAR_6);

 FUNC_5(&VAR_6->master_refill_event, &VAR_5->tick_timeout);

 FUNC_0(VAR_6->lock, VAR_0);

 FUNC_2(VAR_6, 64);

 FUNC_8(&VAR_6->weakrand_seed,
     (ev_uint32_t) ((VAR_7.tv_sec + VAR_7.tv_usec) + (ev_intptr_t)VAR_6));

 return VAR_6;
}
