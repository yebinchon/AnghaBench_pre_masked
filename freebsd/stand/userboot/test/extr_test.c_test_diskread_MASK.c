
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
typedef size_t ssize_t ;


 int VAR_0 ;
 int* VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 size_t FUNC_0 (int,void*,size_t,int ) ;

int
FUNC_1(void *VAR_4, int VAR_5, uint64_t VAR_6, void *VAR_7, size_t VAR_8,
    size_t *VAR_9)
{
 ssize_t VAR_10;

 if (VAR_5 > VAR_2 || VAR_1[VAR_5] == -1)
  return (VAR_0);
 VAR_10 = FUNC_0(VAR_1[VAR_5], VAR_7, VAR_8, VAR_6);
 if (VAR_10 < 0)
  return (VAR_3);
 *VAR_9 = VAR_8 - VAR_10;
 return (0);
}
