
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct evbuffer {int flags; } ;
typedef scalar_t__ ev_uint64_t ;
typedef int ev_uint32_t ;


 int FUNC_0 (struct evbuffer*) ;
 int FUNC_1 (struct evbuffer*) ;

int
FUNC_2(struct evbuffer *VAR_0, ev_uint64_t VAR_1)
{
 FUNC_0(VAR_0);
 VAR_0->flags |= (ev_uint32_t)VAR_1;
 FUNC_1(VAR_0);
 return 0;
}
