
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct event_base {int dummy; } ;
struct bufferevent {int dummy; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct bufferevent*) ;
 struct event_base* FUNC_1 (struct bufferevent*) ;
 int FUNC_2 (struct bufferevent*,unsigned char*,int) ;
 int FUNC_3 (struct event_base*) ;
 int FUNC_4 (int) ;
 scalar_t__ VAR_1 ;
 int FUNC_5 (char*) ;
 int FUNC_6 (struct event_base*) ;

__attribute__((used)) static void
FUNC_7(struct bufferevent *VAR_2, void *VAR_3)
{
 unsigned char VAR_4;
 struct event_base *VAR_5 = FUNC_1(VAR_2);

 FUNC_2(VAR_2, &VAR_4, 1);
 if (VAR_4 != 'A') {
  FUNC_5("Incorrect data received!");
  FUNC_4(2);
 }
 FUNC_0(VAR_2);

 VAR_1++;
 if (VAR_1 == VAR_0) {
  FUNC_3(VAR_5);
 } else {
  FUNC_6(VAR_5);
 }
}
