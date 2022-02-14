
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct evbuffer {int dummy; } ;
struct bufferevent {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (char*) ;
 int FUNC_4 (struct bufferevent*,int ) ;
 int FUNC_5 (struct bufferevent*,int ) ;
 int FUNC_6 (struct bufferevent*) ;
 struct evbuffer* FUNC_7 (struct bufferevent*) ;
 int FUNC_8 (struct bufferevent*) ;
 int FUNC_9 (struct bufferevent*) ;
 int FUNC_10 (int ,char*,int) ;
 char* FUNC_11 (struct evbuffer*,int *,int ) ;
 int FUNC_12 (char*) ;
 int VAR_3 ;
 int FUNC_13 (void*,char*) ;
 int VAR_4 ;

__attribute__((used)) static void
FUNC_14(struct bufferevent *VAR_5, void *VAR_6)
{
 struct evbuffer *VAR_7 = FUNC_7(VAR_5);
 char *VAR_8;
 int VAR_9;
 VAR_8 = FUNC_11(VAR_7, ((void*)0), VAR_0);
 if (! VAR_8)
  return;
 VAR_9 = FUNC_3(VAR_8);
 if (VAR_9 <= 0)
  FUNC_2(("Bad number: %s", VAR_8));
 FUNC_12(VAR_8);
 FUNC_1(("The number was %d", VAR_9));
 if (VAR_9 == 1001) {
  ++VAR_4;
  FUNC_6(VAR_5);
  return;
 }
 if (!FUNC_13(VAR_6, "client") && VAR_9 == VAR_3) {
  FUNC_0(FUNC_9(VAR_5));
 }
 ++VAR_9;
 FUNC_10(FUNC_8(VAR_5),
     "%d\n", VAR_9);
 FUNC_1(("Done reading; now writing."));
 FUNC_5(VAR_5, VAR_2);
 FUNC_4(VAR_5, VAR_1);
}
