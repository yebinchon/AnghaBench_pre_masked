
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct frame_info {struct frame_info* prev; } ;
typedef enum lval_type { ____Placeholder_lval_type } lval_type ;
typedef scalar_t__ CORE_ADDR ;


 int FUNC_0 (struct frame_info*) ;
 int FUNC_1 () ;
 int FUNC_2 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__* FUNC_3 (struct frame_info*) ;
 void* FUNC_4 (int) ;
 int FUNC_5 (struct frame_info*,int,int*,int*,scalar_t__*,int*,void*) ;
 int FUNC_6 (int ) ;
 int VAR_3 ;
 int FUNC_7 (void*,void*,int) ;
 int VAR_4 ;
 int FUNC_8 (scalar_t__,void*,int) ;
 int FUNC_9 (void*,int,scalar_t__) ;

__attribute__((used)) static void
FUNC_10 (struct frame_info *VAR_5,
     void **VAR_6,
     int VAR_7, int *VAR_8,
     enum lval_type *VAR_9, CORE_ADDR *VAR_10,
     int *VAR_11, void *VAR_12)
{






  struct frame_info *VAR_13 = VAR_5->prev;
  FUNC_6 (VAR_13 != ((void*)0));

  if (FUNC_3 (VAR_13) == ((void*)0))
    {

      FUNC_6 (FUNC_1 ());
      FUNC_0 (VAR_13);
      FUNC_6 (FUNC_3 (VAR_13) != ((void*)0));
    }

  if (FUNC_3 (VAR_13) != ((void*)0)
      && FUNC_3 (VAR_13)[VAR_7] != 0)
    {
      if (VAR_7 == VAR_2)
 {

   *VAR_8 = 0;
   *VAR_9 = VAR_4;
   *VAR_10 = 0;
   *VAR_11 = -1;
   if (VAR_12 != ((void*)0))


     FUNC_9 (VAR_12, FUNC_2 (VAR_7),
        FUNC_3 (VAR_13)[VAR_7]);
 }
      else
 {


   *VAR_8 = 0;
   *VAR_9 = VAR_3;
   *VAR_10 = FUNC_3 (VAR_13)[VAR_7];
   *VAR_11 = -1;
   if (VAR_12 != ((void*)0))
     {



       void **VAR_14 = (*VAR_6);
       if (VAR_14 == ((void*)0))
  {
    int VAR_15 = ((VAR_1 + VAR_0)
          * sizeof (void *));
    VAR_14 = FUNC_4 (VAR_15);
    (*VAR_6) = VAR_14;
  }
       if (VAR_14[VAR_7] == ((void*)0))
  {
    VAR_14[VAR_7]
      = FUNC_4 (FUNC_2 (VAR_7));
    FUNC_8 (FUNC_3 (VAR_13)[VAR_7], VAR_14[VAR_7],
          FUNC_2 (VAR_7));
  }
       FUNC_7 (VAR_12, VAR_14[VAR_7], FUNC_2 (VAR_7));





     }
 }
      return;
    }




  FUNC_5 (VAR_5, VAR_7, VAR_8, VAR_9, VAR_10,
    VAR_11, VAR_12);
}
