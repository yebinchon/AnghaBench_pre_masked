
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ui_file {int dummy; } ;
struct gdbarch {int dummy; } ;
struct frame_info {int dummy; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int,int) ;
 scalar_t__ FUNC_1 () ;
 scalar_t__ FUNC_2 (int) ;
 scalar_t__ FUNC_3 () ;
 int FUNC_4 (int,int ,char*,char*) ;
 int FUNC_5 (int) ;
 int FUNC_6 (int) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 char* FUNC_7 (int) ;
 scalar_t__ VAR_4 ;
 scalar_t__ FUNC_8 (int ) ;
 scalar_t__ VAR_5 ;
 scalar_t__ FUNC_9 (int ) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_10 (struct ui_file*,char*,...) ;
 int FUNC_11 (char*,struct ui_file*) ;
 int FUNC_12 (struct frame_info*,int,char*) ;
 int FUNC_13 (struct gdbarch*,int,int ) ;
 int VAR_9 ;
 int FUNC_14 (char*,char*,int ) ;
 int FUNC_15 (scalar_t__,struct ui_file*) ;
 int FUNC_16 (int ,int) ;
 scalar_t__ FUNC_17 (char*) ;
 int FUNC_18 (int ,char*,int ,int ,struct ui_file*,char,int,int ,int ) ;

void
FUNC_19 (struct gdbarch *VAR_10,
         struct ui_file *VAR_11,
         struct frame_info *VAR_12,
         int VAR_13, int VAR_14)
{
  int VAR_15;
  const int VAR_16 = VAR_3 + VAR_2;
  char VAR_17[VAR_1];
  char VAR_18[VAR_1];

  if (FUNC_1 ())
    {
      FUNC_0 (VAR_13, VAR_14);
      return;
    }

  for (VAR_15 = 0; VAR_15 < VAR_16; VAR_15++)
    {


      if (VAR_13 == -1)
 {
   if (VAR_14)
     {
       if (!FUNC_13 (VAR_10, VAR_15, VAR_7))
  continue;
     }
   else
     {
       if (!FUNC_13 (VAR_10, VAR_15, VAR_9))
  continue;
     }
 }
      else
 {
   if (VAR_15 != VAR_13)
     continue;
 }



      if (FUNC_7 (VAR_15) == ((void*)0) || *(FUNC_7 (VAR_15)) == '\0')
 continue;

      FUNC_11 (FUNC_7 (VAR_15), VAR_11);
      FUNC_15 (15 - FUNC_17 (FUNC_7 (VAR_15)), VAR_11);


      if (! FUNC_12 (VAR_12, VAR_15, VAR_17))
 {
   FUNC_10 (VAR_11, "*value not available*\n");
   continue;
 }





      if (FUNC_3 ()
   && FUNC_2 (VAR_15))
 {
   FUNC_4 (VAR_15, FUNC_16 (VAR_8, VAR_15),
           VAR_17, VAR_18);
 }
      else
 {
   FUNC_14 (VAR_18, VAR_17,
    FUNC_6 (VAR_15));
 }



      if (FUNC_8 (FUNC_16 (VAR_8, VAR_15)) == VAR_5)
 {
   int VAR_19;

   FUNC_18 (FUNC_16 (VAR_8, VAR_15), VAR_18, 0, 0,
       VAR_11, 0, 1, 0, VAR_6);

   FUNC_10 (VAR_11, "\t(raw 0x");
   for (VAR_19 = 0; VAR_19 < FUNC_5 (VAR_15); VAR_19++)
     {
       int VAR_20;
       if (VAR_4 == VAR_0)
  VAR_20 = VAR_19;
       else
  VAR_20 = FUNC_5 (VAR_15) - 1 - VAR_19;
       FUNC_10 (VAR_11, "%02x", (unsigned char) VAR_17[VAR_20]);
     }
   FUNC_10 (VAR_11, ")");
 }
      else
 {

   FUNC_18 (FUNC_16 (VAR_8, VAR_15), VAR_18, 0, 0,
       VAR_11, 'x', 1, 0, VAR_6);


   if (FUNC_9 (FUNC_16 (VAR_8, VAR_15)) == 0)
     {
       FUNC_10 (VAR_11, "\t");
       FUNC_18 (FUNC_16 (VAR_8, VAR_15), VAR_18, 0, 0,
    VAR_11, 0, 1, 0, VAR_6);
     }
 }

      FUNC_10 (VAR_11, "\n");
    }
}
