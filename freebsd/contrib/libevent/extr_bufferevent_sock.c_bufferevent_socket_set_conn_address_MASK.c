
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sockaddr {int dummy; } ;
struct bufferevent_private {int conn_address; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int *,struct sockaddr*,size_t) ;

__attribute__((used)) static void
FUNC_2(struct bufferevent_private *VAR_0,
 struct sockaddr *VAR_1, size_t VAR_2)
{
 FUNC_0(VAR_2 <= sizeof(VAR_0->conn_address));
 FUNC_1(&VAR_0->conn_address, VAR_1, VAR_2);
}
