
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 void FUNC_0 (void*,void*,int) ;
 void FUNC_1 (void*,void*,int) ;

void FUNC_2(void *VAR_0, size_t VAR_1, size_t VAR_2,
   int (*VAR_3)(const void *, const void *),
   void (*VAR_4)(void *, void *, int VAR_5))
{

 int VAR_6 = (VAR_1/2 - 1) * VAR_2, VAR_7 = VAR_1 * VAR_2, VAR_8, VAR_9;

 if (!VAR_4)
  VAR_4 = (VAR_2 == 4 ? FUNC_1 : FUNC_0);


 for ( ; VAR_6 >= 0; VAR_6 -= VAR_2) {
  for (VAR_9 = VAR_6; VAR_9 * 2 + VAR_2 < VAR_7; VAR_9 = VAR_8) {
   VAR_8 = VAR_9 * 2 + VAR_2;
   if (VAR_8 < VAR_7 - VAR_2 &&
     VAR_3(VAR_0 + VAR_8, VAR_0 + VAR_8 + VAR_2) < 0)
    VAR_8 += VAR_2;
   if (VAR_3(VAR_0 + VAR_9, VAR_0 + VAR_8) >= 0)
    break;
   VAR_4(VAR_0 + VAR_9, VAR_0 + VAR_8, VAR_2);
  }
 }


 for (VAR_6 = VAR_7 - VAR_2; VAR_6 > 0; VAR_6 -= VAR_2) {
  VAR_4(VAR_0, VAR_0 + VAR_6, VAR_2);
  for (VAR_9 = 0; VAR_9 * 2 + VAR_2 < VAR_6; VAR_9 = VAR_8) {
   VAR_8 = VAR_9 * 2 + VAR_2;
   if (VAR_8 < VAR_6 - VAR_2 &&
     VAR_3(VAR_0 + VAR_8, VAR_0 + VAR_8 + VAR_2) < 0)
    VAR_8 += VAR_2;
   if (VAR_3(VAR_0 + VAR_9, VAR_0 + VAR_8) >= 0)
    break;
   VAR_4(VAR_0 + VAR_9, VAR_0 + VAR_8, VAR_2);
  }
 }
}
