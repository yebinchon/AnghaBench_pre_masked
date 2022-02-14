
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int) ;
 unsigned int FUNC_1 (unsigned int,int *) ;
 int FUNC_2 (unsigned int) ;
 int FUNC_3 (unsigned int,void*) ;
 int FUNC_4 (unsigned int,void*) ;
 scalar_t__ FUNC_5 (unsigned int,void*) ;

void FUNC_6(void *VAR_0, unsigned int VAR_1, unsigned int VAR_2,
         unsigned int VAR_3)
{
 unsigned int VAR_4, VAR_5;

 FUNC_0(!VAR_1);





 if (FUNC_2(VAR_3) == 1)
  return;





 if (VAR_3 >= FUNC_1(VAR_2 + VAR_1, ((void*)0)))
  return;






 VAR_5 = FUNC_1(VAR_2, ((void*)0));

 if (VAR_3 < VAR_5)
  return;

 for (VAR_4 = 0; VAR_4 < VAR_1; VAR_4++, VAR_5++)
 {

  while (FUNC_2(VAR_5) == 1)
   VAR_5++;
  if (VAR_5 == VAR_3)
  {
   if (FUNC_5(VAR_4, VAR_0))
    FUNC_3(VAR_4, VAR_0);
   else
    FUNC_4(VAR_4, VAR_0);
   break;
  }
 }
}
