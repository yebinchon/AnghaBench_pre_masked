
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct evhttp_connection {int fd; int state; int bufev; int closecb_arg; int (* closecb ) (struct evhttp_connection*,int ) ;} ;
struct evbuffer {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,int) ;
 struct evbuffer* FUNC_1 (int ) ;
 struct evbuffer* FUNC_2 (int ) ;
 int FUNC_3 (int ,int) ;
 int FUNC_4 (struct evbuffer*,int ) ;
 int FUNC_5 (struct evbuffer*) ;
 scalar_t__ FUNC_6 (struct evhttp_connection*) ;
 int FUNC_7 (int) ;
 int FUNC_8 (int,int ) ;
 int FUNC_9 (struct evhttp_connection*,int ) ;

void
FUNC_10(struct evhttp_connection *VAR_4)
{
 struct evbuffer *VAR_5;
 FUNC_0(VAR_4->bufev, VAR_2|VAR_3);

 if (VAR_4->fd != -1) {

  if (FUNC_6(VAR_4) && VAR_4->closecb != ((void*)0))
   (*VAR_4->closecb)(VAR_4, VAR_4->closecb_arg);

  FUNC_8(VAR_4->fd, VAR_1);
  FUNC_7(VAR_4->fd);
  FUNC_3(VAR_4->bufev, -1);
  VAR_4->fd = -1;
 }


 VAR_5 = FUNC_2(VAR_4->bufev);
 FUNC_4(VAR_5, FUNC_5(VAR_5));
 VAR_5 = FUNC_1(VAR_4->bufev);
 FUNC_4(VAR_5, FUNC_5(VAR_5));

 VAR_4->state = VAR_0;
}
