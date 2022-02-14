
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*,size_t) ;
 void* FUNC_1 (void*,size_t) ;

__attribute__((used)) static inline void *FUNC_2(void *VAR_0, size_t VAR_1)
{
 void *VAR_2 = FUNC_1(VAR_0, VAR_1);

 if (! VAR_2)
  FUNC_0("realloc() failed (len=%d)\n", VAR_1);

 return VAR_2;
}
