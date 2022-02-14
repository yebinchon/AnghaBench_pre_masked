
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef TYPE_1__* pthread_attr_t ;
struct TYPE_3__ {size_t stacksize_attr; void* stackaddr_attr; } ;


 int VAR_0 ;
 size_t VAR_1 ;

int
FUNC_0(pthread_attr_t *VAR_2, void *VAR_3,
                        size_t VAR_4)
{
 int VAR_5;


 if (VAR_2 == ((void*)0) || *VAR_2 == ((void*)0) || VAR_3 == ((void*)0)
     || VAR_4 < VAR_1)
  VAR_5 = VAR_0;
 else {

  (*VAR_2)->stackaddr_attr = VAR_3;
  (*VAR_2)->stacksize_attr = VAR_4;
  VAR_5 = 0;
 }
 return(VAR_5);
}
