
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


union bufferevent_ctrl_data {TYPE_2__* ptr; } ;
struct bufferevent_filtered {TYPE_2__* underlying; } ;
struct bufferevent {int dummy; } ;
typedef enum bufferevent_ctrl_op { ____Placeholder_bufferevent_ctrl_op } bufferevent_ctrl_op ;
struct TYPE_4__ {TYPE_1__* be_ops; } ;
struct TYPE_3__ {int (* ctrl ) (TYPE_2__*,int,union bufferevent_ctrl_data*) ;} ;






 int FUNC_0 (TYPE_2__*,int,union bufferevent_ctrl_data*) ;
 struct bufferevent_filtered* FUNC_1 (struct bufferevent*) ;

__attribute__((used)) static int
FUNC_2(struct bufferevent *VAR_0, enum bufferevent_ctrl_op VAR_1,
    union bufferevent_ctrl_data *VAR_2)
{
 struct bufferevent_filtered *VAR_3;
 switch (VAR_1) {
 case 129:
  VAR_3 = FUNC_1(VAR_0);
  VAR_2->ptr = VAR_3->underlying;
  return 0;
 case 128:
  VAR_3 = FUNC_1(VAR_0);

  if (VAR_3->underlying &&
   VAR_3->underlying->be_ops &&
   VAR_3->underlying->be_ops->ctrl) {
      return (VAR_3->underlying->be_ops->ctrl)(VAR_3->underlying, VAR_1, VAR_2);
  }

 case 130:
 case 131:
 default:
  return -1;
 }

 return -1;
}
