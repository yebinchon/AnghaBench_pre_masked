
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ui_file {int dummy; } ;


 scalar_t__ VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned char VAR_3 ;
 unsigned char VAR_4 ;
 unsigned char VAR_5 ;
 unsigned char VAR_6 ;
 unsigned char VAR_7 ;
 unsigned char VAR_8 ;
 unsigned char VAR_9 ;
 unsigned char VAR_10 ;
 unsigned char VAR_11 ;
 unsigned char VAR_12 ;
 scalar_t__ VAR_13 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (struct ui_file*,char*,unsigned char) ;
 int FUNC_2 (int ,struct ui_file*) ;
 int FUNC_3 () ;
 int FUNC_4 () ;

void
FUNC_5 (struct ui_file *VAR_14, unsigned char *VAR_15, unsigned VAR_16)
{
  unsigned char *VAR_17;
  unsigned char VAR_18, VAR_19, VAR_20, VAR_21;
  int VAR_22;
  VAR_22 = (VAR_16 * VAR_1) % 3;
  VAR_21 = 0;

  FUNC_2 (FUNC_3 (), VAR_14);
  if (VAR_13 == VAR_0)
    {
      for (VAR_17 = VAR_15;
    VAR_17 < VAR_15 + VAR_16;
    VAR_17++)
 {
   switch (VAR_22)
     {
     case 0:


       VAR_18 = (0340 & *VAR_17) >> 5;
       VAR_19 = (0016 & *VAR_17) >> 2;
       VAR_21 = (0003 & *VAR_17);
       FUNC_1 (VAR_14, "%o", VAR_18);
       FUNC_1 (VAR_14, "%o", VAR_19);
       break;

     case 1:


       VAR_18 = (VAR_21 << 1) | ((0200 & *VAR_17) >> 7);
       VAR_19 = (0160 & *VAR_17) >> 4;
       VAR_20 = (0016 & *VAR_17) >> 1;
       VAR_21 = (0001 & *VAR_17);
       FUNC_1 (VAR_14, "%o", VAR_18);
       FUNC_1 (VAR_14, "%o", VAR_19);
       FUNC_1 (VAR_14, "%o", VAR_20);
       break;

     case 2:


       VAR_18 = (VAR_21 << 2) | ((0300 & *VAR_17) >> 6);
       VAR_19 = (0070 & *VAR_17) >> 3;
       VAR_20 = (0007 & *VAR_17);
       VAR_21 = 0;
       FUNC_1 (VAR_14, "%o", VAR_18);
       FUNC_1 (VAR_14, "%o", VAR_19);
       FUNC_1 (VAR_14, "%o", VAR_20);
       break;

     default:
       FUNC_0 ("Internal error in octal conversion;");
     }

   VAR_22++;
   VAR_22 = VAR_22 % 3;
 }
    }
  else
    {
      for (VAR_17 = VAR_15 + VAR_16 - 1;
    VAR_17 >= VAR_15;
    VAR_17--)
 {
   switch (VAR_22)
     {
     case 0:

       VAR_18 = (0340 & *VAR_17) >> 5;
       VAR_19 = (0016 & *VAR_17) >> 2;
       VAR_21 = (0003 & *VAR_17);
       FUNC_1 (VAR_14, "%o", VAR_18);
       FUNC_1 (VAR_14, "%o", VAR_19);
       break;

     case 1:

       VAR_18 = (VAR_21 << 1) | ((0200 & *VAR_17) >> 7);
       VAR_19 = (0160 & *VAR_17) >> 4;
       VAR_20 = (0016 & *VAR_17) >> 1;
       VAR_21 = (0001 & *VAR_17);
       FUNC_1 (VAR_14, "%o", VAR_18);
       FUNC_1 (VAR_14, "%o", VAR_19);
       FUNC_1 (VAR_14, "%o", VAR_20);
       break;

     case 2:

       VAR_18 = (VAR_21 << 2) | ((0300 & *VAR_17) >> 6);
       VAR_19 = (0070 & *VAR_17) >> 3;
       VAR_20 = (0007 & *VAR_17);
       VAR_21 = 0;
       FUNC_1 (VAR_14, "%o", VAR_18);
       FUNC_1 (VAR_14, "%o", VAR_19);
       FUNC_1 (VAR_14, "%o", VAR_20);
       break;

     default:
       FUNC_0 ("Internal error in octal conversion;");
     }

   VAR_22++;
   VAR_22 = VAR_22 % 3;
 }
    }

  FUNC_2 (FUNC_4 (), VAR_14);
}
