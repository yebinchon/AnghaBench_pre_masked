
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct timeval {unsigned long tv_usec; } ;
struct TYPE_3__ {unsigned long dwHighDateTime; unsigned long dwLowDateTime; } ;
typedef TYPE_1__ FILETIME ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int) ;
 int FUNC_2 (struct timeval*,int *) ;

__attribute__((used)) static unsigned long
FUNC_3(void)
{





  struct timeval VAR_0;
  int VAR_1;

  VAR_1 = FUNC_2(&VAR_0, ((void*)0));




  FUNC_1 (VAR_1 == 0);



  return VAR_0.tv_usec;

}
