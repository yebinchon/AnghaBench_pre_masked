
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct evhttp_request {int flags; int cb_arg; int (* cb ) (struct evhttp_request*,int ) ;int output_headers; int input_headers; int * evcon; } ;
struct evhttp_connection {int flags; int requests; int state; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 struct evhttp_request* FUNC_0 (int *) ;
 int FUNC_1 (int *,struct evhttp_request*,int ) ;
 int FUNC_2 (struct evhttp_connection*) ;
 int FUNC_3 (struct evhttp_connection*) ;
 int FUNC_4 (struct evhttp_connection*) ;
 int FUNC_5 (struct evhttp_connection*) ;
 int FUNC_6 (struct evhttp_connection*) ;
 scalar_t__ FUNC_7 (int,int ) ;
 int FUNC_8 (struct evhttp_connection*) ;
 int FUNC_9 (struct evhttp_request*) ;
 int VAR_5 ;
 int FUNC_10 (struct evhttp_request*,int ) ;

__attribute__((used)) static void
FUNC_11(struct evhttp_connection *VAR_6)
{
 struct evhttp_request *VAR_7 = FUNC_0(&VAR_6->requests);
 int VAR_8 = VAR_6->flags & VAR_3;
 int VAR_9 = 0;

 if (VAR_8) {

  int VAR_10;
  FUNC_1(&VAR_6->requests, VAR_7, VAR_5);
  VAR_7->evcon = ((void*)0);

  VAR_6->state = VAR_0;

  VAR_10 =
      FUNC_7(VAR_7->flags, VAR_7->input_headers)||
      FUNC_7(VAR_7->flags, VAR_7->output_headers);


  if (VAR_10)
   FUNC_5(VAR_6);

  if (FUNC_0(&VAR_6->requests) != ((void*)0)) {




   if (!FUNC_2(VAR_6))
    FUNC_3(VAR_6);
   else
    FUNC_8(VAR_6);
  } else if (!VAR_10) {




   FUNC_6(VAR_6);
  } else if ((VAR_6->flags & VAR_2)) {




    VAR_9 = 1;
  }
 } else {




  VAR_6->state = VAR_1;
 }


 (*VAR_7->cb)(VAR_7, VAR_7->cb_arg);




 if (VAR_8 && ((VAR_7->flags & VAR_4) == 0)) {
  FUNC_9(VAR_7);
 }







 if (VAR_9 && FUNC_0(&VAR_6->requests) == ((void*)0)) {
  FUNC_4(VAR_6);
 }
}
