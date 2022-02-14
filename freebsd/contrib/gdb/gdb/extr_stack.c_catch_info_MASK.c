
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct symtab_and_line {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (int ,char*) ;
 int VAR_2 ;
 int FUNC_2 (int ,int ,int ) ;
 struct symtab_and_line* FUNC_3 (int ,int) ;

__attribute__((used)) static void
FUNC_4 (char *VAR_3, int VAR_4)
{
  struct symtab_and_line *VAR_5;


  VAR_5 = FUNC_3 (VAR_0, 1);
  if (VAR_5)
    {



      FUNC_1 (VAR_2, "Info catch not supported with this target/compiler combination.\n");




    }
  else
    {

      if (!VAR_1)
 FUNC_0 ("No frame selected.");

      FUNC_2 (VAR_1, 0, VAR_2);
    }
}
