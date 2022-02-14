
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int fn ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int,char*,...) ;
 int FUNC_1 (int,char*) ;
 int FUNC_2 (int *) ;
 int * VAR_2 ;
 void* VAR_3 ;
 char* VAR_4 ;
 char* FUNC_3 (size_t) ;
 int * FUNC_4 (char*,size_t*) ;
 int FUNC_5 (char*,int,char*,char*) ;
 char* FUNC_6 (char**,char*) ;
 scalar_t__ FUNC_7 (char*,char*,size_t*,int *,int ) ;
 int FUNC_8 (char*,int,int) ;

__attribute__((used)) static void
FUNC_9(void)
{
 char VAR_5[VAR_1];
 char *VAR_6, *VAR_7, *VAR_8;
 size_t VAR_9, VAR_10;

 if (VAR_4 == ((void*)0)) {
  if (FUNC_7("kern.module_path", ((void*)0), &VAR_9, ((void*)0), 0) < 0)
   FUNC_1(1, "Can't find kernel module path.");
  VAR_6 = FUNC_3(VAR_9);
  if (VAR_6 == ((void*)0))
   FUNC_0(1, "Can't get memory for modpath.");
  if (FUNC_7("kern.module_path", VAR_6, &VAR_9, ((void*)0), 0) < 0)
   FUNC_1(1, "Can't find kernel module path.");
  VAR_7 = VAR_6;
  while ((VAR_8 = FUNC_6(&VAR_7, ";")) != ((void*)0)) {
   FUNC_5(VAR_5, sizeof(VAR_5), "%s/linker.hints", VAR_8);
   VAR_2 = FUNC_4(VAR_5, &VAR_10);
   if (VAR_2 == ((void*)0))
    continue;
   break;
  }
  if (VAR_8 == ((void*)0))
   FUNC_1(1, "Can't read linker hints file.");
 } else {
  VAR_2 = FUNC_4(VAR_4, &VAR_10);
  if (VAR_2 == ((void*)0))
   FUNC_0(1, "Can't open %s for reading", VAR_5);
 }

 if (*(int *)(intptr_t)VAR_2 != VAR_0) {
  FUNC_8("Linker hints version %d doesn't match expected %d.",
      *(int *)(intptr_t)VAR_2, VAR_0);
  FUNC_2(VAR_2);
  VAR_2 = ((void*)0);
 }
 if (VAR_2 != ((void*)0))
  VAR_3 = (void *)((intptr_t)VAR_2 + (intptr_t)VAR_10);
}
