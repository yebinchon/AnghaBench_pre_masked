
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct evbuffer {int dummy; } ;
typedef scalar_t__ ev_uint32_t ;


 int FUNC_0 (struct evbuffer*,void*,size_t) ;
 int FUNC_1 (struct evbuffer*,scalar_t__*) ;

int
FUNC_2(struct evbuffer *VAR_0, ev_uint32_t VAR_1, void *VAR_2,
    size_t VAR_3)
{
 ev_uint32_t VAR_4;
 int VAR_5;


 if ((VAR_5 = FUNC_1(VAR_0, &VAR_4)) < 0 ||
     VAR_4 != VAR_1)
  return (-1);

 if ((size_t)VAR_5 != VAR_3)
  return (-1);

 FUNC_0(VAR_0, VAR_2, VAR_3);
 return (0);
}
