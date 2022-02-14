
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ semid_t ;
typedef int * sem_t ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (scalar_t__) ;
 scalar_t__ FUNC_1 (scalar_t__*,unsigned int) ;
 int * FUNC_2 (unsigned int,scalar_t__,int) ;

int
FUNC_3(sem_t *VAR_1, int VAR_2, unsigned int VAR_3)
{
 semid_t VAR_4;







 VAR_4 = (semid_t)VAR_0;
 if ((VAR_2 != 0) && FUNC_1(&VAR_4, VAR_3) != 0)
  return (-1);

 *VAR_1 = FUNC_2(VAR_3, VAR_4, VAR_2);
 if ((*VAR_1) == ((void*)0)) {
  if (VAR_2 != 0)
   FUNC_0(VAR_4);
  return (-1);
 }
 return (0);
}
