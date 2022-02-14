
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ tree ;
struct sparc_args {scalar_t__ words; } ;
typedef enum machine_mode { ____Placeholder_machine_mode } machine_mode ;


 scalar_t__ FUNC_0 (scalar_t__) ;
 int VAR_0 ;
 int FUNC_1 (int) ;
 scalar_t__ FUNC_2 (int) ;
 scalar_t__ VAR_1 ;
 int FUNC_3 (struct sparc_args*,int,scalar_t__,int,int ,int*,int*) ;
 int FUNC_4 (scalar_t__) ;

void
FUNC_5 (struct sparc_args *VAR_2, enum machine_mode VAR_3,
        tree VAR_4, int VAR_5)
{
  int VAR_6, VAR_7, VAR_8;


  VAR_6 = FUNC_3 (VAR_2, VAR_3, VAR_4, VAR_5, 0, &VAR_7, &VAR_8);


  if (VAR_6 != -1)
    VAR_2->words += VAR_8;

  if (VAR_1)
    {
      VAR_2->words += (VAR_3 != VAR_0
       ? FUNC_2 (FUNC_1 (VAR_3))
       : FUNC_2 (FUNC_4 (VAR_4)));
    }
  else
    {
      if (VAR_4 && FUNC_0 (VAR_4))
 {
   int VAR_9 = FUNC_4 (VAR_4);

   if (VAR_9 <= 8)
     ++VAR_2->words;
   else if (VAR_9 <= 16)
     VAR_2->words += 2;
   else
     ++VAR_2->words;
 }
      else
 {
   VAR_2->words += (VAR_3 != VAR_0
    ? FUNC_2 (FUNC_1 (VAR_3))
    : FUNC_2 (FUNC_4 (VAR_4)));
 }
    }
}
