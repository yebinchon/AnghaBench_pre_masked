
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int bfd_vma ;
typedef scalar_t__ bfd_signed_vma ;
struct TYPE_2__ {int mod; int rm; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int*) ;
 char* VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int FUNC_1 (int) ;
 scalar_t__ VAR_14 ;
 int FUNC_2 () ;

 void* VAR_15 ;
 int* VAR_16 ;





 size_t VAR_17 ;
 size_t VAR_18 ;
 int FUNC_3 () ;
 int FUNC_4 () ;
 char** VAR_19 ;
 int FUNC_5 (int,int) ;
 scalar_t__ VAR_20 ;

 scalar_t__ VAR_21 ;
 TYPE_1__ VAR_22 ;
 char** VAR_23 ;
 char** VAR_24 ;
 char** VAR_25 ;
 char** VAR_26 ;
 char** VAR_27 ;
 char** VAR_28 ;
 int FUNC_6 (char*) ;
 char* VAR_29 ;
 void* VAR_30 ;
 int VAR_31 ;
 int FUNC_7 (char*,int) ;
 int FUNC_8 (char*,int,int) ;

 int VAR_32 ;
 int VAR_33 ;
 char* VAR_34 ;
 int VAR_35 ;
 int FUNC_9 (int,int) ;
 int FUNC_10 (char*,char*,int) ;

 int VAR_36 ;
 int VAR_37 ;



