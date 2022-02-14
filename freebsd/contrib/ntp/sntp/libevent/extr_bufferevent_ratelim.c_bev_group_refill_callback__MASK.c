
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct timeval {int dummy; } ;
struct TYPE_2__ {scalar_t__ read_limit; scalar_t__ write_limit; } ;
struct bufferevent_rate_limit_group {scalar_t__ min_share; TYPE_1__ rate_limit; scalar_t__ write_suspended; scalar_t__ pending_unsuspend_write; scalar_t__ read_suspended; scalar_t__ pending_unsuspend_read; int rate_limit_cfg; int master_refill_event; } ;
typedef int evutil_socket_t ;


 int FUNC_0 (struct bufferevent_rate_limit_group*) ;
 int FUNC_1 (struct bufferevent_rate_limit_group*) ;
 int FUNC_2 (struct bufferevent_rate_limit_group*) ;
 int FUNC_3 (struct bufferevent_rate_limit_group*) ;
 unsigned int FUNC_4 (struct timeval*,int *) ;
 int FUNC_5 (TYPE_1__*,int *,unsigned int) ;
 int FUNC_6 (int ,struct timeval*) ;
 int FUNC_7 (int *) ;

__attribute__((used)) static void
FUNC_8(evutil_socket_t VAR_0, short VAR_1, void *VAR_2)
{
 struct bufferevent_rate_limit_group *VAR_3 = VAR_2;
 unsigned VAR_4;
 struct timeval VAR_5;

 FUNC_6(FUNC_7(&VAR_3->master_refill_event), &VAR_5);

 FUNC_0(VAR_3);

 VAR_4 = FUNC_4(&VAR_5, &VAR_3->rate_limit_cfg);
 FUNC_5(&VAR_3->rate_limit, &VAR_3->rate_limit_cfg, VAR_4);

 if (VAR_3->pending_unsuspend_read ||
     (VAR_3->read_suspended && (VAR_3->rate_limit.read_limit >= VAR_3->min_share))) {
  FUNC_2(VAR_3);
 }
 if (VAR_3->pending_unsuspend_write ||
     (VAR_3->write_suspended && (VAR_3->rate_limit.write_limit >= VAR_3->min_share))){
  FUNC_3(VAR_3);
 }






 FUNC_1(VAR_3);
}
