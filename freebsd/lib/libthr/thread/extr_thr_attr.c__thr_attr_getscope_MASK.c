
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef TYPE_1__* pthread_attr_t ;
struct TYPE_3__ {int flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

int
FUNC_0(const pthread_attr_t * __restrict VAR_3,
    int * __restrict VAR_4)
{
 int VAR_5 = 0;

 if ((VAR_3 == ((void*)0)) || (*VAR_3 == ((void*)0)) || (VAR_4 == ((void*)0)))

  VAR_5 = VAR_0;

 else
  *VAR_4 = (*VAR_3)->flags & VAR_2 ?
      VAR_2 : VAR_1;

 return(VAR_5);
}
