
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct evbuffer {int dummy; } ;
typedef scalar_t__ ev_uint32_t ;


 int FUNC_0 (scalar_t__*,struct evbuffer*,int) ;
 scalar_t__ FUNC_1 (struct evbuffer*) ;
 int FUNC_2 (scalar_t__*,struct evbuffer*) ;

int
FUNC_3(struct evbuffer *VAR_0, ev_uint32_t *VAR_1)
{
 ev_uint32_t VAR_2;

 if (FUNC_0(VAR_1, VAR_0, 1 ) == -1)
  return (-1);
 if (FUNC_2(&VAR_2, VAR_0) == -1)
  return (-1);

 if (FUNC_1(VAR_0) < VAR_2)
  return (-1);

 return (VAR_2);
}
