
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct evhttp_connection {scalar_t__ state; int bind_port; } ;
typedef int ev_uint16_t ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int) ;

void
FUNC_1(struct evhttp_connection *VAR_1,
    ev_uint16_t VAR_2)
{
 FUNC_0(VAR_1->state == VAR_0);
 VAR_1->bind_port = VAR_2;
}
