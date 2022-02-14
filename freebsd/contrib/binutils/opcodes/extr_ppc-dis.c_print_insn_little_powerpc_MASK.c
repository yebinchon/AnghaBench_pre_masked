
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct disassemble_info {scalar_t__ private_data; } ;
typedef int bfd_vma ;


 int FUNC_0 (int ,struct disassemble_info*,int ,int) ;

int
FUNC_1 (bfd_vma VAR_0, struct disassemble_info *VAR_1)
{
  int VAR_2 = (char *) VAR_1->private_data - (char *) 0;
  return FUNC_0 (VAR_0, VAR_1, 0, VAR_2);
}
