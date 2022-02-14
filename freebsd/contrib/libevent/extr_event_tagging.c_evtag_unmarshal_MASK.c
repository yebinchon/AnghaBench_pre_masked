
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct evbuffer {int dummy; } ;
typedef int ev_uint32_t ;


 int FUNC_0 (struct evbuffer*,int ,int) ;
 int FUNC_1 (struct evbuffer*,int) ;
 int FUNC_2 (struct evbuffer*,int) ;
 int FUNC_3 (struct evbuffer*,int *) ;

int
FUNC_4(struct evbuffer *VAR_0, ev_uint32_t *VAR_1, struct evbuffer *VAR_2)
{
 int VAR_3;

 if ((VAR_3 = FUNC_3(VAR_0, VAR_1)) == -1)
  return (-1);

 if (FUNC_0(VAR_2, FUNC_2(VAR_0, VAR_3), VAR_3) == -1)
  return (-1);

 FUNC_1(VAR_0, VAR_3);

 return (VAR_3);
}
