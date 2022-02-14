
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct evhttp_request {int dummy; } ;
struct event_base {int dummy; } ;
struct bufferevent {int dummy; } ;
typedef enum message_read_status { ____Placeholder_message_read_status } message_read_status ;


 int VAR_0 ;
 char* VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct bufferevent*,int ) ;
 int FUNC_1 (struct bufferevent*) ;
 scalar_t__ FUNC_2 (int ,char const*) ;
 int FUNC_3 (struct event_base*,int *) ;
 int * FUNC_4 (int ,char*) ;
 int FUNC_5 (struct evhttp_request*,int ) ;
 int FUNC_6 (struct evhttp_request*,int ) ;
 int FUNC_7 (struct evhttp_request*) ;
 int FUNC_8 (struct evhttp_request*) ;
 struct evhttp_request* FUNC_9 (int *,int *) ;
 int FUNC_10 (int) ;
 struct event_base* VAR_3 ;
 int FUNC_11 (int ,char*) ;
 int VAR_4 ;
 int VAR_5 ;

__attribute__((used)) static void
FUNC_12(struct bufferevent *VAR_6, void *VAR_7)
{
 const char *VAR_8 = VAR_1;
 struct event_base *VAR_9 = VAR_7;

 if (FUNC_2(FUNC_1(VAR_6), VAR_8)) {
  struct evhttp_request *VAR_10 = FUNC_9(((void*)0), ((void*)0));
  enum message_read_status VAR_11;


  VAR_11 = FUNC_5(VAR_10, FUNC_1(VAR_6));
  if (VAR_11 != VAR_0)
   goto out;

  VAR_11 = FUNC_6(VAR_10, FUNC_1(VAR_6));
  if (VAR_11 != VAR_0)
   goto out;

  if (VAR_11 == 1 &&
      FUNC_4(FUNC_8(VAR_10),
   "Content-Type") != ((void*)0))
   VAR_5++;

  out:
  FUNC_7(VAR_10);
  FUNC_0(VAR_6, VAR_2);
  if (VAR_3)
   FUNC_3(VAR_3, ((void*)0));
  else if (VAR_9)
   FUNC_3(VAR_9, ((void*)0));
  else {
   FUNC_11(VAR_4, "No way to exit loop!\n");
   FUNC_10(1);
  }
 }
}