__attribute__((used)) static void
FUNC_11 (int VAR_38, int VAR_39)
{
  bfd_vma VAR_40;
  int VAR_41 = 0;
  int VAR_42 = 0;
  FUNC_1 (VAR_11);
  if (VAR_32 & VAR_11)
    VAR_41 += 8;


  VAR_3;
  VAR_16++;

  if (VAR_22.mod == 3)
    {
      switch (VAR_38)
 {
 case 138:
   FUNC_1 (0);
   if (VAR_32)
     FUNC_6 (VAR_27[VAR_22.rm + VAR_41]);
   else
     FUNC_6 (VAR_26[VAR_22.rm + VAR_41]);
   break;
 case 128:
   FUNC_6 (VAR_23[VAR_22.rm + VAR_41]);
   break;
 case 137:
   FUNC_6 (VAR_24[VAR_22.rm + VAR_41]);
   break;
 case 131:
   FUNC_6 (VAR_25[VAR_22.rm + VAR_41]);
   break;
 case 132:
   if (VAR_14 == VAR_21)
     FUNC_6 (VAR_25[VAR_22.rm + VAR_41]);
   else
     FUNC_6 (VAR_24[VAR_22.rm + VAR_41]);
   break;
 case 130:
   if (VAR_14 == VAR_21 && (VAR_39 & VAR_1))
     {
       FUNC_6 (VAR_25[VAR_22.rm + VAR_41]);
       VAR_37 |= (VAR_31 & VAR_5);
       break;
     }
   VAR_38 = 129;

 case 129:
 case 136:
 case 135:
 case 134:
 case 133:
   FUNC_1 (VAR_12);
   if (VAR_32 & VAR_12)
     FUNC_6 (VAR_25[VAR_22.rm + VAR_41]);
   else if ((VAR_39 & VAR_1) || VAR_38 != 129)
     FUNC_6 (VAR_24[VAR_22.rm + VAR_41]);
   else
     FUNC_6 (VAR_23[VAR_22.rm + VAR_41]);
   VAR_37 |= (VAR_31 & VAR_5);
   break;
 case 0:
   break;
 default:
   FUNC_6 (VAR_2);
   break;
 }
      return;
    }

  VAR_40 = 0;
  if (VAR_20)
    FUNC_5 (VAR_38, VAR_39);
  FUNC_2 ();

  if ((VAR_39 & VAR_0) || VAR_14 == VAR_21)
    {

      int VAR_43;
      int VAR_44;
      int VAR_45;
      int VAR_46;
      int VAR_47 = 0;
      int VAR_48 = 0;

      VAR_44 = 0;
      VAR_45 = 1;
      VAR_46 = VAR_22.rm;

      if (VAR_46 == 4)
 {
   VAR_44 = 1;
   (void) FUNC_0 (VAR_36, VAR_16 + 1);
   VAR_47 = (*VAR_16 >> 3) & 7;
   if (VAR_14 == VAR_21 || VAR_47 != 0x4)

     VAR_48 = (*VAR_16 >> 6) & 3;
   VAR_46 = *VAR_16 & 7;
   FUNC_1 (VAR_13);
   if (VAR_32 & VAR_13)
     VAR_47 += 8;
   VAR_16++;
 }
      VAR_46 += VAR_41;

      switch (VAR_22.mod)
 {
 case 0:
   if ((VAR_46 & 7) == 5)
     {
       VAR_45 = 0;
       if (VAR_14 == VAR_21 && !VAR_44)
  VAR_42 = 1;
       VAR_40 = FUNC_4 ();
     }
   break;
 case 1:
   FUNC_0 (VAR_36, VAR_16 + 1);
   VAR_40 = *VAR_16++;
   if ((VAR_40 & 0x80) != 0)
     VAR_40 -= 0x100;
   break;
 case 2:
   VAR_40 = FUNC_4 ();
   break;
 }

      VAR_43 = VAR_45 || (VAR_44 && (VAR_47 != 4 || VAR_48 != 0));

      if (!VAR_20)
 if (VAR_22.mod != 0 || (VAR_46 & 7) == 5)
   {
     if (VAR_43 || VAR_42)
       FUNC_7 (VAR_34, VAR_40);
     else
       FUNC_8 (VAR_34, 1, VAR_40);
     FUNC_6 (VAR_34);
     if (VAR_42)
       {
  FUNC_9 (VAR_40, 1);
  FUNC_6 ("(%rip)");
       }
   }

      if (VAR_43 || (VAR_20 && VAR_42))
 {
   *VAR_29++ = VAR_30;
   if (VAR_20 && VAR_42)
     {
       FUNC_9 (VAR_40, 1);
       FUNC_6 ("rip");
     }
   *VAR_29 = '\0';
   if (VAR_45)
     FUNC_6 (VAR_14 == VAR_21 && (VAR_39 & VAR_0)
       ? VAR_25[VAR_46] : VAR_24[VAR_46]);
   if (VAR_44)
     {
       if (VAR_47 != 4)
  {
    if (!VAR_20 || VAR_45)
      {
        *VAR_29++ = VAR_35;
        *VAR_29 = '\0';
      }
    FUNC_6 (VAR_14 == VAR_21 && (VAR_39 & VAR_0)
      ? VAR_25[VAR_47] : VAR_24[VAR_47]);
  }
       if (VAR_48 != 0 || (!VAR_20 && VAR_47 != 4))
  {
    *VAR_29++ = VAR_33;
    *VAR_29 = '\0';
    FUNC_10 (VAR_34, "%d", 1 << VAR_48);
    FUNC_6 (VAR_34);
  }
     }
   if (VAR_20
       && (VAR_40 || VAR_22.mod != 0 || (VAR_46 & 7) == 5))
     {
       if ((bfd_signed_vma) VAR_40 >= 0)
  {
    *VAR_29++ = '+';
    *VAR_29 = '\0';
  }
       else if (VAR_22.mod != 1)
  {
    *VAR_29++ = '-';
    *VAR_29 = '\0';
    VAR_40 = - (bfd_signed_vma) VAR_40;
  }

       FUNC_7 (VAR_34, VAR_40);
       FUNC_6 (VAR_34);
     }

   *VAR_29++ = VAR_15;
   *VAR_29 = '\0';
 }
      else if (VAR_20)
 {
   if (VAR_22.mod != 0 || (VAR_46 & 7) == 5)
     {
       if (VAR_31 & (VAR_4 | VAR_10 | VAR_6
         | VAR_7 | VAR_8 | VAR_9))
  ;
       else
  {
    FUNC_6 (VAR_28[VAR_17 - VAR_18]);
    FUNC_6 (":");
  }
       FUNC_8 (VAR_34, 1, VAR_40);
       FUNC_6 (VAR_34);
     }
 }
    }
  else
    {
      switch (VAR_22.mod)
 {
 case 0:
   if (VAR_22.rm == 6)
     {
       VAR_40 = FUNC_3 ();
       if ((VAR_40 & 0x8000) != 0)
  VAR_40 -= 0x10000;
     }
   break;
 case 1:
   FUNC_0 (VAR_36, VAR_16 + 1);
   VAR_40 = *VAR_16++;
   if ((VAR_40 & 0x80) != 0)
     VAR_40 -= 0x100;
   break;
 case 2:
   VAR_40 = FUNC_3 ();
   if ((VAR_40 & 0x8000) != 0)
     VAR_40 -= 0x10000;
   break;
 }

      if (!VAR_20)
 if (VAR_22.mod != 0 || VAR_22.rm == 6)
   {
     FUNC_7 (VAR_34, VAR_40);
     FUNC_6 (VAR_34);
   }

      if (VAR_22.mod != 0 || VAR_22.rm != 6)
 {
   *VAR_29++ = VAR_30;
   *VAR_29 = '\0';
   FUNC_6 (VAR_19[VAR_22.rm]);
   if (VAR_20
       && (VAR_40 || VAR_22.mod != 0 || VAR_22.rm == 6))
     {
       if ((bfd_signed_vma) VAR_40 >= 0)
  {
    *VAR_29++ = '+';
    *VAR_29 = '\0';
  }
       else if (VAR_22.mod != 1)
  {
    *VAR_29++ = '-';
    *VAR_29 = '\0';
    VAR_40 = - (bfd_signed_vma) VAR_40;
  }

       FUNC_7 (VAR_34, VAR_40);
       FUNC_6 (VAR_34);
     }

   *VAR_29++ = VAR_15;
   *VAR_29 = '\0';
 }
      else if (VAR_20)
 {
   if (VAR_31 & (VAR_4 | VAR_10 | VAR_6
     | VAR_7 | VAR_8 | VAR_9))
     ;
   else
     {
       FUNC_6 (VAR_28[VAR_17 - VAR_18]);
       FUNC_6 (":");
     }
   FUNC_8 (VAR_34, 1, VAR_40 & 0xffff);
   FUNC_6 (VAR_34);
 }
    }
}
