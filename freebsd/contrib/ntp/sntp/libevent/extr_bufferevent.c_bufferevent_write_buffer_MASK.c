
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct evbuffer {int dummy; } ;
struct bufferevent {int output; } ;


 int FUNC_0 (int ,struct evbuffer*) ;

int
FUNC_1(struct bufferevent *VAR_0, struct evbuffer *VAR_1)
{
 if (FUNC_0(VAR_0->output, VAR_1) == -1)
  return (-1);

 return 0;
}
