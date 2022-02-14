
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef TYPE_1__* pthread_attr_t ;
struct TYPE_3__ {int suspend; } ;


 int VAR_0 ;
 int VAR_1 ;

int
FUNC_0(pthread_attr_t *VAR_2)
{
 int VAR_3;

 if (VAR_2 == ((void*)0) || *VAR_2 == ((void*)0)) {
  VAR_3 = VAR_0;
 } else {
  (*VAR_2)->suspend = VAR_1;
  VAR_3 = 0;
 }
 return(VAR_3);
}
