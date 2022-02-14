
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef TYPE_1__* pthread_attr_t ;
struct TYPE_3__ {int sched_inherit; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;

int
FUNC_0(pthread_attr_t *VAR_4, int VAR_5)
{
 int VAR_6 = 0;

 if ((VAR_4 == ((void*)0)) || (*VAR_4 == ((void*)0)))
  VAR_6 = VAR_0;
 else if (VAR_5 != VAR_3 &&
   VAR_5 != VAR_2)
  VAR_6 = VAR_1;
 else
  (*VAR_4)->sched_inherit = VAR_5;

 return(VAR_6);
}
