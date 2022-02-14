
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct msg {int dummy; } ;
struct evbuffer {int dummy; } ;
typedef scalar_t__ ev_uint32_t ;


 int FUNC_0 (struct evbuffer*) ;
 struct evbuffer* FUNC_1 () ;
 int FUNC_2 (struct evbuffer*,scalar_t__*,struct evbuffer*) ;
 int FUNC_3 (struct msg*,struct evbuffer*) ;

int
FUNC_4(struct evbuffer *VAR_0, ev_uint32_t VAR_1, struct msg *VAR_2)
{
  ev_uint32_t VAR_3;
  int VAR_4 = -1;

  struct evbuffer *VAR_5 = FUNC_1();

  if (FUNC_2(VAR_0, &VAR_3, VAR_5) == -1 || VAR_3 != VAR_1)
    goto error;

  if (FUNC_3(VAR_2, VAR_5) == -1)
    goto error;

  VAR_4 = 0;

 error:
  FUNC_0(VAR_5);
  return (VAR_4);
}
