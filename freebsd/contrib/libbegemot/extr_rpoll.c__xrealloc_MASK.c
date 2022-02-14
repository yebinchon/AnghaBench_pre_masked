
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*,unsigned long,unsigned long) ;
 int FUNC_1 (void*) ;
 void* FUNC_2 (int) ;
 void* FUNC_3 (void*,size_t) ;

__attribute__((used)) static void *
FUNC_4(void *VAR_0, size_t VAR_1)
{
 void *VAR_2;

 if(VAR_0 == ((void*)0)) {
  if((VAR_2=FUNC_2(VAR_1)) == ((void*)0) && (VAR_1!=0 || (VAR_2=FUNC_2(1)) == ((void*)0)))
   FUNC_0("out of memory: xrealloc(%lx, %lu)",
    (unsigned long)VAR_0, (unsigned long)VAR_1);
 } else if(VAR_1 == 0) {
  FUNC_1(VAR_0);
  if((VAR_2=FUNC_2(VAR_1)) == ((void*)0) && (VAR_2=FUNC_2(1)) == ((void*)0))
   FUNC_0("out of memory: xrealloc(%lx, %lu)",
    (unsigned long)VAR_0, (unsigned long)VAR_1);
 } else {
  if((VAR_2 = FUNC_3(VAR_0, VAR_1)) == ((void*)0))
   FUNC_0("out of memory: xrealloc(%lx, %lu)",
    (unsigned long)VAR_0, (unsigned long)VAR_1);
 }

 return VAR_2;
}
