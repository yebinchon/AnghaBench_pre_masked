
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bufferevent_pair {int partner; } ;
struct bufferevent {int dummy; } ;
typedef enum bufferevent_flush_mode { ____Placeholder_bufferevent_flush_mode } bufferevent_flush_mode ;


 short VAR_0 ;
 short VAR_1 ;
 short VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 short VAR_5 ;
 short VAR_6 ;
 int FUNC_0 (struct bufferevent*,struct bufferevent*,int) ;
 int FUNC_1 (struct bufferevent*,short,int ) ;
 int FUNC_2 (struct bufferevent*) ;
 struct bufferevent* FUNC_3 (int ) ;
 int FUNC_4 (struct bufferevent*) ;
 struct bufferevent_pair* FUNC_5 (struct bufferevent*) ;

__attribute__((used)) static int
FUNC_6(struct bufferevent *VAR_7, short VAR_8,
    enum bufferevent_flush_mode VAR_9)
{
 struct bufferevent_pair *VAR_10 = FUNC_5(VAR_7);
 struct bufferevent *VAR_11;

 if (!VAR_10->partner)
  return -1;

 if (VAR_9 == VAR_4)
  return 0;

 FUNC_4(VAR_7);

 VAR_11 = FUNC_3(VAR_10->partner);

 if ((VAR_8 & VAR_5) != 0)
  FUNC_0(VAR_11, VAR_7, 1);

 if ((VAR_8 & VAR_6) != 0)
  FUNC_0(VAR_7, VAR_11, 1);

 if (VAR_9 == VAR_3) {
  short VAR_12 = VAR_0;
  if (VAR_8 & VAR_5)
   VAR_12 |= VAR_2;
  if (VAR_8 & VAR_6)
   VAR_12 |= VAR_1;
  FUNC_1(VAR_11, VAR_12, 0);
 }
 FUNC_2(VAR_7);
 return 0;
}
