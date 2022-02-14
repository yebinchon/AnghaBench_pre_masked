
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*) ;
 char* FUNC_1 (unsigned int,int) ;
 int* VAR_0 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int*) ;
 int FUNC_4 (char*,int*,unsigned int) ;
 unsigned int VAR_1 ;

__attribute__((used)) static void
FUNC_5 (unsigned int VAR_2, int VAR_3)
{
  if (VAR_2 >= VAR_1)
    {
      char *VAR_4;

      VAR_4 = FUNC_1 (VAR_2 + 1, 1);

      if (VAR_4 == ((void*)0))
 FUNC_2 (FUNC_0("Out of memory allocating dump request table.\n"));
      else
 {

   FUNC_4 (VAR_4, VAR_0, VAR_1);

   FUNC_3 (VAR_0);

   VAR_0 = VAR_4;
   VAR_1 = VAR_2 + 1;
 }
    }

  if (VAR_0)
    VAR_0[VAR_2] |= VAR_3;

  return;
}
