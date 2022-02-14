
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct thread {int dummy; } ;
typedef int semid_t ;
typedef int semid32 ;
typedef int semid ;
typedef int int32_t ;


 int FUNC_0 (void*,int*,size_t) ;

__attribute__((used)) static int
FUNC_1(struct thread *VAR_0, semid_t *VAR_1, int VAR_2,
    int VAR_3)
{
 semid_t VAR_4;



 void *VAR_5;
 size_t VAR_6;
  VAR_4 = VAR_2;
  VAR_5 = &VAR_4;
  VAR_6 = sizeof(VAR_4);
  VAR_3 = 0;




 return (FUNC_0(VAR_5, VAR_1, VAR_6));
}
