
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct evhttp {scalar_t__ default_max_headers_size; } ;
typedef scalar_t__ ev_ssize_t ;


 scalar_t__ VAR_0 ;

void
FUNC_0(struct evhttp* VAR_1, ev_ssize_t VAR_2)
{
 if (VAR_2 < 0)
  VAR_1->default_max_headers_size = VAR_0;
 else
  VAR_1->default_max_headers_size = VAR_2;
}
