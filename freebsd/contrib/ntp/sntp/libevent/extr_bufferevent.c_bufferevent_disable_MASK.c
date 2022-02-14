
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct bufferevent {short enabled; TYPE_1__* be_ops; } ;
struct TYPE_2__ {scalar_t__ (* disable ) (struct bufferevent*,short) ;} ;


 int FUNC_0 (struct bufferevent*) ;
 int FUNC_1 (struct bufferevent*) ;
 scalar_t__ FUNC_2 (struct bufferevent*,short) ;

int
FUNC_3(struct bufferevent *VAR_0, short VAR_1)
{
 int VAR_2 = 0;

 FUNC_0(VAR_0);
 VAR_0->enabled &= ~VAR_1;

 if (VAR_0->be_ops->disable(VAR_0, VAR_1) < 0)
  VAR_2 = -1;

 FUNC_1(VAR_0);
 return VAR_2;
}
