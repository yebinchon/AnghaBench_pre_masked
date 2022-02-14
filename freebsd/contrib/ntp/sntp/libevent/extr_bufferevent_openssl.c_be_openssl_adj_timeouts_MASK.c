
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bufferevent_openssl {scalar_t__ underlying; } ;
struct bufferevent {int ev_write; int timeout_write; int ev_read; int timeout_read; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int *) ;
 int FUNC_1 (struct bufferevent*) ;
 scalar_t__ FUNC_2 (int *,int ,int *) ;
 int FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (int *) ;
 struct bufferevent_openssl* FUNC_5 (struct bufferevent*) ;

__attribute__((used)) static int
FUNC_6(struct bufferevent *VAR_2)
{
 struct bufferevent_openssl *VAR_3 = FUNC_5(VAR_2);

 if (VAR_3->underlying) {
  return FUNC_1(VAR_2);
 } else {
  int VAR_4=0, VAR_5=0;
  if (FUNC_2(&VAR_2->ev_read, VAR_0, ((void*)0))) {
   if (FUNC_4(&VAR_2->timeout_read)) {
    VAR_4 = FUNC_0(&VAR_2->ev_read, &VAR_2->timeout_read);
   } else {
    FUNC_3(&VAR_2->ev_read);
   }
  }
  if (FUNC_2(&VAR_2->ev_write, VAR_1, ((void*)0))) {
   if (FUNC_4(&VAR_2->timeout_write)) {
    VAR_5 = FUNC_0(&VAR_2->ev_write, &VAR_2->timeout_write);
   } else {
    FUNC_3(&VAR_2->ev_write);
   }
  }

  return (VAR_4<0 || VAR_5<0) ? -1 : 0;
 }
}
