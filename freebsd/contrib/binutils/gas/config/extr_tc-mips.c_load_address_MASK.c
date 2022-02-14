
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef scalar_t__ valueT ;
struct TYPE_8__ {scalar_t__ X_op; int X_add_number; int X_add_symbol; } ;
typedef TYPE_1__ expressionS ;
struct TYPE_10__ {scalar_t__ noat; } ;
struct TYPE_9__ {scalar_t__ sequence; } ;


 char* VAR_0 ;
 char* VAR_1 ;
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
 int VAR_14 ;
 int VAR_15 ;
 scalar_t__ VAR_16 ;
 scalar_t__ VAR_17 ;
 scalar_t__ VAR_18 ;
 scalar_t__ VAR_19 ;
 scalar_t__ VAR_20 ;
 scalar_t__ VAR_21 ;
 int FUNC_0 (char*) ;
 int FUNC_1 () ;
 int FUNC_2 (int ) ;
 int FUNC_3 () ;
 int FUNC_4 (int,TYPE_1__*,int ) ;
 int FUNC_5 (TYPE_1__*,char*,char*,...) ;
 int FUNC_6 (TYPE_1__*,int) ;
 scalar_t__ VAR_22 ;
 int VAR_23 ;
 TYPE_3__ VAR_24 ;
 scalar_t__ VAR_25 ;
 TYPE_2__ VAR_26 ;
 int FUNC_7 (int ,int) ;
 scalar_t__ FUNC_8 (int) ;
 int FUNC_9 () ;
 int FUNC_10 (int ) ;
 int FUNC_11 () ;

