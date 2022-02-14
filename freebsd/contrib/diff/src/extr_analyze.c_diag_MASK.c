
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct partition {int xmid; int ymid; int lo_minimal; int hi_minimal; } ;
typedef int lin ;


 int VAR_0 ;
 int FUNC_0 (int,int) ;
 int FUNC_1 (int,int) ;
 int VAR_1 ;
 int* VAR_2 ;
 int* VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int* VAR_6 ;
 int* VAR_7 ;

__attribute__((used)) static void
FUNC_2 (lin VAR_8, lin VAR_9, lin VAR_10, lin VAR_11, bool VAR_12,
      struct partition *VAR_13)
{
  lin *const VAR_14 = VAR_3;
  lin *const VAR_15 = VAR_2;
  lin const *const VAR_16 = VAR_6;
  lin const *const VAR_17 = VAR_7;
  lin const VAR_18 = VAR_8 - VAR_11;
  lin const VAR_19 = VAR_9 - VAR_10;
  lin const VAR_20 = VAR_8 - VAR_10;
  lin const VAR_21 = VAR_9 - VAR_11;
  lin VAR_22 = VAR_20, VAR_23 = VAR_20;
  lin VAR_24 = VAR_21, VAR_25 = VAR_21;
  lin VAR_26;
  bool VAR_27 = (VAR_20 - VAR_21) & 1;


  VAR_14[VAR_20] = VAR_8;
  VAR_15[VAR_21] = VAR_9;

