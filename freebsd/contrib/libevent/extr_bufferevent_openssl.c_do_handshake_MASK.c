
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int enabled; int ev_read; } ;
struct TYPE_4__ {TYPE_2__ bev; } ;
struct bufferevent_openssl {int state; int ssl; TYPE_1__ bev; } ;


 int VAR_0 ;
 int VAR_1 ;



 int FUNC_0 () ;
 int FUNC_1 (int ) ;


 int FUNC_2 (int ) ;
 int FUNC_3 (int ,int) ;
 int FUNC_4 (TYPE_2__*,int ) ;
 int FUNC_5 (TYPE_2__*,int ,int ) ;
 int FUNC_6 (struct bufferevent_openssl*,int ,int,int) ;
 int FUNC_7 (struct bufferevent_openssl*) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int) ;
 int FUNC_10 (struct bufferevent_openssl*,int) ;
 int FUNC_11 (struct bufferevent_openssl*) ;
 int FUNC_12 (struct bufferevent_openssl*) ;
 int FUNC_13 (struct bufferevent_openssl*) ;
 int FUNC_14 (struct bufferevent_openssl*) ;

__attribute__((used)) static int
FUNC_15(struct bufferevent_openssl *VAR_2)
{
 int VAR_3;

 switch (VAR_2->state) {
 default:
 case 130:
  FUNC_1(0);
  return -1;
 case 131:
 case 132:
  FUNC_0();
  VAR_3 = FUNC_2(VAR_2->ssl);
  break;
 }
 FUNC_7(VAR_2);

 if (VAR_3==1) {
  int VAR_4 = FUNC_8(&VAR_2->bev.bev.ev_read);

  VAR_2->state = 130;
  FUNC_10(VAR_2, VAR_4);

  FUNC_4(&VAR_2->bev.bev, VAR_2->bev.bev.enabled);
  FUNC_5(&VAR_2->bev.bev,
      VAR_0, 0);
  return 1;
 } else {
  int VAR_5 = FUNC_3(VAR_2->ssl, VAR_3);
  FUNC_9(VAR_5);
  switch (VAR_5) {
  case 128:
   FUNC_13(VAR_2);
   return FUNC_12(VAR_2);
  case 129:
   FUNC_14(VAR_2);
   return FUNC_11(VAR_2);
  default:
   FUNC_6(VAR_2, VAR_1, VAR_5, VAR_3);
   return -1;
  }
 }
}
