
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct section_table {unsigned long addr; long endaddr; int the_bfd_section; } ;
typedef int secprint ;
struct TYPE_3__ {struct section_table* to_sections_end; struct section_table* to_sections; } ;


 char* FUNC_0 (int ,int ) ;
 int FUNC_1 (char*,...) ;
 int VAR_0 ;
 int FUNC_2 (TYPE_1__*) ;
 TYPE_1__ VAR_1 ;
 int FUNC_3 (char) ;
 unsigned long FUNC_4 (char*) ;
 int FUNC_5 (char*,char*,unsigned int) ;
 int FUNC_6 (char*,char*,unsigned int) ;

__attribute__((used)) static void
FUNC_7 (char *VAR_2, int VAR_3)
{
  struct section_table *VAR_4;
  char *VAR_5;
  unsigned VAR_6;
  unsigned long VAR_7;
  char VAR_8[100];
  long VAR_9;

  if (VAR_2 == 0)
    FUNC_1 ("Must specify section name and its virtual address");


  for (VAR_5 = VAR_2; !FUNC_3 (*VAR_2); VAR_2++);
  VAR_6 = VAR_2 - VAR_5;


  VAR_7 = FUNC_4 (VAR_2);

  for (VAR_4 = VAR_1.to_sections; VAR_4 < VAR_1.to_sections_end; VAR_4++)
    {
      if (!FUNC_5 (VAR_5, FUNC_0 (VAR_0, VAR_4->the_bfd_section), VAR_6)
   && FUNC_0 (VAR_0, VAR_4->the_bfd_section)[VAR_6] == '\0')
 {
   VAR_9 = VAR_7 - VAR_4->addr;
   VAR_4->addr += VAR_9;
   VAR_4->endaddr += VAR_9;
   if (VAR_3)
     FUNC_2 (&VAR_1);
   return;
 }
    }
  if (VAR_6 >= sizeof (VAR_8))
    VAR_6 = sizeof (VAR_8) - 1;
  FUNC_6 (VAR_8, VAR_5, VAR_6);
  VAR_8[VAR_6] = '\0';
  FUNC_1 ("Section %s not found", VAR_8);
}
