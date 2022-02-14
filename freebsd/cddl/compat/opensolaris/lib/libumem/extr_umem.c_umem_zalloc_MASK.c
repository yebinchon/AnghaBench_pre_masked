
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 () ;
 int FUNC_1 (int) ;
 void* FUNC_2 (int,size_t) ;
 int FUNC_3 () ;

void *FUNC_4(size_t VAR_2, int VAR_3)
{
 FUNC_1(VAR_3 == VAR_0 || VAR_3 == VAR_1);

 if(VAR_2 == 0)
  return ((void*)0);

 void *VAR_4 = FUNC_2(1, VAR_2);
 if(VAR_4 == ((void*)0)) {
  if(!(VAR_3 & VAR_1))
   return ((void*)0);

  if(&FUNC_3 != ((void*)0))
   FUNC_3();
  FUNC_0();
 }

 return VAR_4;
}
