
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef TYPE_1__* pthread_attr_t ;
struct TYPE_3__ {size_t stacksize_attr; } ;


 int VAR_0 ;
 size_t VAR_1 ;

int
FUNC_0(pthread_attr_t *VAR_2, size_t VAR_3)
{
 int VAR_4;


 if (VAR_2 == ((void*)0) || *VAR_2 == ((void*)0) || VAR_3 < VAR_1)
  VAR_4 = VAR_0;
 else {

  (*VAR_2)->stacksize_attr = VAR_3;
  VAR_4 = 0;
 }
 return(VAR_4);
}
