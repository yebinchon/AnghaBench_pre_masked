
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct evbuffer {int dummy; } ;
struct bufferevent {struct evbuffer* input; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct bufferevent*,int ) ;
 int FUNC_2 (struct bufferevent*,struct evbuffer*) ;
 int FUNC_3 (struct evbuffer*) ;
 int FUNC_4 (struct evbuffer*) ;
 struct evbuffer* FUNC_5 () ;
 int VAR_1 ;

__attribute__((used)) static void
FUNC_6(struct bufferevent *VAR_2, void *VAR_3)
{
 if (FUNC_4(VAR_2->input) == 8333) {
  struct evbuffer *VAR_4 = FUNC_5();
  FUNC_0(VAR_4 != ((void*)0));


  FUNC_2(VAR_2, VAR_4);

  FUNC_1(VAR_2, VAR_0);

  if (FUNC_4(VAR_4) == 8333) {
   VAR_1++;
  }

  FUNC_3(VAR_4);
 }
}