  for (VAR_26 = 1;; ++VAR_26)
    {
      lin VAR_28;
      bool VAR_29 = 0;


      VAR_22 > VAR_18 ? VAR_14[--VAR_22 - 1] = -1 : ++VAR_22;
      VAR_23 < VAR_19 ? VAR_14[++VAR_23 + 1] = -1 : --VAR_23;
      for (VAR_28 = VAR_23; VAR_28 >= VAR_22; VAR_28 -= 2)
 {
   lin VAR_30, VAR_31, VAR_32, VAR_33 = VAR_14[VAR_28 - 1], VAR_34 = VAR_14[VAR_28 + 1];

   if (VAR_33 >= VAR_34)
     VAR_30 = VAR_33 + 1;
   else
     VAR_30 = VAR_34;
   VAR_32 = VAR_30;
   VAR_31 = VAR_30 - VAR_28;
   while (VAR_30 < VAR_9 && VAR_31 < VAR_11 && VAR_16[VAR_30] == VAR_17[VAR_31])
     ++VAR_30, ++VAR_31;
   if (VAR_30 - VAR_32 > VAR_1)
     VAR_29 = 1;
   VAR_14[VAR_28] = VAR_30;
   if (VAR_27 && VAR_24 <= VAR_28 && VAR_28 <= VAR_25 && VAR_15[VAR_28] <= VAR_30)
     {
       VAR_13->xmid = VAR_30;
       VAR_13->ymid = VAR_31;
       VAR_13->lo_minimal = VAR_13->hi_minimal = 1;
       return;
     }
 }


      VAR_24 > VAR_18 ? VAR_15[--VAR_24 - 1] = VAR_0 : ++VAR_24;
      VAR_25 < VAR_19 ? VAR_15[++VAR_25 + 1] = VAR_0 : --VAR_25;
      for (VAR_28 = VAR_25; VAR_28 >= VAR_24; VAR_28 -= 2)
 {
   lin VAR_35, VAR_36, VAR_37, VAR_38 = VAR_15[VAR_28 - 1], VAR_39 = VAR_15[VAR_28 + 1];

   if (VAR_38 < VAR_39)
     VAR_35 = VAR_38;
   else
     VAR_35 = VAR_39 - 1;
   VAR_37 = VAR_35;
   VAR_36 = VAR_35 - VAR_28;
   while (VAR_35 > VAR_8 && VAR_36 > VAR_10 && VAR_16[VAR_35 - 1] == VAR_17[VAR_36 - 1])
     --VAR_35, --VAR_36;
   if (VAR_37 - VAR_35 > VAR_1)
     VAR_29 = 1;
   VAR_15[VAR_28] = VAR_35;
   if (!VAR_27 && VAR_22 <= VAR_28 && VAR_28 <= VAR_23 && VAR_35 <= VAR_14[VAR_28])
     {
       VAR_13->xmid = VAR_35;
       VAR_13->ymid = VAR_36;
       VAR_13->lo_minimal = VAR_13->hi_minimal = 1;
       return;
     }
 }

      if (VAR_12)
 continue;
      if (200 < VAR_26 && VAR_29 && VAR_4)
 {
   lin VAR_40 = 0;

   for (VAR_28 = VAR_23; VAR_28 >= VAR_22; VAR_28 -= 2)
     {
       lin VAR_41 = VAR_28 - VAR_20;
       lin VAR_42 = VAR_14[VAR_28];
       lin VAR_43 = VAR_42 - VAR_28;
       lin VAR_44 = (VAR_42 - VAR_8) * 2 - VAR_41;
       if (VAR_44 > 12 * (VAR_26 + (VAR_41 < 0 ? -VAR_41 : VAR_41)))
  {
    if (VAR_44 > VAR_40
        && VAR_8 + VAR_1 <= VAR_42 && VAR_42 < VAR_9
        && VAR_10 + VAR_1 <= VAR_43 && VAR_43 < VAR_11)
      {


        int VAR_45;

        for (VAR_45 = 1; VAR_16[VAR_42 - VAR_45] == VAR_17[VAR_43 - VAR_45]; VAR_45++)
   if (VAR_45 == VAR_1)
     {
       VAR_40 = VAR_44;
       VAR_13->xmid = VAR_42;
       VAR_13->ymid = VAR_43;
       break;
     }
      }
  }
     }
   if (VAR_40 > 0)
     {
       VAR_13->lo_minimal = 1;
       VAR_13->hi_minimal = 0;
       return;
     }

   VAR_40 = 0;
   for (VAR_28 = VAR_25; VAR_28 >= VAR_24; VAR_28 -= 2)
     {
       lin VAR_46 = VAR_28 - VAR_21;
       lin VAR_47 = VAR_15[VAR_28];
       lin VAR_48 = VAR_47 - VAR_28;
       lin VAR_49 = (VAR_9 - VAR_47) * 2 + VAR_46;
       if (VAR_49 > 12 * (VAR_26 + (VAR_46 < 0 ? -VAR_46 : VAR_46)))
  {
    if (VAR_49 > VAR_40
        && VAR_8 < VAR_47 && VAR_47 <= VAR_9 - VAR_1
        && VAR_10 < VAR_48 && VAR_48 <= VAR_11 - VAR_1)
      {


        int VAR_50;

        for (VAR_50 = 0; VAR_16[VAR_47 + VAR_50] == VAR_17[VAR_48 + VAR_50]; VAR_50++)
   if (VAR_50 == VAR_1 - 1)
     {
       VAR_40 = VAR_49;
       VAR_13->xmid = VAR_47;
       VAR_13->ymid = VAR_48;
       break;
     }
      }
  }
     }
   if (VAR_40 > 0)
     {
       VAR_13->lo_minimal = 0;
       VAR_13->hi_minimal = 1;
       return;
     }
 }



      if (VAR_26 >= VAR_5)
 {
   lin VAR_51, VAR_52;
   lin VAR_53, VAR_54;

   VAR_52 = VAR_54 = 0;


   VAR_51 = -1;
   for (VAR_28 = VAR_23; VAR_28 >= VAR_22; VAR_28 -= 2)
     {
       lin VAR_55 = FUNC_1 (VAR_14[VAR_28], VAR_9);
       lin VAR_56 = VAR_55 - VAR_28;
       if (VAR_11 < VAR_56)
  VAR_55 = VAR_11 + VAR_28, VAR_56 = VAR_11;
       if (VAR_51 < VAR_55 + VAR_56)
  {
    VAR_51 = VAR_55 + VAR_56;
    VAR_52 = VAR_55;
  }
     }


   VAR_53 = VAR_0;
   for (VAR_28 = VAR_25; VAR_28 >= VAR_24; VAR_28 -= 2)
     {
       lin VAR_57 = FUNC_0 (VAR_8, VAR_15[VAR_28]);
       lin VAR_58 = VAR_57 - VAR_28;
       if (VAR_58 < VAR_10)
  VAR_57 = VAR_10 + VAR_28, VAR_58 = VAR_10;
       if (VAR_57 + VAR_58 < VAR_53)
  {
    VAR_53 = VAR_57 + VAR_58;
    VAR_54 = VAR_57;
  }
     }


   if ((VAR_9 + VAR_11) - VAR_53 < VAR_51 - (VAR_8 + VAR_10))
     {
       VAR_13->xmid = VAR_52;
       VAR_13->ymid = VAR_51 - VAR_52;
       VAR_13->lo_minimal = 1;
       VAR_13->hi_minimal = 0;
     }
   else
     {
       VAR_13->xmid = VAR_54;
       VAR_13->ymid = VAR_53 - VAR_54;
       VAR_13->lo_minimal = 0;
       VAR_13->hi_minimal = 1;
     }
   return;
 }
    }
}
