
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int s_addr; } ;
struct sockaddr_storage {TYPE_1__ sin_addr; scalar_t__ sin_port; int sin_family; } ;
struct sockaddr_in {TYPE_1__ sin_addr; scalar_t__ sin_port; int sin_family; } ;
struct sockaddr {int dummy; } ;
struct event_base {int dummy; } ;
struct evdns_server_port {int dummy; } ;
struct evdns_base {int dummy; } ;
typedef int ss ;
typedef int sin ;
typedef scalar_t__ evutil_socket_t ;
typedef int ev_socklen_t ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (scalar_t__,struct sockaddr*,int) ;
 struct evdns_server_port* FUNC_1 (struct event_base*,scalar_t__,int ,int ,struct event_base*) ;
 int FUNC_2 (struct evdns_base*,int) ;
 int FUNC_3 (struct evdns_base*,struct sockaddr*,int,int ) ;
 struct evdns_base* FUNC_4 (struct event_base*,int ) ;
 int FUNC_5 (struct evdns_server_port*) ;
 int FUNC_6 (struct event_base*) ;
 int FUNC_7 (struct event_base*) ;
 struct event_base* FUNC_8 () ;
 int FUNC_9 (scalar_t__) ;
 int FUNC_10 (scalar_t__) ;
 int FUNC_11 (struct event_base*,struct evdns_base*) ;
 int VAR_2 ;
 scalar_t__ FUNC_12 (scalar_t__,struct sockaddr*,int*) ;
 int FUNC_13 (int) ;
 int FUNC_14 (struct sockaddr_storage*,int ,int) ;
 scalar_t__ FUNC_15 (int ,int ,int ) ;
 int FUNC_16 (char*) ;

__attribute__((used)) static void
FUNC_17(void *VAR_3)
{
 struct event_base *VAR_4;
 struct evdns_base *VAR_5 = ((void*)0);
 struct evdns_server_port *VAR_6 = ((void*)0);
 evutil_socket_t VAR_7 = -1;
 struct sockaddr_in VAR_8;
 struct sockaddr_storage VAR_9;
 ev_socklen_t VAR_10;
 int VAR_11;

 VAR_4 = FUNC_8();
 VAR_5 = FUNC_4(VAR_4, 0);

 FUNC_14(&VAR_8, 0, sizeof(VAR_8));
 VAR_8.sin_family = VAR_0;
 VAR_8.sin_port = 0;
 VAR_8.sin_addr.s_addr = FUNC_13(0x7f000001);
 if ((VAR_7 = FUNC_15(VAR_0, VAR_1, 0)) < 0) {
  FUNC_16("socket");
 }
 FUNC_10(VAR_7);
 if (FUNC_0(VAR_7, (struct sockaddr*)&VAR_8, sizeof(VAR_8))<0) {
  FUNC_16("bind");
 }
 VAR_6 = FUNC_1(VAR_4, VAR_7, 0, VAR_2,
     VAR_4);

 FUNC_14(&VAR_9, 0, sizeof(VAR_9));
 VAR_10 = sizeof(VAR_9);
 if (FUNC_12(VAR_7, (struct sockaddr*)&VAR_9, &VAR_10)<0) {
  FUNC_16("getsockname");
 }
 FUNC_3(VAR_5,
     (struct sockaddr*)&VAR_9, VAR_10, 0);

 for (VAR_11 = 0; VAR_11 < 1000; ++VAR_11) {
  FUNC_11(VAR_4, VAR_5);
 }

 FUNC_6(VAR_4);

end:
 if (VAR_5)
  FUNC_2(VAR_5, 1);
 if (VAR_6)
  FUNC_5(VAR_6);
 if (VAR_4)
  FUNC_7(VAR_4);
 if (VAR_7 >= 0)
  FUNC_9(VAR_7);
}
