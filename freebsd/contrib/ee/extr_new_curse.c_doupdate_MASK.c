
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_1__ ;


struct _line {char* row; char* attributes; scalar_t__ last_char; int number; void* changed; struct _line* next_screen; struct _line* prev_screen; } ;
struct TYPE_10__ {int Num_cols; int Num_lines; int SR; int LY; int LX; struct _line* first_line; scalar_t__ scroll_down; scalar_t__ scroll_up; } ;
typedef TYPE_1__ WINDOW ;


 int VAR_0 ;
 scalar_t__* VAR_1 ;
 int FUNC_0 (TYPE_1__*,int,int) ;
 int FUNC_1 (char,char,char*,char*,int) ;
 int FUNC_2 (struct _line*,struct _line*) ;
 int VAR_2 ;
 int VAR_3 ;
 struct _line* FUNC_3 (int,int,TYPE_1__*) ;
 void* VAR_4 ;
 struct _line* FUNC_4 (int,int,TYPE_1__*) ;
 int VAR_5 ;
 int FUNC_5 (TYPE_1__*,int,int) ;
 char VAR_6 ;
 char VAR_7 ;
 int FUNC_6 (int *,int*,int) ;
 int ** VAR_8 ;
 void* VAR_9 ;
 int FUNC_7 () ;
 size_t VAR_10 ;
 int FUNC_8 (TYPE_1__*,int,int,struct _line*,struct _line*) ;
 int FUNC_9 (TYPE_1__*,int,int,struct _line*,struct _line*) ;
 size_t VAR_11 ;
 size_t VAR_12 ;
 TYPE_1__* VAR_13 ;
 size_t VAR_14 ;
 scalar_t__ FUNC_10 (char) ;
 size_t VAR_15 ;
 size_t VAR_16 ;
 int FUNC_11 (int,int) ;
 int VAR_17 ;
 scalar_t__ VAR_18 ;
 int FUNC_12 (char) ;
 struct _line* VAR_19 ;
 void** VAR_20 ;
 TYPE_1__* VAR_21 ;
 size_t VAR_22 ;

