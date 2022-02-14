
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef TYPE_1__* linker_file_t ;
typedef scalar_t__ elf_file_t ;
struct TYPE_5__ {int ctors_size; int ctors_addr; } ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (TYPE_1__*,int) ;
 int FUNC_4 (scalar_t__) ;

__attribute__((used)) static int
FUNC_5(linker_file_t VAR_0)
{
 elf_file_t VAR_1;
 int VAR_2;

 VAR_1 = (elf_file_t)VAR_0;
 VAR_2 = FUNC_4(VAR_1);
 if (VAR_2)
  return (VAR_2);


 VAR_2 = FUNC_0(VAR_0);
 if (VAR_2)
  return (VAR_2);



 VAR_2 = FUNC_3(VAR_0, 1);
 if (VAR_2 != 0)
  return (VAR_2);



 FUNC_2(VAR_1);

 FUNC_1(VAR_0->ctors_addr, VAR_0->ctors_size);
 return (0);
}
