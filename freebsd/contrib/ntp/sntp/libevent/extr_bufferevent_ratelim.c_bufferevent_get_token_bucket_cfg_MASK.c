
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef struct ev_token_bucket_cfg const ev_token_bucket_cfg ;
struct bufferevent_private {TYPE_1__* rate_limiting; } ;
struct bufferevent {int dummy; } ;
struct TYPE_2__ {struct ev_token_bucket_cfg const* cfg; } ;


 int FUNC_0 (struct bufferevent const*) ;
 int FUNC_1 (struct bufferevent const*) ;
 struct bufferevent_private* FUNC_2 (struct bufferevent const*) ;

const struct ev_token_bucket_cfg *
FUNC_3(const struct bufferevent *VAR_0) {
 struct bufferevent_private *VAR_1 = FUNC_2(VAR_0);
 struct ev_token_bucket_cfg *VAR_2;

 FUNC_0(VAR_0);

 if (VAR_1->rate_limiting) {
  VAR_2 = VAR_1->rate_limiting->cfg;
 } else {
  VAR_2 = ((void*)0);
 }

 FUNC_1(VAR_0);

 return VAR_2;
}
