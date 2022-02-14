
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct disassemble_info {int stream; int (* fprintf_func ) (int ,int ,char*) ;} ;
typedef int bfd_vma ;


 int VAR_0 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (char*,int ) ;
 int FUNC_2 (int ,int ,int) ;
 int FUNC_3 (int ,int ,char*) ;

void
FUNC_4 (int VAR_1,
        bfd_vma VAR_2,
        struct disassemble_info *VAR_3)
{
  if (VAR_1 != VAR_0)

    VAR_3->fprintf_func (VAR_3->stream, FUNC_0("Unknown error %d\n"), VAR_1);
  else
    {
      char VAR_4[30];



      FUNC_1 (VAR_4, VAR_2);
      VAR_3->fprintf_func (VAR_3->stream,
     FUNC_0("Address 0x%s is out of bounds.\n"), VAR_4);
    }
}
