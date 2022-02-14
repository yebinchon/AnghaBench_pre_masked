
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bufferevent_private {scalar_t__ refcnt; } ;
struct bufferevent_filtered {int dummy; } ;
struct bufferevent {int dummy; } ;


 int FUNC_0 (struct bufferevent*) ;
 int FUNC_1 (struct bufferevent*) ;
 struct bufferevent_private* FUNC_2 (struct bufferevent*) ;
 int FUNC_3 (int) ;
 int FUNC_4 (struct bufferevent*,short,int ) ;
 struct bufferevent* FUNC_5 (struct bufferevent_filtered*) ;

__attribute__((used)) static void
FUNC_6(struct bufferevent *VAR_0, short VAR_1, void *VAR_2)
{
 struct bufferevent_filtered *VAR_3 = VAR_2;
 struct bufferevent *VAR_4 = FUNC_5(VAR_3);
 struct bufferevent_private *VAR_5 = FUNC_2(VAR_4);

 FUNC_0(VAR_4);


 FUNC_3(VAR_5->refcnt >= 0);


 if (VAR_5->refcnt > 0) {


  FUNC_4(VAR_4, VAR_1, 0);
 }

 FUNC_1(VAR_4);
}
