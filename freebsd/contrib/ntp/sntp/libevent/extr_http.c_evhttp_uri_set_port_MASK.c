
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct evhttp_uri {int port; } ;



int
FUNC_0(struct evhttp_uri *VAR_0, int VAR_1)
{
 if (VAR_1 < -1)
  return -1;
 VAR_0->port = VAR_1;
 return 0;
}