__attribute__((used)) static void
FUNC_12 (int VAR_27, expressionS *VAR_28, int *VAR_29)
{
  if (VAR_28->X_op != VAR_20
      && VAR_28->X_op != VAR_21)
    {
      FUNC_2 (FUNC_0("expression too complex"));
      VAR_28->X_op = VAR_20;
    }

  if (VAR_28->X_op == VAR_20)
    {
      FUNC_4 (VAR_27, VAR_28, VAR_15);
      return;
    }

  if (VAR_25 == VAR_19)
    {
      if (VAR_16)
 {
   if ((valueT) VAR_28->X_add_number <= VAR_18
       && !FUNC_7 (VAR_28->X_add_symbol, 1))
     {
       FUNC_10 (VAR_28->X_add_symbol);
       FUNC_5 (VAR_28, VAR_0, "t,r,j", VAR_27,
      VAR_23, VAR_4);
       FUNC_11 ();
     }

   if (*VAR_29 == 0 && !VAR_24.noat)
     {
       FUNC_5 (VAR_28, "lui", "t,u", VAR_27, VAR_14);
       FUNC_5 (VAR_28, "lui", "t,u", VAR_3, VAR_5);
       FUNC_5 (VAR_28, "daddiu", "t,r,j", VAR_27, VAR_27,
      VAR_13);
       FUNC_5 (VAR_28, "daddiu", "t,r,j", VAR_3, VAR_3, VAR_6);
       FUNC_5 (((void*)0), "dsll32", "d,w,<", VAR_27, VAR_27, 0);
       FUNC_5 (((void*)0), "daddu", "d,v,t", VAR_27, VAR_27, VAR_3);
       *VAR_29 = 1;
     }
   else
     {
       FUNC_5 (VAR_28, "lui", "t,u", VAR_27, VAR_14);
       FUNC_5 (VAR_28, "daddiu", "t,r,j", VAR_27, VAR_27,
      VAR_13);
       FUNC_5 (((void*)0), "dsll", "d,w,<", VAR_27, VAR_27, 16);
       FUNC_5 (VAR_28, "daddiu", "t,r,j", VAR_27, VAR_27, VAR_5);
       FUNC_5 (((void*)0), "dsll", "d,w,<", VAR_27, VAR_27, 16);
       FUNC_5 (VAR_28, "daddiu", "t,r,j", VAR_27, VAR_27, VAR_6);
     }

   if (VAR_26.sequence)
     FUNC_9 ();
 }
      else
 {
   if ((valueT) VAR_28->X_add_number <= VAR_18
       && !FUNC_7 (VAR_28->X_add_symbol, 1))
     {
       FUNC_10 (VAR_28->X_add_symbol);
       FUNC_5 (VAR_28, VAR_0, "t,r,j", VAR_27,
      VAR_23, VAR_4);
       FUNC_11 ();
     }
   FUNC_6 (VAR_28, VAR_27);
   FUNC_5 (VAR_28, VAR_0, "t,r,j",
         VAR_27, VAR_27, VAR_6);
   if (VAR_26.sequence)
     FUNC_9 ();
 }
    }
  else if (!VAR_22)
    {
      expressionS VAR_30;
      if (VAR_17)
 {
   if (VAR_28->X_add_number)
     {
       VAR_30.X_add_number = VAR_28->X_add_number;
       VAR_28->X_add_number = 0;
       FUNC_10 (VAR_28->X_add_symbol);
       FUNC_5 (VAR_28, VAR_2, "t,o(b)", VAR_27,
      VAR_8, VAR_23);
       if (VAR_30.X_add_number < -0x8000 || VAR_30.X_add_number >= 0x8000)
  FUNC_2 (FUNC_0("PIC code offset overflow (max 16 signed bits)"));
       VAR_30.X_op = VAR_20;
       FUNC_5 (&VAR_30, VAR_0, "t,r,j",
      VAR_27, VAR_27, VAR_6);
       VAR_28->X_add_number = VAR_30.X_add_number;
       FUNC_11 ();
     }
   FUNC_5 (VAR_28, VAR_2, "t,o(b)", VAR_27,
         VAR_8, VAR_23);
   if (VAR_26.sequence)
     FUNC_9 ();
 }
      else
 {
   VAR_30.X_add_number = VAR_28->X_add_number;
   VAR_28->X_add_number = 0;
   FUNC_5 (VAR_28, VAR_2, "t,o(b)", VAR_27,
         VAR_7, VAR_23);
   FUNC_3 ();
   FUNC_10 (VAR_28->X_add_symbol);
   FUNC_11 ();
   FUNC_5 (VAR_28, VAR_0, "t,r,j", VAR_27, VAR_27,
         VAR_6);
   FUNC_9 ();

   if (VAR_30.X_add_number != 0)
     {
       if (VAR_30.X_add_number < -0x8000 || VAR_30.X_add_number >= 0x8000)
  FUNC_2 (FUNC_0("PIC code offset overflow (max 16 signed bits)"));
       VAR_30.X_op = VAR_20;
       FUNC_5 (&VAR_30, VAR_0, "t,r,j",
      VAR_27, VAR_27, VAR_6);
     }
 }
    }
  else if (VAR_22)
    {
      expressionS VAR_31;
      if (VAR_17)
 {
   VAR_31.X_add_number = VAR_28->X_add_number;
   VAR_28->X_add_number = 0;
   FUNC_10 (VAR_28->X_add_symbol);
   FUNC_5 (VAR_28, "lui", "t,u", VAR_27, VAR_9);
   FUNC_5 (((void*)0), VAR_1, "d,v,t",
         VAR_27, VAR_27, VAR_23);
   FUNC_5 (VAR_28, VAR_2, "t,o(b)",
         VAR_27, VAR_10, VAR_27);
   if (VAR_31.X_add_number < -0x8000 || VAR_31.X_add_number >= 0x8000)
     FUNC_2 (FUNC_0("PIC code offset overflow (max 16 signed bits)"));
   else if (VAR_31.X_add_number)
     {
       VAR_31.X_op = VAR_20;
       FUNC_5 (&VAR_31, VAR_0, "t,r,j", VAR_27, VAR_27,
      VAR_6);
     }

   VAR_28->X_add_number = VAR_31.X_add_number;
   FUNC_11 ();
   FUNC_5 (VAR_28, VAR_2, "t,o(b)", VAR_27,
         VAR_12, VAR_23);
   FUNC_5 (VAR_28, VAR_0, "t,r,j", VAR_27, VAR_27,
         VAR_11);
   FUNC_9 ();
 }
      else
 {
   VAR_31.X_add_number = VAR_28->X_add_number;
   VAR_28->X_add_number = 0;
   FUNC_10 (VAR_28->X_add_symbol);
   FUNC_5 (VAR_28, "lui", "t,u", VAR_27, VAR_9);
   FUNC_5 (((void*)0), VAR_1, "d,v,t",
         VAR_27, VAR_27, VAR_23);
   FUNC_5 (VAR_28, VAR_2, "t,o(b)",
         VAR_27, VAR_10, VAR_27);
   FUNC_11 ();
   if (FUNC_8 (VAR_23))
     {




       FUNC_5 (((void*)0), "nop", "");
     }
   FUNC_5 (VAR_28, VAR_2, "t,o(b)", VAR_27,
         VAR_7, VAR_23);
   FUNC_3 ();
   FUNC_5 (VAR_28, VAR_0, "t,r,j", VAR_27, VAR_27,
         VAR_6);
   FUNC_9 ();

   if (VAR_31.X_add_number != 0)
     {
       if (VAR_31.X_add_number < -0x8000 || VAR_31.X_add_number >= 0x8000)
  FUNC_2 (FUNC_0("PIC code offset overflow (max 16 signed bits)"));
       VAR_31.X_op = VAR_20;
       FUNC_5 (&VAR_31, VAR_0, "t,r,j", VAR_27, VAR_27,
      VAR_6);
     }
 }
    }
  else
    FUNC_1 ();

  if (VAR_24.noat && *VAR_29 == 1)
    FUNC_2 (FUNC_0("Macro used $at after \".set noat\""));
}
