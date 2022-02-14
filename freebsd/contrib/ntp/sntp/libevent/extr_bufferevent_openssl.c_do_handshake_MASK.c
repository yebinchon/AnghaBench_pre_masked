
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int enabled; } ;
struct TYPE_4__ {TYPE_2__ bev; } ;
struct bufferevent_openssl {int state; int underlying; int ssl; TYPE_1__ bev; } ;


 int VAR_0 ;
 int VAR_1 ;



 int FUNC_0 (int ) ;


 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int) ;
 int FUNC_3 (TYPE_2__*,int ) ;
 int FUNC_4 (TYPE_2__*,int ,int ) ;
 int FUNC_5 (struct bufferevent_openssl*,int ,int,int) ;
 int FUNC_6 (struct bufferevent_openssl*) ;
 int FUNC_7 (int) ;
 int FUNC_8 (struct bufferevent_openssl*,int) ;
 int FUNC_9 (struct bufferevent_openssl*) ;
 int FUNC_10 (struct bufferevent_openssl*) ;
 int FUNC_11 (struct bufferevent_openssl*) ;
 int FUNC_12 (struct bufferevent_openssl*) ;

__attribute__((used)) static int
FUNC_13(struct bufferevent_openssl *VAR_2)
{
 int VAR_3;

 switch (VAR_2->state) {
 default:
 case 130:
  FUNC_0(0);
  return -1;
 case 131:
 case 132:
  VAR_3 = FUNC_1(VAR_2->ssl);
  break;
 }
 FUNC_6(VAR_2);

 if (VAR_3==1) {

  VAR_2->state = 130;
  FUNC_8(VAR_2, -1);

  FUNC_3(&VAR_2->bev.bev, VAR_2->bev.bev.enabled);
  FUNC_4(&VAR_2->bev.bev,
      VAR_0, 0);
  return 1;
 } else {
  int VAR_4 = FUNC_2(VAR_2->ssl, VAR_3);
  FUNC_7(VAR_4);
  switch (VAR_4) {
  case 128:
   if (!VAR_2->underlying) {
    FUNC_11(VAR_2);
    return FUNC_10(VAR_2);
   }
   return 0;
  case 129:
   if (!VAR_2->underlying) {
    FUNC_12(VAR_2);
    return FUNC_9(VAR_2);
   }
   return 0;
  default:
   FUNC_5(VAR_2, VAR_1, VAR_4, VAR_3);
   return -1;
  }
 }
}
