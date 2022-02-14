
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct evhttp_connection {int fd; int state; int flags; int bufev; int closecb_arg; int (* closecb ) (struct evhttp_connection*,int ) ;} ;
struct evbuffer {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int ,int) ;
 struct evbuffer* FUNC_2 (int ) ;
 struct evbuffer* FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ,int) ;
 int FUNC_6 (struct evbuffer*,int) ;
 scalar_t__ FUNC_7 (struct evhttp_connection*) ;
 int FUNC_8 (int) ;
 int FUNC_9 (int,int ) ;
 int FUNC_10 (struct evhttp_connection*,int ) ;

void
FUNC_11(struct evhttp_connection *VAR_5)
{
 struct evbuffer *VAR_6;
 int VAR_7;
 FUNC_1(VAR_5->bufev, VAR_3|VAR_4);

 if (VAR_5->fd == -1)
  VAR_5->fd = FUNC_4(VAR_5->bufev);

 if (VAR_5->fd != -1) {

  if (FUNC_7(VAR_5) && VAR_5->closecb != ((void*)0))
   (*VAR_5->closecb)(VAR_5, VAR_5->closecb_arg);

  FUNC_9(VAR_5->fd, VAR_2);
  FUNC_8(VAR_5->fd);
  VAR_5->fd = -1;
 }
 FUNC_5(VAR_5->bufev, -1);


 VAR_6 = FUNC_3(VAR_5->bufev);
 VAR_7 = FUNC_6(VAR_6, -1);
 FUNC_0(!VAR_7 && "drain output");
 VAR_6 = FUNC_2(VAR_5->bufev);
 VAR_7 = FUNC_6(VAR_6, -1);
 FUNC_0(!VAR_7 && "drain input");

 VAR_5->flags &= ~VAR_1;

 VAR_5->state = VAR_0;
}
