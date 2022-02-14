
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct objdump_disasm_info {int abfd; } ;
struct disassemble_info {int stream; int (* fprintf_func ) (int ,char*,char*) ;scalar_t__ application_data; } ;
typedef int bfd_vma ;
typedef int bfd_boolean ;


 int FUNC_0 (int ,char*,int ) ;
 int FUNC_1 (int ,char*,char*) ;

__attribute__((used)) static void
FUNC_2 (bfd_vma VAR_0, struct disassemble_info *VAR_1,
       bfd_boolean VAR_2)
{
  char VAR_3[30];
  char *VAR_4;
  struct objdump_disasm_info *VAR_5;

  VAR_5 = (struct objdump_disasm_info *) VAR_1->application_data;
  FUNC_0 (VAR_5->abfd, VAR_3, VAR_0);
  if (! VAR_2)
    VAR_4 = VAR_3;
  else
    {
      for (VAR_4 = VAR_3; *VAR_4 == '0'; ++VAR_4)
 ;
      if (*VAR_4 == '\0')
 --VAR_4;
    }
  (*VAR_1->fprintf_func) (VAR_1->stream, "%s", VAR_4);
}
