
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ linker_file_t ;
typedef scalar_t__ elf_file_t ;


 int VAR_0 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (scalar_t__,int ) ;
 int FUNC_3 (scalar_t__) ;

__attribute__((used)) static int
FUNC_4(linker_file_t VAR_1)
{
 elf_file_t VAR_2;
 int VAR_3;

 VAR_2 = (elf_file_t) VAR_1;
 VAR_3 = FUNC_3(VAR_2);
 if (VAR_3 == 0)
  VAR_3 = FUNC_2(VAR_2, VAR_0);
 if (VAR_3 != 0)
  return (VAR_3);
 (void)FUNC_1(VAR_2);

 return (FUNC_0(VAR_1));
}
