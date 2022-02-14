
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct evhttp_connection {int flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

int FUNC_0(struct evhttp_connection *VAR_3,
 int VAR_4)
{
 int VAR_5 = 0;
 VAR_5 |= VAR_2;
 VAR_5 |= VAR_1;

 if (VAR_4 & ~VAR_5 || VAR_4 > VAR_0)
  return 1;
 VAR_3->flags &= ~VAR_5;

 VAR_3->flags |= VAR_4;

 return 0;
}
