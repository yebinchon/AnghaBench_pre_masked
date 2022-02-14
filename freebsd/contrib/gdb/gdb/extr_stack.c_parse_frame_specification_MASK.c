
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct value {int dummy; } ;
struct frame_info {int dummy; } ;
struct cleanup {int dummy; } ;
typedef int CORE_ADDR ;


 int VAR_0 ;
 struct frame_info* FUNC_0 (int,int *) ;
 struct frame_info* FUNC_1 (int ,int ) ;
 struct frame_info* VAR_1 ;
 int FUNC_2 (struct cleanup*) ;
 int FUNC_3 (char*,...) ;
 struct frame_info* FUNC_4 (struct frame_info*,int*) ;
 struct frame_info* FUNC_5 () ;
 int FUNC_6 (struct frame_info*) ;
 struct frame_info* FUNC_7 (struct frame_info*) ;
 struct cleanup* FUNC_8 (int ,char*) ;
 int FUNC_9 (int ) ;
 struct value* FUNC_10 (char*) ;
 char* FUNC_11 (char*,int) ;
 int FUNC_12 (struct value*) ;
 int FUNC_13 (struct value*) ;
 int VAR_2 ;

struct frame_info *
FUNC_14 (char *VAR_3)
{
  int VAR_4 = 0;

  CORE_ADDR VAR_5[4];
  int VAR_6;

  if (VAR_3)
    {
      char *VAR_7, *VAR_8;
      struct cleanup *VAR_9;

      while (*VAR_3 == ' ')
 VAR_3++;

      while (*VAR_3)
 {
   if (VAR_4 > 4)
     FUNC_3 ("Too many args in frame specification");

   for (VAR_8 = VAR_3; *VAR_8 && *VAR_8 != ' '; VAR_8++)
     ;
   VAR_7 = FUNC_11 (VAR_3, VAR_8 - VAR_3);

   {
     struct value *VAR_10;

     VAR_9 = FUNC_8 (VAR_2, VAR_7);






     VAR_10 = FUNC_10 (VAR_7);
     if (VAR_4 == 0)
       VAR_6 = FUNC_13 (VAR_10);

     VAR_5[VAR_4++] = FUNC_12 (VAR_10);
     FUNC_2 (VAR_9);
   }


   while (*VAR_8 == ' ')
     VAR_8++;
   VAR_3 = VAR_8;
 }
    }

  switch (VAR_4)
    {
    case 0:
      if (VAR_1 == ((void*)0))
 FUNC_3 ("No selected frame.");
      return VAR_1;

    case 1:
      {
 struct frame_info *VAR_11 =
 FUNC_4 (FUNC_5 (), &VAR_6);
 struct frame_info *VAR_12;

 if (VAR_6 == 0)

   return VAR_11;
 for (VAR_11 = FUNC_5 ();
      VAR_11 && FUNC_6 (VAR_11) != VAR_5[0];
      VAR_11 = FUNC_7 (VAR_11))
   ;

 if (VAR_11)
   while ((VAR_12 = FUNC_7 (VAR_11)) &&
   (FUNC_6 (VAR_12) == VAR_5[0]))
     VAR_11 = VAR_12;



      }

    default:





      if (VAR_4 == 1)
 return FUNC_1 (VAR_5[0], 0);
      FUNC_3 ("Too many args in frame specification");


    }

}
