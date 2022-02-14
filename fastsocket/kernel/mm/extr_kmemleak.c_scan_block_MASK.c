
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kmemleak_object {int lock; int gray_list; int count; } ;


 void* VAR_0 ;
 unsigned long* FUNC_0 (void*,void*) ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (struct kmemleak_object*) ;
 int FUNC_2 (struct kmemleak_object*) ;
 int FUNC_3 () ;
 struct kmemleak_object* FUNC_4 (unsigned long,int) ;
 int VAR_2 ;
 int FUNC_5 (unsigned long,void*) ;
 int FUNC_6 (int *,int *) ;
 int FUNC_7 (struct kmemleak_object*) ;
 scalar_t__ FUNC_8 () ;
 int FUNC_9 (int *,unsigned long,int ) ;
 int FUNC_10 (int *,unsigned long) ;

__attribute__((used)) static void FUNC_11(void *VAR_3, void *VAR_4,
         struct kmemleak_object *VAR_5, int VAR_6)
{
 unsigned long *VAR_7;
 unsigned long *VAR_8 = FUNC_0(VAR_3, VAR_0);
 unsigned long *VAR_9 = VAR_4 - (VAR_0 - 1);

 for (VAR_7 = VAR_8; VAR_7 < VAR_9; VAR_7++) {
  struct kmemleak_object *VAR_10;
  unsigned long VAR_11;
  unsigned long VAR_12;

  if (VAR_6)
   FUNC_3();
  if (FUNC_8())
   break;


  if (!FUNC_5((unsigned long)VAR_7,
        VAR_0))
   continue;

  VAR_12 = *VAR_7;

  VAR_10 = FUNC_4(VAR_12, 1);
  if (!VAR_10)
   continue;
  if (VAR_10 == VAR_5) {

   FUNC_7(VAR_10);
   continue;
  }






  FUNC_9(&VAR_10->lock, VAR_11,
      VAR_1);
  if (!FUNC_2(VAR_10)) {

   FUNC_10(&VAR_10->lock, VAR_11);
   FUNC_7(VAR_10);
   continue;
  }







  VAR_10->count++;
  if (FUNC_1(VAR_10))
   FUNC_6(&VAR_10->gray_list, &VAR_2);
  else
   FUNC_7(VAR_10);
  FUNC_10(&VAR_10->lock, VAR_11);
 }
}
