
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct disassemble_info {int bytes_per_line; } ;
typedef int bfd_vma ;


 int VAR_0 ;
 int FUNC_0 (int ,struct disassemble_info*) ;

__attribute__((used)) static int
FUNC_1 (bfd_vma VAR_1, struct disassemble_info *VAR_2)
{
  VAR_2->bytes_per_line = VAR_0;
  return FUNC_0 (VAR_1, VAR_2);
}
