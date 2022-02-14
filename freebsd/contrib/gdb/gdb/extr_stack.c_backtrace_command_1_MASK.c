
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct partial_symtab {int dummy; } ;
struct frame_info {int dummy; } ;


 int FUNC_0 (struct partial_symtab*) ;
 int VAR_0 ;
 int FUNC_1 (char*) ;
 struct partial_symtab* FUNC_2 (int ) ;
 int VAR_1 ;
 struct frame_info* FUNC_3 () ;
 int FUNC_4 (struct frame_info*) ;
 struct frame_info* FUNC_5 (struct frame_info*) ;
 scalar_t__ VAR_2 ;
 int FUNC_6 (char*) ;
 int FUNC_7 (struct frame_info*,int,int ,int) ;
 int FUNC_8 (struct frame_info*,int,int ) ;
 int FUNC_9 (char*) ;
 int VAR_3 ;

__attribute__((used)) static void
FUNC_10 (char *VAR_4, int VAR_5, int VAR_6)
{
  struct frame_info *VAR_7;
  int VAR_8;
  int VAR_9;
  struct frame_info *VAR_10;
  int VAR_11;

  if (!VAR_3)
    FUNC_1 ("No stack.");





  VAR_10 = FUNC_3 ();



  if (VAR_10 == ((void*)0))
    FUNC_1 ("No stack.");

  VAR_11 = 0;
  if (VAR_4)
    {
      VAR_8 = FUNC_6 (VAR_4);
      if (VAR_8 < 0)
 {
   struct frame_info *VAR_12;

   VAR_8 = -VAR_8;

   VAR_12 = VAR_10;
   while (VAR_12 && VAR_8--)
     {
       VAR_0;
       VAR_12 = FUNC_5 (VAR_12);
     }



   while (VAR_12)
     {
       VAR_0;
       VAR_10 = FUNC_5 (VAR_10);
       VAR_12 = FUNC_5 (VAR_12);
       VAR_11++;
     }

   VAR_8 = -1;
 }
    }
  else
    VAR_8 = -1;

  if (VAR_2)
    {
      struct partial_symtab *VAR_13;






      VAR_9 = VAR_8;
      for (VAR_7 = VAR_10;
    VAR_7 != ((void*)0) && VAR_9--;
    VAR_7 = FUNC_5 (VAR_7))
 {
   VAR_0;
   VAR_13 = FUNC_2 (FUNC_4 (VAR_7));
   if (VAR_13)
     FUNC_0 (VAR_13);
 }
    }

  for (VAR_9 = 0, VAR_7 = VAR_10;
       VAR_7 && VAR_8--;
       VAR_9++, VAR_7 = FUNC_5 (VAR_7))
    {
      VAR_0;





      FUNC_7 (VAR_7, VAR_11 + VAR_9, 0, 1);
      if (VAR_5)
 FUNC_8 (VAR_7, 1, VAR_1);
    }


  if (VAR_7 && VAR_6)
    FUNC_9 ("(More stack frames follow...)\n");
}
