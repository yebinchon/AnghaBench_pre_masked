
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 unsigned int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (void*,void const*,size_t) ;
 int FUNC_1 (int ,char*) ;
 void* FUNC_2 (void*,unsigned int,size_t) ;

__attribute__((used)) static void *
FUNC_3(const void *VAR_2, void *VAR_3, unsigned int *VAR_4, size_t VAR_5)
{
 void *VAR_6;

 if ((*VAR_4 % VAR_0) == 0) {
  VAR_6 = FUNC_2(VAR_3, *VAR_4 + VAR_0, VAR_5);
  if (VAR_6 == ((void*)0)) {
   FUNC_1(VAR_1, "memory allocation failure");
   return (VAR_3);
  }
  VAR_3 = VAR_6;
 }
 FUNC_0((void *)(((uintptr_t)VAR_3) + (*VAR_4 * VAR_5)), VAR_2, VAR_5);
 (*VAR_4)++;
 return (VAR_3);
}
