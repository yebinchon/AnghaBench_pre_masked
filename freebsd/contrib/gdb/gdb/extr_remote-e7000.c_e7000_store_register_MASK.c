
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ arch; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 TYPE_1__* VAR_7 ;
 int VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 int FUNC_0 () ;
 int FUNC_1 () ;
 char* FUNC_2 (int ,int ) ;
 int FUNC_3 (char*) ;
 int FUNC_4 (int) ;
 int FUNC_5 (char*,char*,...) ;

__attribute__((used)) static void
FUNC_6 (int VAR_11)
{
  char VAR_12[200];

  if (VAR_11 == -1)
    {
      FUNC_0 ();
      return;
    }

  if (VAR_7->arch == VAR_9)
    {
      if (VAR_11 <= 7)
 {
   FUNC_5 (VAR_12, ".ER%d %s\r", VAR_11, FUNC_2 (FUNC_4 (VAR_11), 0));
   FUNC_3 (VAR_12);
 }
      else if (VAR_11 == VAR_4)
 {
   FUNC_5 (VAR_12, ".PC %s\r", FUNC_2 (FUNC_4 (VAR_11), 0));
   FUNC_3 (VAR_12);
 }







    }

  else if (VAR_7->arch == VAR_10)
    {
      if (VAR_11 == VAR_4)
 {
   FUNC_5 (VAR_12, ".PC %s\r", FUNC_2 (FUNC_4 (VAR_11), 0));
   FUNC_3 (VAR_12);
 }

      else if (VAR_11 == VAR_6)
 {
   FUNC_5 (VAR_12, ".SR %s\r", FUNC_2 (FUNC_4 (VAR_11), 0));
   FUNC_3 (VAR_12);
 }

      else if (VAR_11 == VAR_5)
 {
   FUNC_5 (VAR_12, ".PR %s\r", FUNC_2 (FUNC_4 (VAR_11), 0));
   FUNC_3 (VAR_12);
 }

      else if (VAR_11 == VAR_1)
 {
   FUNC_5 (VAR_12, ".GBR %s\r", FUNC_2 (FUNC_4 (VAR_11), 0));
   FUNC_3 (VAR_12);
 }

      else if (VAR_11 == VAR_8)
 {
   FUNC_5 (VAR_12, ".VBR %s\r", FUNC_2 (FUNC_4 (VAR_11), 0));
   FUNC_3 (VAR_12);
 }

      else if (VAR_11 == VAR_2)
 {
   FUNC_5 (VAR_12, ".MACH %s\r", FUNC_2 (FUNC_4 (VAR_11), 0));
   FUNC_3 (VAR_12);
 }

      else if (VAR_11 == VAR_3)
 {
   FUNC_5 (VAR_12, ".MACL %s\r", FUNC_2 (FUNC_4 (VAR_11), 0));
   FUNC_3 (VAR_12);
 }
      else
 {
   FUNC_5 (VAR_12, ".R%d %s\r", VAR_11, FUNC_2 (FUNC_4 (VAR_11), 0));
   FUNC_3 (VAR_12);
 }
    }

  FUNC_1 ();
}
