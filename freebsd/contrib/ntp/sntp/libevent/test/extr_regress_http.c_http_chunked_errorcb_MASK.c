
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct evhttp_request {int dummy; } ;
struct bufferevent {int dummy; } ;
typedef enum message_read_status { ____Placeholder_message_read_status } message_read_status ;


 int VAR_0 ;
 short VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct bufferevent*) ;
 int FUNC_1 (int ,int) ;
 scalar_t__ FUNC_2 (int ,int) ;
 char* FUNC_3 (int ,int *,int ) ;
 int FUNC_4 (void*,int *) ;
 char* FUNC_5 (int ,char*) ;
 int FUNC_6 (struct evhttp_request*,int ) ;
 int FUNC_7 (struct evhttp_request*,int ) ;
 int FUNC_8 (struct evhttp_request*) ;
 int FUNC_9 (struct evhttp_request*) ;
 struct evhttp_request* FUNC_10 (int *,int *) ;
 int FUNC_11 (void*) ;
 scalar_t__ FUNC_12 (char const*,char*) ;
 scalar_t__ FUNC_13 (char*,char*,int) ;
 int VAR_3 ;

__attribute__((used)) static void
FUNC_14(struct bufferevent *VAR_4, short VAR_5, void *VAR_6)
{
 struct evhttp_request *VAR_7 = ((void*)0);

 if (!VAR_3)
  goto out;

 VAR_3 = -1;

 if ((VAR_5 & VAR_1) != 0) {
  const char *VAR_8;
  enum message_read_status VAR_9;
  VAR_7 = FUNC_10(((void*)0), ((void*)0));


  VAR_9 = FUNC_6(VAR_7, FUNC_0(VAR_4));
  if (VAR_9 != VAR_0)
   goto out;

  VAR_9 = FUNC_7(VAR_7, FUNC_0(VAR_4));
  if (VAR_9 != VAR_0)
   goto out;

  VAR_8 = FUNC_5(FUNC_9(VAR_7), "Transfer-Encoding");
  if (VAR_8 == ((void*)0) || FUNC_12(VAR_8, "chunked"))
   goto out;

  VAR_8 = FUNC_5(FUNC_9(VAR_7), "Connection");
  if (VAR_8 == ((void*)0) || FUNC_12(VAR_8, "close"))
   goto out;

  VAR_8 = FUNC_3(FUNC_0(VAR_4), ((void*)0), VAR_2);
  if (VAR_8 == ((void*)0))
   goto out;

  if (FUNC_12(VAR_8, "d")) {
   FUNC_11((void*)VAR_8);
   goto out;
  }
  FUNC_11((void*)VAR_8);

  if (FUNC_13((char *)FUNC_2(FUNC_0(VAR_4), 13),
   "This is funny", 13))
   goto out;

  FUNC_1(FUNC_0(VAR_4), 13 + 2);

  VAR_8 = FUNC_3(FUNC_0(VAR_4), ((void*)0), VAR_2);
  if (VAR_8 == ((void*)0))
   goto out;

  if (FUNC_12(VAR_8, "12"))
   goto out;
  FUNC_11((char *)VAR_8);

  if (FUNC_13((char *)FUNC_2(FUNC_0(VAR_4), 18),
   "but not hilarious.", 18))
   goto out;

  FUNC_1(FUNC_0(VAR_4), 18 + 2);

  VAR_8 = FUNC_3(FUNC_0(VAR_4), ((void*)0), VAR_2);
  if (VAR_8 == ((void*)0))
   goto out;

  if (FUNC_12(VAR_8, "8")) {
   FUNC_11((void*)VAR_8);
   goto out;
  }
  FUNC_11((char *)VAR_8);

  if (FUNC_13((char *)FUNC_2(FUNC_0(VAR_4), 8),
   "bwv 1052.", 8))
   goto out;

  FUNC_1(FUNC_0(VAR_4), 8 + 2);

  VAR_8 = FUNC_3(FUNC_0(VAR_4), ((void*)0), VAR_2);
  if (VAR_8 == ((void*)0))
   goto out;

  if (FUNC_12(VAR_8, "0")) {
   FUNC_11((void*)VAR_8);
   goto out;
  }
  FUNC_11((void *)VAR_8);

  VAR_3 = 2;
 }

out:
 if (VAR_7)
  FUNC_8(VAR_7);

 FUNC_4(VAR_6, ((void*)0));
}
