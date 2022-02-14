
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {scalar_t__ X_op; scalar_t__ X_add_number; } ;
typedef TYPE_1__ expressionS ;
typedef enum bfd_reloc_code_real { ____Placeholder_bfd_reloc_code_real } bfd_reloc_code_real ;
struct TYPE_9__ {int fr_literal; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 () ;
 int FUNC_2 (TYPE_1__*,int) ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (TYPE_2__*,char*,int,TYPE_1__*,int ,int) ;
 char* FUNC_5 (int) ;
 TYPE_2__* VAR_4 ;
 char* VAR_5 ;
 scalar_t__ FUNC_6 () ;
 scalar_t__ FUNC_7 (char*,char*,int) ;

__attribute__((used)) static void
FUNC_8 (int VAR_6)
{
  expressionS VAR_7;

  if (FUNC_6 ())
    {
      FUNC_1 ();
      return;
    }

  do
    {
      FUNC_0 (&VAR_7);
      if ((VAR_7.X_op == VAR_3
    || VAR_7.X_op == VAR_2)
   && FUNC_7 (VAR_5, "@ppu", 4) == 0)
 {
   char *VAR_8 = FUNC_5 (VAR_6);
   enum bfd_reloc_code_real VAR_9;


   VAR_5 += 4;
   if (*VAR_5 == '-' || *VAR_5 == '+')
     {
       expressionS VAR_10;

       FUNC_3 (&VAR_10);
       if (VAR_10.X_op == VAR_2)
  VAR_7.X_add_number += VAR_10.X_add_number;
     }

   VAR_9 = VAR_6 == 4 ? VAR_0 : VAR_1;
   FUNC_4 (VAR_4, VAR_8 - VAR_4->fr_literal, VAR_6,
         &VAR_7, 0, VAR_9);
 }
      else
 FUNC_2 (&VAR_7, VAR_6);
    }
  while (*VAR_5++ == ',');


  VAR_5--;
  FUNC_1 ();
}
