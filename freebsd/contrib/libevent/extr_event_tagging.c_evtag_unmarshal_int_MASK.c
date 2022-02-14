
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct evbuffer {int dummy; } ;
typedef scalar_t__ ev_uint32_t ;


 int FUNC_0 (scalar_t__*,struct evbuffer*,int ) ;
 int FUNC_1 (scalar_t__*,struct evbuffer*,int) ;
 int FUNC_2 (struct evbuffer*,scalar_t__) ;
 scalar_t__ FUNC_3 (struct evbuffer*) ;
 int FUNC_4 (scalar_t__*,struct evbuffer*) ;

int
FUNC_5(struct evbuffer *VAR_0, ev_uint32_t VAR_1,
    ev_uint32_t *VAR_2)
{
 ev_uint32_t VAR_3;
 ev_uint32_t VAR_4;
 int VAR_5;

 if (FUNC_1(&VAR_3, VAR_0, 1 ) == -1)
  return (-1);
 if (VAR_1 != VAR_3)
  return (-1);
 if (FUNC_4(&VAR_4, VAR_0) == -1)
  return (-1);

 if (FUNC_3(VAR_0) < VAR_4)
  return (-1);

 VAR_5 = FUNC_0(VAR_2, VAR_0, 0);
 FUNC_2(VAR_0, VAR_4);
 if (VAR_5 < 0 || (size_t)VAR_5 > VAR_4)
  return (-1);
 else
  return VAR_5;
}
