
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ wordU ;
struct disassemble_info {int (* read_memory_func ) (int ,int *,int,struct disassemble_info*) ;} ;
typedef int bfd_vma ;
typedef int bfd_byte ;


 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (int ,int *,int,struct disassemble_info*) ;

__attribute__((used)) static wordU
FUNC_2 (bfd_vma VAR_0, struct disassemble_info *VAR_1)
{
  bfd_byte VAR_2[4];
  int VAR_3;
  wordU VAR_4 = 0;

  VAR_3 = VAR_1->read_memory_func (VAR_0, VAR_2, 2, VAR_1);

  if (VAR_3 == 0)
    VAR_4 = (wordU) FUNC_0 (VAR_2);

  return VAR_4;
}
