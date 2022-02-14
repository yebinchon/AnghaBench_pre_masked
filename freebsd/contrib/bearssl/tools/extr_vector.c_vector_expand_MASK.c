
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (void*,void*,size_t) ;
 int FUNC_1 (void*) ;
 void* FUNC_2 (size_t) ;

void *
FUNC_3(void *VAR_0,
 size_t VAR_1, size_t *VAR_2, size_t *VAR_3, size_t VAR_4)
{
 size_t VAR_5;
 void *VAR_6;

 if (*VAR_3 - *VAR_2 >= VAR_4) {
  return VAR_0;
 }
 VAR_5 = (*VAR_3 << 1);
 if (VAR_5 - *VAR_2 < VAR_4) {
  VAR_5 = VAR_4 + *VAR_2;
  if (VAR_5 < 8) {
   VAR_5 = 8;
  }
 }
 VAR_6 = FUNC_2(VAR_5 * VAR_1);
 if (VAR_0 != ((void*)0)) {
  FUNC_0(VAR_6, VAR_0, *VAR_3 * VAR_1);
  FUNC_1(VAR_0);
 }
 *VAR_3 = VAR_5;
 return VAR_6;
}
