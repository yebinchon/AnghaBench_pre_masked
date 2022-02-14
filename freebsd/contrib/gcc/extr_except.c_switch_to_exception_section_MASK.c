
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ have_named_sections; } ;


 int FUNC_0 (int ,int) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ FUNC_1 (char*,int,int *) ;
 scalar_t__ VAR_7 ;
 int FUNC_2 (scalar_t__) ;
 TYPE_1__ VAR_8 ;

__attribute__((used)) static void
FUNC_3 (void)
{
  if (VAR_5 == 0)
    {
      if (VAR_8.have_named_sections)
 {
   int VAR_9;

   if (VAR_2)
     {
       int VAR_10 =
  FUNC_0 ( 0, 1);
       VAR_9 = ((! VAR_6
   || ((VAR_10 & 0x70) != VAR_0
       && (VAR_10 & 0x70) != VAR_1))
         ? 0 : VAR_3);
     }
   else
     VAR_9 = VAR_3;
   VAR_5 = FUNC_1 (".gcc_except_table", VAR_9, ((void*)0));
 }
      else
 VAR_5 = VAR_6 ? VAR_4 : VAR_7;
    }
  FUNC_2 (VAR_5);
}
