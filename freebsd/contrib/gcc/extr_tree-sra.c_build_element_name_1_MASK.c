
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ tree ;
struct sra_elt {scalar_t__ type; scalar_t__ element; struct sra_elt* parent; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (scalar_t__) ;
 int FUNC_1 (scalar_t__) ;
 char* VAR_1 ;
 int FUNC_2 (scalar_t__) ;
 char* FUNC_3 (scalar_t__) ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_4 (scalar_t__) ;
 int FUNC_5 (scalar_t__) ;
 scalar_t__ VAR_3 ;
 int FUNC_6 (int *,char) ;
 int FUNC_7 (int *,char*,int) ;
 int FUNC_8 (char*,char*,int) ;
 int VAR_4 ;
 int FUNC_9 (char*) ;

__attribute__((used)) static void
FUNC_10 (struct sra_elt *VAR_5)
{
  tree VAR_6;
  char VAR_7[32];

  if (VAR_5->parent)
    {
      FUNC_10 (VAR_5->parent);
      FUNC_6 (&VAR_4, '$');

      if (FUNC_4 (VAR_5->parent->type) == VAR_0)
 {
   if (VAR_5->element == VAR_3)
     FUNC_7 (&VAR_4, "real", 4);
   else
     FUNC_7 (&VAR_4, "imag", 4);
   return;
 }
    }

  VAR_6 = VAR_5->element;
  if (FUNC_4 (VAR_6) == VAR_2)
    {

      FUNC_8 (VAR_7, VAR_1, FUNC_5 (VAR_6));
      FUNC_7 (&VAR_4, VAR_7, FUNC_9 (VAR_7));
    }
  else
    {
      tree VAR_8 = FUNC_0 (VAR_6);
      if (VAR_8)
 FUNC_7 (&VAR_4, FUNC_3 (VAR_8),
        FUNC_2 (VAR_8));
      else
 {
   FUNC_8 (VAR_7, "D%u", FUNC_1 (VAR_6));
   FUNC_7 (&VAR_4, VAR_7, FUNC_9 (VAR_7));
 }
    }
}
