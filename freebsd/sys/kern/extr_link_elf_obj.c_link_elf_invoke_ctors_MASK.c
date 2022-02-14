
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int * caddr_t ;


 void FUNC_0 () ;

__attribute__((used)) static void
FUNC_1(caddr_t VAR_0, size_t VAR_1)
{
 void (**VAR_2)(void);
 size_t VAR_3, VAR_4;

 if (VAR_0 == ((void*)0) || VAR_1 == 0)
  return;
 VAR_4 = VAR_1 / sizeof(*VAR_2);
 VAR_2 = (void *)VAR_0;
 for (VAR_3 = 0; VAR_3 < VAR_4; VAR_3++) {
  if (VAR_2[VAR_3] != ((void*)0))
   (*VAR_2[VAR_3])();
 }
}
