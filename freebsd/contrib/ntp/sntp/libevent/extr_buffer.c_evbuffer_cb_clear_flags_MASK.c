
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct evbuffer_cb_entry {int flags; } ;
struct evbuffer {int dummy; } ;
typedef int ev_uint32_t ;


 int VAR_0 ;
 int FUNC_0 (struct evbuffer*) ;
 int FUNC_1 (struct evbuffer*) ;

int
FUNC_2(struct evbuffer *VAR_1,
        struct evbuffer_cb_entry *VAR_2, ev_uint32_t VAR_3)
{

 VAR_3 &= ~VAR_0;
 FUNC_0(VAR_1);
 VAR_2->flags &= ~VAR_3;
 FUNC_1(VAR_1);
 return 0;
}
