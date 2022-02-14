
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef TYPE_1__* pthread_attr_t ;
struct TYPE_4__ {struct TYPE_4__* cpuset; } ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*) ;

int
FUNC_1(pthread_attr_t *VAR_1)
{
 int VAR_2;


 if (VAR_1 == ((void*)0) || *VAR_1 == ((void*)0))

  VAR_2 = VAR_0;
 else {
  if ((*VAR_1)->cpuset != ((void*)0))
   FUNC_0((*VAR_1)->cpuset);

  FUNC_0(*VAR_1);





  *VAR_1 = ((void*)0);
  VAR_2 = 0;
 }
 return(VAR_2);
}
