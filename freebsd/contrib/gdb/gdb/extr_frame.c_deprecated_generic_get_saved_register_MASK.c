
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct frame_info {int dummy; } ;
typedef enum lval_type { ____Placeholder_lval_type } lval_type ;
typedef scalar_t__ CORE_ADDR ;


 int FUNC_0 (struct frame_info*) ;
 scalar_t__ FUNC_1 (int) ;
 int FUNC_2 (int) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_3 (int ,int ) ;
 scalar_t__* FUNC_4 (struct frame_info*) ;
 int FUNC_5 (int,char*) ;
 int FUNC_6 (char*) ;
 scalar_t__ FUNC_7 (struct frame_info*) ;
 int FUNC_8 (struct frame_info*) ;
 int FUNC_9 (struct frame_info*) ;
 scalar_t__ FUNC_10 (struct frame_info*) ;
 struct frame_info* FUNC_11 (struct frame_info*) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_12 (scalar_t__,char*,int ) ;
 int FUNC_13 (int ,int,char*) ;
 int FUNC_14 (char*,int ,scalar_t__) ;
 int VAR_5 ;

void
FUNC_15 (char *VAR_6, int *VAR_7,
           CORE_ADDR *VAR_8,
           struct frame_info *VAR_9, int VAR_10,
           enum lval_type *VAR_11)
{
  if (!VAR_5)
    FUNC_6 ("No registers.");


  if (VAR_7 != ((void*)0))
    *VAR_7 = 0;

  if (VAR_8)
    *VAR_8 = 0;






  if (VAR_9 != ((void*)0))
    {
      for (VAR_9 = FUNC_11 (VAR_9);
    FUNC_7 (VAR_9) >= 0;
    VAR_9 = FUNC_11 (VAR_9))
 {
   if (FUNC_10 (VAR_9) == VAR_0)
     {
       if (VAR_11)
  *VAR_11 = VAR_4;
       if (VAR_6)




  FUNC_13
    (FUNC_3 (FUNC_9 (VAR_9),
        FUNC_8 (VAR_9)),
     VAR_10, VAR_6);
       return;
     }

   FUNC_0 (VAR_9);
   if (FUNC_4 (VAR_9) != ((void*)0)
       && FUNC_4 (VAR_9)[VAR_10] != 0)
     {
       if (VAR_11)
  *VAR_11 = VAR_2;
       if (VAR_10 == VAR_1)
  {
    if (VAR_6)


      FUNC_14 (VAR_6,
         FUNC_2 (VAR_10),
         FUNC_4 (VAR_9)[VAR_10]);
  }
       else
  {
    if (VAR_8)
      *VAR_8 = FUNC_4 (VAR_9)[VAR_10];
    if (VAR_6)
      FUNC_12 (FUNC_4 (VAR_9)[VAR_10], VAR_6,
     FUNC_2 (VAR_10));
  }
       return;
     }
 }
    }




  if (VAR_11)
    *VAR_11 = VAR_3;
  if (VAR_8)
    *VAR_8 = FUNC_1 (VAR_10);
  if (VAR_6)
    FUNC_5 (VAR_10, VAR_6);
}
