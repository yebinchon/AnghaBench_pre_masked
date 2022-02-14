
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int options; } ;
struct bufferevent_openssl {int ssl; int underlying; TYPE_1__ bev; } ;
struct bufferevent {int dummy; } ;
typedef scalar_t__ evutil_socket_t ;
typedef int BIO ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int *,int *) ;
 int FUNC_1 (int ) ;
 int * FUNC_2 (int ) ;
 int FUNC_3 (scalar_t__) ;
 struct bufferevent_openssl* FUNC_4 (struct bufferevent*) ;

__attribute__((used)) static void
FUNC_5(struct bufferevent *VAR_1)
{
 struct bufferevent_openssl *VAR_2 = FUNC_4(VAR_1);

 if (VAR_2->bev.options & VAR_0) {
  if (! VAR_2->underlying) {
   evutil_socket_t VAR_3 = -1;
   BIO *VAR_4 = FUNC_2(VAR_2->ssl);
   if (VAR_4)
    VAR_3 = FUNC_0(VAR_4, ((void*)0));
   if (VAR_3 >= 0)
    FUNC_3(VAR_3);
  }
  FUNC_1(VAR_2->ssl);
 }
}
