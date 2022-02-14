
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 int VAR_3 ;
 void* FUNC_0 (void*,size_t) ;

void *
FUNC_1(void *VAR_4, size_t VAR_5, size_t VAR_6)
{

 if ((VAR_5 >= VAR_1 || VAR_6 >= VAR_1) &&
     VAR_5 > 0 && VAR_2 / VAR_5 < VAR_6) {
  VAR_3 = VAR_0;
  return (((void*)0));
 }
 return (FUNC_0(VAR_4, VAR_6 * VAR_5));
}
