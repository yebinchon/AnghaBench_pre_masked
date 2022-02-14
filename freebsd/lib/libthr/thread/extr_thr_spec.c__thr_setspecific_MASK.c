
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct pthread_specific_elem {int dummy; } ;
struct pthread {TYPE_1__* specific; int specific_data_count; } ;
typedef size_t pthread_key_t ;
struct TYPE_4__ {int seqno; int allocated; } ;
struct TYPE_3__ {int seqno; int * data; } ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned int VAR_2 ;
 void* FUNC_0 (unsigned int,int) ;
 struct pthread* FUNC_1 () ;
 TYPE_2__* VAR_3 ;

int
FUNC_2(pthread_key_t VAR_4, const void *VAR_5)
{
 struct pthread *VAR_6;
 void *VAR_7;
 pthread_key_t VAR_8;

 VAR_8 = VAR_4 - 1;
 if ((unsigned int)VAR_8 >= VAR_2 ||
     !VAR_3[VAR_8].allocated)
  return (VAR_0);

 VAR_6 = FUNC_1();
 if (VAR_6->specific == ((void*)0)) {
  VAR_7 = FUNC_0(VAR_2,
      sizeof(struct pthread_specific_elem));
  if (VAR_7 == ((void*)0))
   return (VAR_1);
  VAR_6->specific = VAR_7;
 }
 if (VAR_6->specific[VAR_8].data == ((void*)0)) {
  if (VAR_5 != ((void*)0))
   VAR_6->specific_data_count++;
 } else if (VAR_5 == ((void*)0))
  VAR_6->specific_data_count--;
 VAR_6->specific[VAR_8].data = VAR_5;
 VAR_6->specific[VAR_8].seqno = VAR_3[VAR_8].seqno;
 return (0);
}
