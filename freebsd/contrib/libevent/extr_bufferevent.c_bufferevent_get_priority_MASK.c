
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bufferevent {int ev_base; int ev_read; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int *) ;

int
FUNC_3(const struct bufferevent *VAR_0)
{
 if (FUNC_2(&VAR_0->ev_read)) {
  return FUNC_1(&VAR_0->ev_read);
 } else {
  return FUNC_0(VAR_0->ev_base) / 2;
 }
}
