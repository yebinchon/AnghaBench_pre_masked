
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ st_value; scalar_t__ st_size; scalar_t__ st_name; int st_info; } ;
typedef TYPE_1__ Elf32_Sym ;


 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_2 (scalar_t__,scalar_t__) ;

__attribute__((used)) static int
FUNC_3(const void *VAR_3, const void *VAR_4)
{
 Elf32_Sym *VAR_5 = *((Elf32_Sym **)VAR_3);
 Elf32_Sym *VAR_6 = *((Elf32_Sym **)VAR_4);

 if (VAR_5->st_value != VAR_6->st_value)
  return (VAR_5->st_value > VAR_6->st_value ? 1 : -1);

 if ((VAR_5->st_size == 0) != (VAR_6->st_size == 0))
  return (VAR_5->st_size == 0 ? 1 : -1);

 if ((FUNC_1(VAR_5->st_info) == VAR_1) !=
     (FUNC_1(VAR_6->st_info) == VAR_1))
  return (FUNC_1(VAR_5->st_info) == VAR_1 ? 1 : -1);

 if ((FUNC_0(VAR_5->st_info) == VAR_0) !=
     (FUNC_0(VAR_6->st_info) == VAR_0))
  return (FUNC_0(VAR_5->st_info) == VAR_0 ? 1 : -1);

 return (FUNC_2(VAR_2 + VAR_5->st_name,
     VAR_2 + VAR_6->st_name));
}
