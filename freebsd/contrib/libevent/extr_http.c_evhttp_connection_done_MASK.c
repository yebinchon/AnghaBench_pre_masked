
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct evhttp_request {int cb_arg; int (* cb ) (struct evhttp_request*,int ) ;int * evcon; } ;
struct evhttp_connection {int flags; int requests; int state; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct evhttp_request* FUNC_0 (int *) ;
 int FUNC_1 (int *,struct evhttp_request*,int ) ;
 int FUNC_2 (struct evhttp_connection*) ;
 int FUNC_3 (struct evhttp_connection*) ;
 int FUNC_4 (struct evhttp_connection*) ;
 int FUNC_5 (struct evhttp_connection*) ;
 int FUNC_6 (struct evhttp_connection*) ;
 int FUNC_7 (struct evhttp_request*) ;
 int FUNC_8 (struct evhttp_connection*) ;
 int FUNC_9 (struct evhttp_request*) ;
 int VAR_4 ;
 int FUNC_10 (struct evhttp_request*,int ) ;

__attribute__((used)) static void
FUNC_11(struct evhttp_connection *VAR_5)
{
 struct evhttp_request *VAR_6 = FUNC_0(&VAR_5->requests);
 int VAR_7 = VAR_5->flags & VAR_3;
 int VAR_8 = 0;

 if (VAR_7) {

  int VAR_9 = FUNC_7(VAR_6);
  FUNC_1(&VAR_5->requests, VAR_6, VAR_4);
  VAR_6->evcon = ((void*)0);

  VAR_5->state = VAR_0;


  if (VAR_9)
   FUNC_5(VAR_5);

  if (FUNC_0(&VAR_5->requests) != ((void*)0)) {




   if (!FUNC_2(VAR_5))
    FUNC_3(VAR_5);
   else
    FUNC_8(VAR_5);
  } else if (!VAR_9) {




   FUNC_6(VAR_5);
  } else if ((VAR_5->flags & VAR_2)) {




    VAR_8 = 1;
  }
 } else {




  VAR_5->state = VAR_1;
 }


 (*VAR_6->cb)(VAR_6, VAR_6->cb_arg);


 if (VAR_7) {
  FUNC_9(VAR_6);
 }







 if (VAR_8 && FUNC_0(&VAR_5->requests) == ((void*)0)) {
  FUNC_4(VAR_5);
 }
}
