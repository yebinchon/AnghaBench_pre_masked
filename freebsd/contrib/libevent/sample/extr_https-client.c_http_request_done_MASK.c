
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct evhttp_request {int dummy; } ;
struct bufferevent {int dummy; } ;
typedef int buffer ;


 int FUNC_0 (unsigned long,char*,int) ;
 int FUNC_1 () ;
 unsigned long FUNC_2 (struct bufferevent*) ;
 int FUNC_3 (int ,char*,int) ;
 int FUNC_4 (struct evhttp_request*) ;
 int FUNC_5 (struct evhttp_request*) ;
 char* FUNC_6 (struct evhttp_request*) ;
 char* FUNC_7 (int) ;
 int FUNC_8 (int ,char*,...) ;
 int FUNC_9 (char*,int,int,int ) ;
 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static void
FUNC_10(struct evhttp_request *VAR_2, void *VAR_3)
{
 char VAR_4[256];
 int VAR_5;

 if (VAR_2 == ((void*)0)) {



  struct bufferevent *VAR_6 = (struct bufferevent *) VAR_3;
  unsigned long VAR_7;
  int VAR_8 = 0;
  int VAR_9 = FUNC_1();
  FUNC_8(VAR_0, "some request failed - no idea which one though!\n");


  while ((VAR_7 = FUNC_2(VAR_6))) {
   FUNC_0(VAR_7, VAR_4, sizeof(VAR_4));
   FUNC_8(VAR_0, "%s\n", VAR_4);
   VAR_8 = 1;
  }


  if (! VAR_8)
   FUNC_8(VAR_0, "socket error = %s (%d)\n",
    FUNC_7(VAR_9),
    VAR_9);
  return;
 }

 FUNC_8(VAR_0, "Response line: %d %s\n",
     FUNC_5(VAR_2),
     FUNC_6(VAR_2));

 while ((VAR_5 = FUNC_3(FUNC_4(VAR_2),
      VAR_4, sizeof(VAR_4)))
        > 0) {


  FUNC_9(VAR_4, VAR_5, 1, VAR_1);
 }
}
