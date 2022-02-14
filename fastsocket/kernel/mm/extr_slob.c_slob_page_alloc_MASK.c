
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct slob_page {int units; void* free; } ;
typedef int slobidx_t ;
typedef void slob_t ;


 scalar_t__ FUNC_0 (unsigned long,int) ;
 int FUNC_1 (size_t) ;
 int FUNC_2 (struct slob_page*) ;
 int FUNC_3 (void*,int,void*) ;
 scalar_t__ FUNC_4 (void*) ;
 void* FUNC_5 (void*) ;
 int FUNC_6 (void*) ;

__attribute__((used)) static void *FUNC_7(struct slob_page *VAR_0, size_t VAR_1, int VAR_2)
{
 slob_t *VAR_3, *VAR_4, *VAR_5 = ((void*)0);
 int VAR_6 = 0, VAR_7 = FUNC_1(VAR_1);

 for (VAR_3 = ((void*)0), VAR_4 = VAR_0->free; ; VAR_3 = VAR_4, VAR_4 = FUNC_5(VAR_4)) {
  slobidx_t VAR_8 = FUNC_6(VAR_4);

  if (VAR_2) {
   VAR_5 = (slob_t *)FUNC_0((unsigned long)VAR_4, VAR_2);
   VAR_6 = VAR_5 - VAR_4;
  }
  if (VAR_8 >= VAR_7 + VAR_6) {
   slob_t *VAR_9;

   if (VAR_6) {
    VAR_9 = FUNC_5(VAR_4);
    FUNC_3(VAR_5, VAR_8 - VAR_6, VAR_9);
    FUNC_3(VAR_4, VAR_6, VAR_5);
    VAR_3 = VAR_4;
    VAR_4 = VAR_5;
    VAR_8 = FUNC_6(VAR_4);
   }

   VAR_9 = FUNC_5(VAR_4);
   if (VAR_8 == VAR_7) {
    if (VAR_3)
     FUNC_3(VAR_3, FUNC_6(VAR_3), VAR_9);
    else
     VAR_0->free = VAR_9;
   } else {
    if (VAR_3)
     FUNC_3(VAR_3, FUNC_6(VAR_3), VAR_4 + VAR_7);
    else
     VAR_0->free = VAR_4 + VAR_7;
    FUNC_3(VAR_4 + VAR_7, VAR_8 - VAR_7, VAR_9);
   }

   VAR_0->units -= VAR_7;
   if (!VAR_0->units)
    FUNC_2(VAR_0);
   return VAR_4;
  }
  if (FUNC_4(VAR_4))
   return ((void*)0);
 }
}
