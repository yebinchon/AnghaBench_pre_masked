
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int quick_procedure_entry ;
typedef int PXDB_header_ptr ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;

__attribute__((used)) static int
FUNC_0 (int VAR_2, quick_procedure_entry *VAR_3, int VAR_4,
       PXDB_header_ptr VAR_5)
{
  while (VAR_1)
    {
      if (VAR_0 >= VAR_2)
 return VAR_0 - 1;
      VAR_4++;
    }
  return 0;
}
