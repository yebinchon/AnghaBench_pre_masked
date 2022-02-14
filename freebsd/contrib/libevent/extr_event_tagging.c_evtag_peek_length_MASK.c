
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct evbuffer {int dummy; } ;
typedef int ev_uint32_t ;


 int FUNC_0 (int*,struct evbuffer*,int) ;
 int FUNC_1 (int *,struct evbuffer*,int ) ;

int
FUNC_2(struct evbuffer *VAR_0, ev_uint32_t *VAR_1)
{
 int VAR_2, VAR_3;

 VAR_3 = FUNC_1(((void*)0), VAR_0, 0 );
 if (VAR_3 == -1)
  return (-1);

 VAR_2 = FUNC_0(VAR_1, VAR_0, VAR_3);
 if (VAR_2 == -1)
  return (-1);

 *VAR_1 += VAR_2 + VAR_3;

 return (0);
}
