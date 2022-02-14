
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct symbol {int dummy; } ;
struct TYPE_2__ {int main_func_highpc; int main_func_lowpc; } ;
struct objfile {TYPE_1__ ei; int section_offsets; int * obfd; } ;
struct cleanup {int dummy; } ;
typedef int bfd ;
typedef int CORE_ADDR ;


 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 scalar_t__ VAR_0 ;
 int FUNC_3 (struct symbol*) ;
 scalar_t__ FUNC_4 (struct symbol*) ;
 int VAR_1 ;
 int FUNC_5 (struct cleanup*) ;
 int FUNC_6 () ;
 int FUNC_7 (struct objfile*) ;
 struct symbol* FUNC_8 (int ,int *,int ,int *,int *) ;
 int FUNC_9 () ;
 struct cleanup* FUNC_10 () ;
 int FUNC_11 (int *,int ,struct objfile*) ;
 int FUNC_12 (struct objfile*,int,char*,char*,char*) ;

__attribute__((used)) static void
FUNC_13 (struct objfile *VAR_2, int VAR_3)
{
  bfd *VAR_4 = VAR_2->obfd;
  struct cleanup *VAR_5;
  CORE_ADDR VAR_6;
  struct symbol *VAR_7;

  FUNC_6 ();
  VAR_5 = FUNC_10 ();



  VAR_6 = FUNC_0 (VAR_2->section_offsets, 0);




  FUNC_11 (VAR_4, VAR_6, VAR_2);




  FUNC_7 (VAR_2);
  FUNC_5 (VAR_5);

  FUNC_12 (VAR_2, VAR_3, ".stab",
      ".stabstr", ".text");

  VAR_7 = FUNC_8 (FUNC_9 (), ((void*)0), VAR_1, ((void*)0), ((void*)0));

  if (VAR_7
      && FUNC_4 (VAR_7) == VAR_0)
    {
      VAR_2->ei.main_func_lowpc = FUNC_2 (FUNC_3 (VAR_7));
      VAR_2->ei.main_func_highpc = FUNC_1 (FUNC_3 (VAR_7));
    }



}
