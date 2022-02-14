
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct slob_page {int units; void* free; } ;
typedef int slobidx_t ;
typedef void slob_t ;


 int FUNC_0 (int) ;
 unsigned long VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int) ;
 int FUNC_2 (void*) ;
 int FUNC_3 (struct slob_page*) ;
 int FUNC_4 (struct slob_page*) ;
 int FUNC_5 (struct slob_page*) ;
 int VAR_2 ;
 int FUNC_6 (void*,int,void*) ;
 int FUNC_7 (struct slob_page*,int *) ;
 int FUNC_8 (void*,int ) ;
 int FUNC_9 (void*) ;
 int VAR_3 ;
 void* FUNC_10 (void*) ;
 struct slob_page* FUNC_11 (void*) ;
 scalar_t__ FUNC_12 (struct slob_page*) ;
 int FUNC_13 (void*) ;
 int FUNC_14 (int *,unsigned long) ;
 int FUNC_15 (int *,unsigned long) ;
 scalar_t__ FUNC_16 (int ) ;

__attribute__((used)) static void FUNC_17(void *VAR_4, int VAR_5)
{
 struct slob_page *VAR_6;
 slob_t *VAR_7, *VAR_8, *VAR_9 = (slob_t *)VAR_4;
 slobidx_t VAR_10;
 unsigned long VAR_11;

 if (FUNC_16(FUNC_2(VAR_4)))
  return;
 FUNC_0(!VAR_5);

 VAR_6 = FUNC_11(VAR_4);
 VAR_10 = FUNC_1(VAR_5);

 FUNC_14(&VAR_3, VAR_11);

 if (VAR_6->units + VAR_10 == FUNC_1(VAR_1)) {

  if (FUNC_12(VAR_6))
   FUNC_4(VAR_6);
  FUNC_15(&VAR_3, VAR_11);
  FUNC_3(VAR_6);
  FUNC_5(VAR_6);
  FUNC_8(VAR_9, 0);
  return;
 }

 if (!FUNC_12(VAR_6)) {

  VAR_6->units = VAR_10;
  VAR_6->free = VAR_9;
  FUNC_6(VAR_9, VAR_10,
   (void *)((unsigned long)(VAR_9 +
     FUNC_1(VAR_1)) & VAR_0));
  FUNC_7(VAR_6, &VAR_2);
  goto out;
 }





 VAR_6->units += VAR_10;

 if (VAR_9 < VAR_6->free) {
  if (VAR_9 + VAR_10 == VAR_6->free) {
   VAR_10 += FUNC_13(VAR_6->free);
   VAR_6->free = FUNC_10(VAR_6->free);
  }
  FUNC_6(VAR_9, VAR_10, VAR_6->free);
  VAR_6->free = VAR_9;
 } else {
  VAR_7 = VAR_6->free;
  VAR_8 = FUNC_10(VAR_7);
  while (VAR_9 > VAR_8) {
   VAR_7 = VAR_8;
   VAR_8 = FUNC_10(VAR_7);
  }

  if (!FUNC_9(VAR_7) && VAR_9 + VAR_10 == VAR_8) {
   VAR_10 += FUNC_13(VAR_8);
   FUNC_6(VAR_9, VAR_10, FUNC_10(VAR_8));
  } else
   FUNC_6(VAR_9, VAR_10, VAR_8);

  if (VAR_7 + FUNC_13(VAR_7) == VAR_9) {
   VAR_10 = FUNC_13(VAR_9) + FUNC_13(VAR_7);
   FUNC_6(VAR_7, VAR_10, FUNC_10(VAR_9));
  } else
   FUNC_6(VAR_7, FUNC_13(VAR_7), VAR_9);
 }
out:
 FUNC_15(&VAR_3, VAR_11);
}
