
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct bufferevent_private {int write_suspended; TYPE_3__* rate_limiting; } ;
struct bufferevent {int dummy; } ;
typedef scalar_t__ ev_ssize_t ;
struct TYPE_4__ {scalar_t__ read_limit; } ;
struct TYPE_6__ {int refill_bucket_event; TYPE_2__* cfg; TYPE_1__ limit; } ;
struct TYPE_5__ {int tick_timeout; } ;


 int FUNC_0 (struct bufferevent*) ;
 int VAR_0 ;
 int FUNC_1 (struct bufferevent*) ;
 struct bufferevent_private* FUNC_2 (struct bufferevent*) ;
 int FUNC_3 (int) ;
 int FUNC_4 (struct bufferevent*,int) ;
 int FUNC_5 (struct bufferevent*,int) ;
 scalar_t__ FUNC_6 (int *,int *) ;
 int FUNC_7 (int *) ;

int
FUNC_8(struct bufferevent *VAR_1, ev_ssize_t VAR_2)
{
 int VAR_3 = 0;
 ev_ssize_t VAR_4, VAR_5;
 struct bufferevent_private *VAR_6;
 FUNC_0(VAR_1);
 VAR_6 = FUNC_2(VAR_1);
 FUNC_3(VAR_6->rate_limiting && VAR_6->rate_limiting->cfg);
 VAR_4 = VAR_6->rate_limiting->limit.read_limit;

 VAR_5 = (VAR_6->rate_limiting->limit.read_limit -= VAR_2);
 if (VAR_4 > 0 && VAR_5 <= 0) {
  FUNC_4(VAR_1, VAR_0);
  if (FUNC_6(&VAR_6->rate_limiting->refill_bucket_event,
   &VAR_6->rate_limiting->cfg->tick_timeout) < 0)
   VAR_3 = -1;
 } else if (VAR_4 <= 0 && VAR_5 > 0) {
  if (!(VAR_6->write_suspended & VAR_0))
   FUNC_7(&VAR_6->rate_limiting->refill_bucket_event);
  FUNC_5(VAR_1, VAR_0);
 }

 FUNC_1(VAR_1);
 return VAR_3;
}
