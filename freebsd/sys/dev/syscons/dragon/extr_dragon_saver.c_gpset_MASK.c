
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int* VAR_2 ;

__attribute__((used)) static __inline int
FUNC_0(int VAR_3, int VAR_4, int VAR_5)
{
 if (VAR_3 < 0 || VAR_4 < 0 || VAR_1 <= VAR_3 || VAR_0 <= VAR_4) {
  return 0;
 }
 VAR_2[VAR_3 + VAR_4 * VAR_1] = VAR_5;
 return 1;
}
