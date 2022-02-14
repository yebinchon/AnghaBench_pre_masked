
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bufferevent_pair {int partner; } ;
struct bufferevent {int dummy; } ;
typedef enum bufferevent_flush_mode { ____Placeholder_bufferevent_flush_mode } bufferevent_flush_mode ;


 short VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 short VAR_3 ;
 short VAR_4 ;
 int FUNC_0 (struct bufferevent*,struct bufferevent*,int) ;
 int FUNC_1 (struct bufferevent*,short,int ) ;
 int FUNC_2 (struct bufferevent*) ;
 struct bufferevent* FUNC_3 (int ) ;
 int FUNC_4 (struct bufferevent*) ;
 struct bufferevent_pair* FUNC_5 (struct bufferevent*) ;

__attribute__((used)) static int
FUNC_6(struct bufferevent *VAR_5, short VAR_6,
    enum bufferevent_flush_mode VAR_7)
{
 struct bufferevent_pair *VAR_8 = FUNC_5(VAR_5);
 struct bufferevent *VAR_9;
 FUNC_4(VAR_5);
 if (!VAR_8->partner)
  return -1;

 VAR_9 = FUNC_3(VAR_8->partner);

 if (VAR_7 == VAR_2)
  return 0;

 if ((VAR_6 & VAR_3) != 0)
  FUNC_0(VAR_9, VAR_5, 1);

 if ((VAR_6 & VAR_4) != 0)
  FUNC_0(VAR_5, VAR_9, 1);

 if (VAR_7 == VAR_1) {
  FUNC_1(VAR_9, VAR_6|VAR_0, 0);
 }
 FUNC_2(VAR_5);
 return 0;
}