void
FUNC_13()
{
 WINDOW *VAR_23;
 int VAR_24;
 int VAR_25;
 int VAR_26, VAR_27;
 int VAR_28, VAR_29;
 int VAR_30, VAR_31;
 int VAR_32, VAR_33, VAR_34;
 int VAR_35;
 int VAR_36;
 int VAR_37;
 int VAR_38;
 int VAR_39[10];
 int VAR_40;

 struct _line *VAR_41;
 struct _line *VAR_42;
 struct _line *VAR_43;

 struct _line *VAR_44;

 struct _line *VAR_45, *VAR_46;

 char *VAR_47;
 char *VAR_48;
 char *VAR_49;
 char *VAR_50;
 char *VAR_51, *VAR_52;
 char *VAR_53, *VAR_54;

 char VAR_55 = VAR_4;

 VAR_23 = VAR_21;

 if ((VAR_17 & VAR_0) != 0)
  VAR_55 = VAR_9;

 if (VAR_6)
 {
  if (VAR_8[VAR_11])
   FUNC_6(VAR_8[VAR_11], ((void*)0), 0);
  else
  {
   VAR_32 = 0;
   while (VAR_32 < VAR_5)
   {
    FUNC_5(VAR_13, VAR_32, 0);
    if (VAR_8[VAR_10] != ((void*)0))
     FUNC_6(VAR_8[VAR_10], ((void*)0), 0);
    else
    {
     for (VAR_31 = 0; VAR_31 < VAR_23->Num_cols; VAR_31++)
      FUNC_12(' ');
    }
    VAR_32++;
   }
  }
  for (VAR_32 = 0, VAR_41 = VAR_13->first_line; VAR_32 < VAR_13->Num_lines; VAR_32++, VAR_41 = VAR_41->next_screen)
  {
   FUNC_5(VAR_13, VAR_32, 0);
   for (VAR_31 = 0; (VAR_41->row[VAR_31] != '\0') && (VAR_31 < VAR_13->Num_cols); VAR_31++)
   {
    FUNC_1(VAR_41->row[VAR_31], VAR_41->attributes[VAR_31], VAR_41->row, VAR_41->attributes, VAR_31);
   }
   if (VAR_7)
   {
    VAR_7 = VAR_4;
    FUNC_5(VAR_13, VAR_32, VAR_31);
    FUNC_7();
   }
  }
  VAR_6 = VAR_4;
 }

 VAR_24 = 0;
 VAR_25 = VAR_4;
 VAR_19 = VAR_13->first_line;

 for (VAR_32 = 0, VAR_41 = VAR_19, VAR_42 = VAR_23->first_line;
   VAR_32 < VAR_23->Num_lines; VAR_32++)
 {
  VAR_20[VAR_32] = VAR_9;
  if ((VAR_24 = FUNC_2(VAR_41, VAR_42)) > 0)
  {
   VAR_20[VAR_32] = VAR_4;
   VAR_25 = VAR_9;
  }
  VAR_41 = VAR_41->next_screen;
  VAR_42 = VAR_42->next_screen;
 }

 VAR_32 = 0;
 VAR_42 = VAR_23->first_line;
 VAR_41 = VAR_19;
 VAR_24 = 0;



 if (VAR_25)
 {
  VAR_38 = -1;
  VAR_35 = VAR_4;
  for (VAR_37 = VAR_23->Num_lines;
      (VAR_37 > VAR_32) && (VAR_20[VAR_37 - 1]);
       VAR_37--)
   ;
  for (VAR_38 = 0;
      (VAR_38 < VAR_23->Num_lines) && (VAR_20[VAR_38]== VAR_4);
       VAR_38++)
   ;
  while ((VAR_32 < VAR_37) && VAR_18)

  {

   if (VAR_32 >= VAR_38)
   {
    for (VAR_38 = VAR_32;
         (VAR_38 < VAR_23->Num_lines) &&
         (VAR_20[VAR_38] == VAR_4);
          VAR_38++)
     ;
   }
   if (!VAR_20[VAR_32])
   {
    VAR_25 = VAR_9;



    for (VAR_33 = VAR_32+1, VAR_43 = VAR_41->next_screen;
     ((VAR_23->scroll_up) && (VAR_25) &&
     (VAR_33 < VAR_38) &&
     (!VAR_20[VAR_33]));
      VAR_33++)
    {
     if ((FUNC_2(VAR_43, VAR_42) == -1) && (!VAR_20[VAR_32]))
     {





      for (VAR_40 = VAR_33, VAR_45 = VAR_43,
           VAR_46 = VAR_42, VAR_30 = 0;
       (VAR_40 < VAR_23->Num_lines) &&
        (FUNC_2(VAR_45, VAR_46) <= 0);
        VAR_40++, VAR_45 = VAR_45->next_screen,
        VAR_46 = VAR_46->next_screen,
        VAR_30++)
       ;
      if (VAR_30 > 3)
      {
       if (VAR_8[VAR_12])
       {
        VAR_39[1] = VAR_32;
        VAR_39[0] = FUNC_11((VAR_40 - 1), (VAR_23->Num_lines - 1));
        FUNC_6(VAR_8[VAR_12], VAR_39, 2);
        VAR_3 = VAR_2 = -1;
       }

       for (VAR_34 = (VAR_33 - VAR_32); (VAR_34 > 0); VAR_34--)
       {
        VAR_43 = FUNC_3(VAR_32, FUNC_11((VAR_40 - 1), (VAR_23->Num_lines - 1)), VAR_23);
        VAR_25 = VAR_4;
       }

       if (VAR_8[VAR_12])
       {
        VAR_39[1] = 0;
        VAR_39[0] = VAR_5 - 1;
        FUNC_6(VAR_8[VAR_12], VAR_39, 2);
        VAR_3 = VAR_2 = -1;
       }

       VAR_19 = VAR_13->first_line;
       VAR_41 = VAR_19;
       for (VAR_34 = 0; VAR_34 < VAR_32; VAR_34++)
        VAR_41 = VAR_41->next_screen;
       for (VAR_34 = VAR_32, VAR_43=VAR_41, VAR_44=VAR_42;
          VAR_34 < VAR_23->Num_lines;
          VAR_43=VAR_43->next_screen, VAR_44=VAR_44->next_screen,
          VAR_34++)
       {
        VAR_24 = FUNC_2(VAR_43, VAR_44);
        VAR_20[VAR_34] = (VAR_24 > 0 ? VAR_4 : VAR_9);
       }
      }
     }
     else
      VAR_43 = VAR_43->next_screen;
    }



    for (VAR_33 = VAR_32-1, VAR_43 = VAR_41->prev_screen;
     ((VAR_23->scroll_down) && (VAR_33 >= 0) &&
     (VAR_25) &&
     (!VAR_20[VAR_33]));
       VAR_33--)
    {
     if (FUNC_2(VAR_43, VAR_42) == -1)
     {





      for (VAR_40 = VAR_32, VAR_45 = VAR_43,
           VAR_46 = VAR_42, VAR_30 = 0;
       (VAR_40 < VAR_23->Num_lines) &&
        (FUNC_2(VAR_45, VAR_46) <= 0);
        VAR_40++, VAR_45 = VAR_45->next_screen,
        VAR_46 = VAR_46->next_screen,
        VAR_30++)
       ;
      if (VAR_30 > 3)
      {
       if (VAR_8[VAR_12])
       {
        VAR_39[1] = VAR_33;
        VAR_39[0] = FUNC_11((VAR_40 - 1), (VAR_23->Num_lines - 1));
        FUNC_6(VAR_8[VAR_12], VAR_39, 2);
        VAR_3 = VAR_2 = -1;
       }

       for (VAR_34 = (VAR_32 - VAR_33); (VAR_34 > 0); VAR_34--)
       {
        VAR_43 = FUNC_4(VAR_33, FUNC_11((VAR_40 - 1), (VAR_23->Num_lines -1)), VAR_23);
        VAR_25 = VAR_4;
       }

       if (VAR_8[VAR_12])
       {
        VAR_39[1] = 0;
        VAR_39[0] = VAR_5 - 1;
        FUNC_6(VAR_8[VAR_12], VAR_39, 2);
        VAR_3 = VAR_2 = -1;
       }

       VAR_19 = VAR_13->first_line;
       VAR_41 = VAR_19;
       for (VAR_34 = 0; VAR_34 < VAR_32; VAR_34++)
        VAR_41 = VAR_41->next_screen;
       for (VAR_34 = VAR_32, VAR_43=VAR_41, VAR_44=VAR_42;
          VAR_34 < VAR_23->Num_lines;
          VAR_43=VAR_43->next_screen, VAR_44=VAR_44->next_screen,
          VAR_34++)
       {
        VAR_24 = FUNC_2(VAR_43, VAR_44);
        VAR_20[VAR_34] = (VAR_24 > 0 ? VAR_4 : VAR_9);
       }
      }
     }
     else
      VAR_43 = VAR_43->prev_screen;
    }
   }
   VAR_32++;
   VAR_41 = VAR_41->next_screen;
   VAR_42 = VAR_42->next_screen;
  }
 }







 for (VAR_32 = 0, VAR_41 = VAR_13->first_line; VAR_32 < VAR_23->SR; VAR_32++)
  VAR_41 = VAR_41->next_screen;
 VAR_19 = VAR_41;
 for (VAR_32 = 0, VAR_41 = VAR_19, VAR_42 = VAR_23->first_line; VAR_32 < VAR_23->Num_lines; VAR_32++, VAR_41 = VAR_41->next_screen, VAR_42 = VAR_42->next_screen)
 {
  if (((VAR_8[VAR_15]) || (VAR_8[VAR_16])) &&
      (VAR_8[VAR_14]) && (VAR_41->row[0] != '\0') &&
      (!VAR_55))
  {
   VAR_31 = 0;
   VAR_36 = VAR_9;
   VAR_48 = VAR_42->row;
   VAR_50 = VAR_42->attributes;
   VAR_47 = VAR_41->row;
   VAR_49 = VAR_41->attributes;
   while ((VAR_48[VAR_31] != '\0') && (VAR_31 < VAR_23->Num_cols))
   {
    if ((VAR_7) && (VAR_1[VAR_22]))
    {
     while ((VAR_48[VAR_31] == VAR_47[VAR_31]) && (VAR_50[VAR_31] == VAR_49[VAR_31]) && (VAR_48[VAR_31] != '\0') && (VAR_50[VAR_31]))
      VAR_31++;
     if ((VAR_7) && (!VAR_50[VAR_31]))
     {
      VAR_7 = VAR_4;
      FUNC_5(VAR_23, VAR_32, VAR_31);
      FUNC_7();
      FUNC_7();
     }
    }
    else
    {
     while ((VAR_48[VAR_31] == VAR_47[VAR_31]) && (VAR_50[VAR_31] == VAR_49[VAR_31]) && (VAR_48[VAR_31] != '\0'))
      VAR_31++;
    }
    if ((VAR_50[VAR_31] != VAR_49[VAR_31]) && (VAR_49[VAR_31]) && (VAR_1[VAR_22]))
    {
     FUNC_5(VAR_23, VAR_32, VAR_31);

     FUNC_7();
     FUNC_7();
    }
    if (VAR_48[VAR_31] != '\0')
    {
     VAR_27 = VAR_31;
     VAR_26 = VAR_31;
     VAR_28 = VAR_31;
     VAR_29 = VAR_31;
     if ((VAR_36) && (VAR_42->changed))
     {
      if (VAR_41->last_char <= VAR_42->last_char)
       VAR_35 = FUNC_9(VAR_23, VAR_32, VAR_31, VAR_42, VAR_41);
     }
     VAR_35 = FUNC_8(VAR_23, VAR_32, VAR_31, VAR_42, VAR_41);
     VAR_36 = VAR_4;
     VAR_42->changed = VAR_4;
     if (!VAR_35)
      VAR_35 = FUNC_9(VAR_23, VAR_32, VAR_31, VAR_42, VAR_41);
     if (((!VAR_35) || (VAR_47[VAR_31] != VAR_48[VAR_31]) || (VAR_49[VAR_31] != VAR_50[VAR_31])) && (VAR_31 < VAR_23->Num_cols))
     {
      if ((VAR_48[VAR_31] == ' ') && (VAR_47[VAR_31] == '\0') && (VAR_50[VAR_31] == VAR_49[VAR_31]))
       VAR_47[VAR_31] = ' ';
      else
      {
       FUNC_5(VAR_23, VAR_32, VAR_31);
       FUNC_1(VAR_48[VAR_31], VAR_50[VAR_31], VAR_47, VAR_49, VAR_31);
      }
     }
     if ((VAR_48[VAR_31] != '\0'))
      VAR_31++;
    }
    if ((VAR_7) && (!VAR_50[VAR_31]))
    {
     VAR_7 = VAR_4;
     FUNC_5(VAR_23, VAR_32, VAR_31);
     FUNC_7();
    }
   }
   if ((VAR_48[VAR_31] == '\0') && (VAR_47[VAR_31] != '\0'))
   {
    FUNC_5(VAR_23, VAR_32, VAR_31);
    FUNC_0(VAR_23, VAR_32, VAR_31);
   }
  }
  else
  {
   VAR_31 = 0;
   VAR_53 = VAR_41->row;
   VAR_51 = VAR_41->attributes;
   VAR_54 = VAR_42->row;
   VAR_52 = VAR_42->attributes;
   while ((VAR_31 < VAR_23->Num_cols) && (VAR_54[VAR_31] != '\0'))
   {
    while ((VAR_53[VAR_31] == VAR_54[VAR_31]) && (VAR_51[VAR_31] == VAR_52[VAR_31]) && (VAR_31 < VAR_23->Num_cols) && (VAR_54[VAR_31] != '\0'))
     VAR_31++;






    if ((VAR_55) && (FUNC_10(VAR_53[VAR_31 - 1])))
     VAR_31--;
    VAR_26 = VAR_31;
    VAR_27 = VAR_31;
    if ((VAR_31 < VAR_23->Num_cols) && (VAR_54[VAR_31] != '\0'))
    {
     FUNC_5(VAR_23, VAR_32, VAR_26);
     FUNC_0(VAR_23, VAR_32, VAR_31);
     FUNC_5(VAR_23, VAR_32, VAR_26);
     for (VAR_31 = VAR_26; (VAR_54[VAR_31] != '\0') && (VAR_31 < VAR_23->Num_cols); VAR_31++)
      FUNC_1(VAR_54[VAR_31], VAR_52[VAR_31], VAR_53, VAR_51, VAR_31);
    }
   }
   if ((VAR_54[VAR_31] == '\0') && (VAR_53[VAR_31] != '\0'))
   {
    FUNC_5(VAR_23, VAR_32, VAR_31);
    FUNC_0(VAR_23, VAR_32, VAR_31);
   }
  }
  if (VAR_7)
  {
   VAR_7 = VAR_4;
   FUNC_5(VAR_23, VAR_32, VAR_31);
   FUNC_7();
  }
  VAR_42->number = VAR_32;
 }
 FUNC_5(VAR_23, VAR_23->LY, VAR_23->LX);
}
