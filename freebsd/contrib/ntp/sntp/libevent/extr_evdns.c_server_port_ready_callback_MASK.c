
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct evdns_server_port {scalar_t__ choked; } ;
typedef int evutil_socket_t ;


 int FUNC_0 (struct evdns_server_port*) ;
 int FUNC_1 (struct evdns_server_port*) ;
 short VAR_0 ;
 short VAR_1 ;
 int FUNC_2 (struct evdns_server_port*) ;
 int FUNC_3 (struct evdns_server_port*) ;

__attribute__((used)) static void
FUNC_4(evutil_socket_t VAR_2, short VAR_3, void *VAR_4) {
 struct evdns_server_port *VAR_5 = (struct evdns_server_port *) VAR_4;
 (void) VAR_2;

 FUNC_0(VAR_5);
 if (VAR_3 & VAR_1) {
  VAR_5->choked = 0;
  FUNC_2(VAR_5);
 }
 if (VAR_3 & VAR_0) {
  FUNC_3(VAR_5);
 }
 FUNC_1(VAR_5);
}
