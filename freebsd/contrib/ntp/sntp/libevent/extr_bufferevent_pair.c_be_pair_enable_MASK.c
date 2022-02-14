
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bufferevent_pair {struct bufferevent_pair* partner; } ;
struct bufferevent {int output; } ;


 int FUNC_0 (struct bufferevent*) ;
 int FUNC_1 (struct bufferevent*) ;
 short VAR_0 ;
 short VAR_1 ;
 int FUNC_2 (struct bufferevent*,struct bufferevent*,int ) ;
 scalar_t__ FUNC_3 (struct bufferevent_pair*,struct bufferevent_pair*) ;
 int FUNC_4 (struct bufferevent*) ;
 struct bufferevent* FUNC_5 (struct bufferevent_pair*) ;
 scalar_t__ FUNC_6 (int ) ;
 int FUNC_7 (struct bufferevent*) ;
 struct bufferevent_pair* FUNC_8 (struct bufferevent*) ;

__attribute__((used)) static int
FUNC_9(struct bufferevent *VAR_2, short VAR_3)
{
 struct bufferevent_pair *VAR_4 = FUNC_8(VAR_2);
 struct bufferevent_pair *VAR_5 = VAR_4->partner;

 FUNC_7(VAR_2);

 if (VAR_3 & VAR_0) {
  FUNC_0(VAR_2);
 }
 if ((VAR_3 & VAR_1) && FUNC_6(VAR_2->output))
  FUNC_1(VAR_2);


 if ((VAR_3 & VAR_0) && VAR_5 &&
     FUNC_3(VAR_5, VAR_4)) {
  FUNC_2(FUNC_5(VAR_5), VAR_2, 0);
 }

 if ((VAR_3 & VAR_1) && VAR_5 &&
     FUNC_3(VAR_4, VAR_5)) {
  FUNC_2(VAR_2, FUNC_5(VAR_5), 0);
 }
 FUNC_4(VAR_2);
 return 0;
}
