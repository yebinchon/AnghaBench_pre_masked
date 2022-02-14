
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int *) ;
 int FUNC_1 () ;
 int * VAR_0 ;
 scalar_t__ FUNC_2 (int *,char const*) ;

__attribute__((used)) static int
FUNC_3(const char* VAR_1)
{
 if (VAR_0 != ((void*)0)) {
  if (FUNC_2(VAR_0, VAR_1) != 0) {
   FUNC_1();

   FUNC_0(VAR_0);
   VAR_0 = ((void*)0);

   return 1;
  } else
   return 0;
 } else
  return 1;
}
