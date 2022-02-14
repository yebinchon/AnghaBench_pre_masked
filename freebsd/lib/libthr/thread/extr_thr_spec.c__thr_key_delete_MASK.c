
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pthread {int dummy; } ;
typedef int pthread_key_t ;
struct TYPE_2__ {scalar_t__ allocated; } ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 int FUNC_0 (struct pthread*,int *) ;
 int FUNC_1 (struct pthread*,int *) ;
 struct pthread* FUNC_2 () ;
 int VAR_2 ;
 TYPE_1__* VAR_3 ;

int
FUNC_3(pthread_key_t VAR_4)
{
 struct pthread *VAR_5;
 int VAR_6, VAR_7;

 VAR_6 = VAR_4 - 1;
 if ((unsigned int)VAR_6 >= VAR_1)
  return (VAR_0);
 VAR_5 = FUNC_2();
 FUNC_0(VAR_5, &VAR_2);
 if (VAR_3[VAR_6].allocated) {
  VAR_3[VAR_6].allocated = 0;
  VAR_7 = 0;
 } else {
  VAR_7 = VAR_0;
 }
 FUNC_1(VAR_5, &VAR_2);
 return (VAR_7);
}
