
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bufferevent {int output; } ;


 int FUNC_0 (int ,void const*,size_t) ;

int
FUNC_1(struct bufferevent *VAR_0, const void *VAR_1, size_t VAR_2)
{
 if (FUNC_0(VAR_0->output, VAR_1, VAR_2) == -1)
  return (-1);

 return 0;
}
