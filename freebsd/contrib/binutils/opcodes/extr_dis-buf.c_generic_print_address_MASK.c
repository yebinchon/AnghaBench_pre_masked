
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct disassemble_info {int stream; int (* fprintf_func ) (int ,char*,char*) ;} ;
typedef int bfd_vma ;


 int FUNC_0 (char*,int ) ;
 int FUNC_1 (int ,char*,char*) ;

void
FUNC_2 (bfd_vma VAR_0, struct disassemble_info *VAR_1)
{
  char VAR_2[30];

  FUNC_0 (VAR_2, VAR_0);
  (*VAR_1->fprintf_func) (VAR_1->stream, "0x%s", VAR_2);
}
