
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct run {int dummy; } ;
struct evbuffer {int dummy; } ;
typedef int ev_uint32_t ;


 int FUNC_0 (int ) ;
 int FUNC_1 (struct evbuffer*) ;
 struct evbuffer* FUNC_2 () ;
 int FUNC_3 (struct evbuffer*,int ,struct evbuffer*) ;
 int FUNC_4 (struct evbuffer*,struct run const*) ;

void
FUNC_5(struct evbuffer *VAR_0, ev_uint32_t VAR_1, const struct run *VAR_2)
{
  struct evbuffer *VAR_3 = FUNC_2();
  FUNC_0(VAR_3 != ((void*)0));
  FUNC_4(VAR_3, VAR_2);
  FUNC_3(VAR_0, VAR_1, VAR_3);
   FUNC_1(VAR_3);
}
