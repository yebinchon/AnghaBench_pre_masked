
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int bev; } ;
struct bufferevent_openssl {TYPE_1__ bev; } ;
typedef int evutil_socket_t ;


 int VAR_0 ;
 short VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,int ,int ) ;
 int FUNC_3 (struct bufferevent_openssl*) ;

__attribute__((used)) static void
FUNC_4(evutil_socket_t VAR_2, short VAR_3, void *VAR_4)
{
 struct bufferevent_openssl *VAR_5 = VAR_4;

 FUNC_1(&VAR_5->bev.bev);
 if (VAR_3 & VAR_1) {
  FUNC_2(&VAR_5->bev.bev, VAR_0, 0);
 } else
  FUNC_3(VAR_5);
 FUNC_0(&VAR_5->bev.bev);
}
