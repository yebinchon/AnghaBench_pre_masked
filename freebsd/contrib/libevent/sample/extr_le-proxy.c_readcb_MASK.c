
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct evbuffer {int dummy; } ;
struct bufferevent {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct bufferevent*,int ) ;
 struct evbuffer* FUNC_1 (struct bufferevent*) ;
 struct evbuffer* FUNC_2 (struct bufferevent*) ;
 int FUNC_3 (struct bufferevent*,void (*) (struct bufferevent*,void*),int ,int ,struct bufferevent*) ;
 int FUNC_4 (struct bufferevent*,int ,int,int) ;
 int VAR_3 ;
 int FUNC_5 (struct evbuffer*,struct evbuffer*) ;
 int FUNC_6 (struct evbuffer*,size_t) ;
 int FUNC_7 (struct evbuffer*) ;
 int VAR_4 ;

__attribute__((used)) static void
FUNC_8(struct bufferevent *VAR_5, void *VAR_6)
{
 struct bufferevent *VAR_7 = VAR_6;
 struct evbuffer *VAR_8, *VAR_9;
 size_t VAR_10;
 VAR_8 = FUNC_1(VAR_5);
 VAR_10 = FUNC_7(VAR_8);
 if (!VAR_7) {
  FUNC_6(VAR_8, VAR_10);
  return;
 }
 VAR_9 = FUNC_2(VAR_7);
 FUNC_5(VAR_9, VAR_8);

 if (FUNC_7(VAR_9) >= VAR_2) {



  FUNC_3(VAR_7, FUNC_8, VAR_3,
      VAR_4, VAR_5);
  FUNC_4(VAR_7, VAR_1, VAR_2/2,
      VAR_2);
  FUNC_0(VAR_5, VAR_0);
 }
}
