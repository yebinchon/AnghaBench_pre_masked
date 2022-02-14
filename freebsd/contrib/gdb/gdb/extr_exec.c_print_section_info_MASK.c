
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct target_ops {struct section_table* to_sections_end; struct section_table* to_sections; } ;
struct section_table {int * bfd; TYPE_1__* the_bfd_section; int endaddr; int addr; } ;
typedef int bfd ;
struct TYPE_2__ {int filepos; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,TYPE_1__*) ;
 int * VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_4 (int ,char*) ;
 int FUNC_5 (int ,int,int ) ;
 int FUNC_6 (char*,...) ;
 int FUNC_7 (char*) ;

void
FUNC_8 (struct target_ops *VAR_4, bfd *VAR_5)
{
  struct section_table *VAR_6;

  char *VAR_7 = VAR_0 <= 32 ? "08l" : "016l";

  FUNC_6 ("\t`%s', ", FUNC_0 (VAR_5));
  FUNC_7 ("        ");
  FUNC_6 ("file type %s.\n", FUNC_2 (VAR_5));
  if (VAR_5 == VAR_1)
    {
      FUNC_6 ("\tEntry point: ");
      FUNC_5 (FUNC_1 (VAR_5), 1, VAR_2);
      FUNC_6 ("\n");
    }
  for (VAR_6 = VAR_4->to_sections; VAR_6 < VAR_4->to_sections_end; VAR_6++)
    {
      FUNC_6 ("\t%s", FUNC_4 (VAR_6->addr, VAR_7));
      FUNC_6 (" - %s", FUNC_4 (VAR_6->endaddr, VAR_7));






      if (VAR_3)
 FUNC_6 (" @ %s",
    FUNC_4 (VAR_6->the_bfd_section->filepos, "08l"));
      FUNC_6 (" is %s", FUNC_3 (VAR_6->bfd, VAR_6->the_bfd_section));
      if (VAR_6->bfd != VAR_5)
 {
   FUNC_6 (" in %s", FUNC_0 (VAR_6->bfd));
 }
      FUNC_6 ("\n");
    }
}
