
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ui_file {int dummy; } ;
struct type {int dummy; } ;
typedef int LONGEST ;


 int VAR_0 ;
 int FUNC_0 (struct type*,unsigned int) ;
 char* FUNC_1 (struct type*,unsigned int) ;
 unsigned int FUNC_2 (struct type*) ;
 unsigned int FUNC_3 (struct type*) ;
 int VAR_1 ;
 int FUNC_4 (struct ui_file*,char*,...) ;
 int FUNC_5 (char*,struct ui_file*) ;
 int FUNC_6 (struct type*,struct ui_file*,int ,int ) ;
 char* FUNC_7 (struct type*) ;
 int FUNC_8 (int ,char*) ;

void
FUNC_9 (char *VAR_2, struct type *VAR_3,
      struct ui_file *VAR_4, char *VAR_5)
{




  int VAR_6 = 0;
  int VAR_7 = 0;
  unsigned int VAR_8;
  unsigned VAR_9 = FUNC_2 (VAR_3);

  LONGEST VAR_10 = FUNC_8 (VAR_1, VAR_2) << 3;
  for (VAR_8 = FUNC_3 (VAR_3); VAR_8 < VAR_9; VAR_8++)
    {
      int VAR_11 = FUNC_0 (VAR_3, VAR_8);
      VAR_0;
      if (VAR_10 == VAR_11)
 break;
      if (VAR_10 < VAR_11 && VAR_8 != 0)
 {

   VAR_8 -= 1;
   VAR_6 = (VAR_10 - FUNC_0 (VAR_3, VAR_8));
   if (VAR_6 & 0x7)
     VAR_7 = 1;
   else
     VAR_6 >>= 3;
   break;
 }
    }
  if (VAR_8 < VAR_9)
    {
      char *VAR_12;
      FUNC_5 (VAR_5, VAR_4);
      VAR_12 = FUNC_7 (VAR_3);
      if (VAR_12)
 FUNC_5 (VAR_12, VAR_4);
      else
 FUNC_6 (VAR_3, VAR_4, 0, 0);
      FUNC_4 (VAR_4, "::");
      FUNC_5 (FUNC_1 (VAR_3, VAR_8), VAR_4);
      if (VAR_6)
 FUNC_4 (VAR_4, " + %d bytes", VAR_6);
      if (VAR_7)
 FUNC_4 (VAR_4, " (offset in bits)");
    }
  else
    FUNC_4 (VAR_4, "%ld", (long int) (VAR_10 >> 3));
}
