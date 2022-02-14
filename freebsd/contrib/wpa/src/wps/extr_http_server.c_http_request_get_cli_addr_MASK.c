
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sockaddr_in {int dummy; } ;
struct http_request {struct sockaddr_in cli; } ;



struct sockaddr_in * FUNC_0(struct http_request *VAR_0)
{
 return &VAR_0->cli;
}
