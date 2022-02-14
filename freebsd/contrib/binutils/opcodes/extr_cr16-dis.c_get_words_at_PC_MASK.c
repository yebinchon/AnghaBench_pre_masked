
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct disassemble_info {int dummy; } ;
typedef int bfd_vma ;
typedef int ULONGLONG ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (int,struct disassemble_info*) ;
 scalar_t__* VAR_1 ;

__attribute__((used)) static void
FUNC_1 (bfd_vma VAR_2, struct disassemble_info *VAR_3)
{
  int VAR_4;
  bfd_vma VAR_5;

  for (VAR_4 = 0, VAR_5 = VAR_2; VAR_4 < 3; VAR_4++, VAR_5 += 2)
    VAR_1[VAR_4] = FUNC_0 (VAR_5, VAR_3);

  VAR_0 =
    ((ULONGLONG) VAR_1[0] << 32) + ((unsigned long) VAR_1[1] << 16) + VAR_1[2];
}
