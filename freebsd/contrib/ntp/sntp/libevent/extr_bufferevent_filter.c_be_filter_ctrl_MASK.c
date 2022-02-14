
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






union bufferevent_ctrl_data {int ptr; } ;
struct bufferevent_filtered {int underlying; } ;
struct bufferevent {int dummy; } ;
typedef enum bufferevent_ctrl_op { ____Placeholder_bufferevent_ctrl_op } bufferevent_ctrl_op ;






 struct bufferevent_filtered* FUNC_0 (struct bufferevent*) ;

__attribute__((used)) static int
FUNC_1(struct bufferevent *VAR_0, enum bufferevent_ctrl_op VAR_1,
    union bufferevent_ctrl_data *VAR_2)
{
 struct bufferevent_filtered *VAR_3;
 switch (VAR_1) {
 case 129:
  VAR_3 = FUNC_0(VAR_0);
  VAR_2->ptr = VAR_3->underlying;
  return 0;
 case 130:
 case 128:
 case 131:
 default:
  return -1;
 }
}
