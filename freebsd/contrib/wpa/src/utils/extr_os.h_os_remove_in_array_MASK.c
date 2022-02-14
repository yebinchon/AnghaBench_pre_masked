
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (unsigned char*,unsigned char*,size_t) ;

__attribute__((used)) static inline void FUNC_1(void *VAR_0, size_t VAR_1, size_t VAR_2,
          size_t VAR_3)
{
 if (VAR_3 < VAR_1 - 1)
  FUNC_0(((unsigned char *) VAR_0) + VAR_3 * VAR_2,
      ((unsigned char *) VAR_0) + (VAR_3 + 1) * VAR_2,
      (VAR_1 - VAR_3 - 1) * VAR_2);
}
