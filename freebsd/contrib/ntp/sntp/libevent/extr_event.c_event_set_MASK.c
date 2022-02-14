
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct event {int dummy; } ;
typedef int evutil_socket_t ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 (struct event*,int ,int ,short,void (*) (int ,short,void*),void*) ;

void
FUNC_2(struct event *VAR_1, evutil_socket_t VAR_2, short VAR_3,
   void (*VAR_4)(evutil_socket_t, short, void *), void *VAR_5)
{
 int VAR_6;
 VAR_6 = FUNC_1(VAR_1, VAR_0, VAR_2, VAR_3, VAR_4, VAR_5);
 FUNC_0(VAR_6 == 0);
}
