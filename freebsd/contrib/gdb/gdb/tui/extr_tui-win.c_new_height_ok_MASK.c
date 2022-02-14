
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int height; scalar_t__ type; } ;
struct tui_win_info {TYPE_1__ generic; } ;
typedef enum tui_layout_type { ____Placeholder_tui_layout_type } tui_layout_type ;
struct TYPE_4__ {scalar_t__* list; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 struct tui_win_info* VAR_6 ;
 struct tui_win_info* VAR_7 ;
 struct tui_win_info* VAR_8 ;
 struct tui_win_info* VAR_9 ;
 int FUNC_0 () ;
 TYPE_2__* FUNC_1 () ;
 int FUNC_2 () ;

__attribute__((used)) static int
FUNC_3 (struct tui_win_info * VAR_10, int VAR_11)
{
  int VAR_12 = (VAR_11 < FUNC_2 ());

  if (VAR_12)
    {
      int VAR_13;
      enum tui_layout_type VAR_14 = FUNC_0 ();

      VAR_13 = (VAR_11 - VAR_10->generic.height) * (-1);
      if (VAR_14 == VAR_4 || VAR_14 == VAR_1)
 {
   VAR_12 = ((VAR_10->generic.type == VAR_0 &&
   VAR_11 <= (FUNC_2 () - 4) &&
   VAR_11 >= VAR_2) ||
  (VAR_10->generic.type != VAR_0 &&
   VAR_11 <= (FUNC_2 () - 2) &&
   VAR_11 >= VAR_3));
   if (VAR_12)
     {
       struct tui_win_info * VAR_15;

       if (VAR_10 == VAR_6)
  VAR_15 = (struct tui_win_info *) (FUNC_1 ())->list[0];
       else
  VAR_15 = VAR_6;
       VAR_12 = ((VAR_11 +
       (VAR_15->generic.height + VAR_13)) <= FUNC_2 ());
     }
 }
      else
 {
   int VAR_16, VAR_17, VAR_18 = 0;
   struct tui_win_info *VAR_19;
   struct tui_win_info *VAR_20;

   if (VAR_14 == VAR_5)
     {
       VAR_19 = VAR_9;
       VAR_20 = VAR_8;
     }
   else
     {
       VAR_19 = VAR_7;
       VAR_20 = (struct tui_win_info *) (FUNC_1 ())->list[0];
     }






   VAR_17 = VAR_16 =
     (VAR_19->generic.height + VAR_20->generic.height - 1)
     + VAR_6->generic.height + 1 ;
   if (VAR_10 == VAR_6)
     {

       VAR_12 = ((VAR_19->generic.height +
       VAR_20->generic.height + VAR_13) >=
      (VAR_3 * 2) &&
      VAR_11 >= VAR_2);
       if (VAR_12)
  {
    VAR_17 = VAR_11 + (VAR_19->generic.height +
       VAR_20->generic.height + VAR_13);
    VAR_18 = VAR_2;
  }
     }
   else
     {
       VAR_18 = VAR_3;





       VAR_12 = ((VAR_6->generic.height + VAR_13) > 0);
       if (!VAR_12)
  {



    if (VAR_10 == VAR_19)
      VAR_12 = (VAR_20->generic.height + VAR_13) >= VAR_18;
    else
      VAR_12 = (VAR_19->generic.height + VAR_13) >= VAR_18;
  }
       if (VAR_12)
  {
    if (VAR_10 == VAR_19)
      VAR_17 = VAR_11 +
        VAR_20->generic.height +
        VAR_6->generic.height + VAR_13;
    else
      VAR_17 = VAR_11 +
        VAR_19->generic.height +
        VAR_6->generic.height + VAR_13;
  }
     }




   if (VAR_12)
     VAR_12 = (VAR_11 >= VAR_18 && VAR_17 <= VAR_16);
 }
    }

  return VAR_12;
}
