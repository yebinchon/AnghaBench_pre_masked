
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct timeval {int dummy; } ;
struct TYPE_4__ {int ev_base; } ;
struct bufferevent_private {TYPE_2__* rate_limiting; TYPE_1__ bev; } ;
struct TYPE_6__ {unsigned int last_updated; } ;
struct TYPE_5__ {int cfg; TYPE_3__ limit; } ;


 unsigned int FUNC_0 (struct timeval*,int ) ;
 int FUNC_1 (TYPE_3__*,int ,unsigned int) ;
 int FUNC_2 (int ,struct timeval*) ;

__attribute__((used)) static inline void
FUNC_3(struct bufferevent_private *VAR_0)
{

 struct timeval VAR_1;
 unsigned VAR_2;
 FUNC_2(VAR_0->bev.ev_base, &VAR_1);
 VAR_2 = FUNC_0(&VAR_1, VAR_0->rate_limiting->cfg);
 if (VAR_2 != VAR_0->rate_limiting->limit.last_updated)
  FUNC_1(&VAR_0->rate_limiting->limit,
      VAR_0->rate_limiting->cfg, VAR_2);
}
