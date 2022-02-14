
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef union bufferevent_ctrl_data {int dummy; } bufferevent_ctrl_data ;
struct bufferevent {TYPE_1__* be_ops; } ;
typedef int d ;
struct TYPE_2__ {int (* ctrl ) (struct bufferevent*,int ,union bufferevent_ctrl_data*) ;} ;


 int VAR_0 ;
 int FUNC_0 (struct bufferevent*) ;
 int FUNC_1 (struct bufferevent*) ;
 int FUNC_2 (union bufferevent_ctrl_data*,int ,int) ;
 int FUNC_3 (struct bufferevent*,int ,union bufferevent_ctrl_data*) ;

__attribute__((used)) static void
FUNC_4(struct bufferevent *VAR_1)
{
 union bufferevent_ctrl_data VAR_2;
 FUNC_2(&VAR_2, 0, sizeof(VAR_2));
 FUNC_0(VAR_1);
 if (VAR_1->be_ops->ctrl)
  VAR_1->be_ops->ctrl(VAR_1, VAR_0, &VAR_2);
 FUNC_1(VAR_1);
}
