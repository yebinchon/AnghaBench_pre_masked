
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 uintptr_t FUNC_0 (uintptr_t,size_t) ;
 void* FUNC_1 (void*) ;
 int FUNC_2 (int) ;
 size_t VAR_0 ;
 void* FUNC_3 (int *,size_t,size_t,int*) ;
 void* FUNC_4 (void*,size_t,size_t,size_t,int*) ;

__attribute__((used)) static void *
FUNC_5(size_t VAR_1, size_t VAR_2, bool *VAR_3) {
 size_t VAR_4 = VAR_1 + VAR_2 - VAR_0;

 if (VAR_4 < VAR_1) {
  return ((void*)0);
 }

 void *VAR_5;
 do {
  void *VAR_6 = FUNC_3(((void*)0), VAR_4, VAR_2, VAR_3);
  if (VAR_6 == ((void*)0)) {
   return ((void*)0);
  }
  size_t VAR_7 = FUNC_0((uintptr_t)VAR_6, VAR_2)
      - (uintptr_t)VAR_6;
  VAR_5 = FUNC_4(VAR_6, VAR_4, VAR_7, VAR_1, VAR_3);
 } while (VAR_5 == ((void*)0));

 FUNC_2(VAR_5 != ((void*)0));
 FUNC_2(FUNC_1(VAR_5) == VAR_5);
 return VAR_5;
}
