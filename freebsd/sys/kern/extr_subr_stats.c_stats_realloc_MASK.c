
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 void* FUNC_0 (void*,size_t) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (void*,char,size_t) ;
 void* FUNC_2 (void*,size_t,...) ;

__attribute__((used)) static inline void *
FUNC_3(void *VAR_4, size_t VAR_5, size_t VAR_6, int VAR_7)
{







 VAR_4 = FUNC_2(VAR_4, VAR_6);
 if ((VAR_7 & VAR_3) && VAR_4 != ((void*)0)) {
  if (VAR_5 == 0)
   FUNC_1(VAR_4, '\0', VAR_6);
  else if (VAR_6 > VAR_5)
   FUNC_1(FUNC_0(VAR_4, VAR_5), '\0', VAR_6 - VAR_5);
 }


 return (VAR_4);
}
