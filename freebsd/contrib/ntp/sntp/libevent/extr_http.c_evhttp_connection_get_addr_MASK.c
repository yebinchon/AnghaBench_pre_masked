
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef struct sockaddr const sockaddr ;
struct evhttp_connection {scalar_t__ conn_address; } ;



const struct sockaddr*
FUNC_0(struct evhttp_connection *VAR_0)
{
 return (struct sockaddr *)VAR_0->conn_address;
}
