
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






union bufferevent_ctrl_data {int fd; int ptr; } ;
struct bufferevent_openssl {int fd_is_set; int underlying; int state; int ssl; } ;
struct bufferevent {int ev_read; } ;
typedef enum bufferevent_ctrl_op { ____Placeholder_bufferevent_ctrl_op } bufferevent_ctrl_op ;
typedef int BIO ;






 int * FUNC_0 (int,int ) ;
 int VAR_0 ;
 int FUNC_1 (int ,int *,int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct bufferevent_openssl*,int) ;
 int FUNC_4 (struct bufferevent_openssl*,int) ;
 struct bufferevent_openssl* FUNC_5 (struct bufferevent*) ;

__attribute__((used)) static int
FUNC_6(struct bufferevent *VAR_1,
    enum bufferevent_ctrl_op VAR_2, union bufferevent_ctrl_data *VAR_3)
{
 struct bufferevent_openssl *VAR_4 = FUNC_5(VAR_1);
 switch (VAR_2) {
 case 128:
  if (VAR_4->underlying)
   return -1;
  {
   BIO *VAR_5;
   VAR_5 = FUNC_0(VAR_3->fd, 0);
   FUNC_1(VAR_4->ssl, VAR_5, VAR_5);
   VAR_4->fd_is_set = 1;
  }
  if (VAR_3->fd == -1)
   VAR_4->fd_is_set = 0;
  if (VAR_4->state == VAR_0)
   return FUNC_4(VAR_4, VAR_3->fd);
  else {
   return FUNC_3(VAR_4, VAR_3->fd);
  }
 case 130:
  if (VAR_4->underlying)
   return -1;
  if (!VAR_4->fd_is_set)
   return -1;
  VAR_3->fd = FUNC_2(&VAR_1->ev_read);
  return 0;
 case 129:
  if (!VAR_4->underlying)
   return -1;
  VAR_3->ptr = VAR_4->underlying;
  return 0;
 case 131:
 default:
  return -1;
 }
}
