
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct event_base {int dummy; } ;


 int FUNC_0 (struct event_base*,int ,int*) ;
 int VAR_0 ;
 int FUNC_1 (struct event_base*,int ,int*) ;
 int VAR_1 ;

int
FUNC_2(struct event_base *VAR_2)
{
 int VAR_3 = 0;

 FUNC_0(VAR_2, VAR_0, &VAR_3);
 if (VAR_3 < 0)
  return -1;
 FUNC_1(VAR_2, VAR_1, &VAR_3);
 if (VAR_3 < 0)
  return -1;
 return 0;
}
