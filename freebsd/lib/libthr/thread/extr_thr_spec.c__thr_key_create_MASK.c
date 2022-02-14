
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pthread {int dummy; } ;
typedef int pthread_key_t ;
struct TYPE_2__ {int allocated; void (* destructor ) (void*) ;int seqno; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct pthread*,int *) ;
 int FUNC_1 (struct pthread*,int *) ;
 struct pthread* FUNC_2 () ;
 int VAR_2 ;
 int FUNC_3 () ;
 TYPE_1__* VAR_3 ;

int
FUNC_4(pthread_key_t *VAR_4, void (*VAR_5)(void *))
{
 struct pthread *VAR_6;
 int VAR_7;

 FUNC_3();

 VAR_6 = FUNC_2();

 FUNC_0(VAR_6, &VAR_2);
 for (VAR_7 = 0; VAR_7 < VAR_1; VAR_7++) {

  if (VAR_3[VAR_7].allocated == 0) {
   VAR_3[VAR_7].allocated = 1;
   VAR_3[VAR_7].destructor = VAR_5;
   VAR_3[VAR_7].seqno++;

   FUNC_1(VAR_6, &VAR_2);
   *VAR_4 = VAR_7 + 1;
   return (0);
  }

 }
 FUNC_1(VAR_6, &VAR_2);
 return (VAR_0);
}
