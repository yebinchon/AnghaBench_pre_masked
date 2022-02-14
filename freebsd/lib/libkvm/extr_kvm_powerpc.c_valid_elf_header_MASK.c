
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__* e_ident; int e_machine; int e_type; } ;
typedef TYPE_1__ Elf32_Ehdr ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 int FUNC_0 (TYPE_1__) ;
 scalar_t__ FUNC_1 (int ) ;

__attribute__((used)) static int
FUNC_2(Elf32_Ehdr *VAR_10)
{

 if (!FUNC_0(*VAR_10))
  return (0);
 if (VAR_10->e_ident[VAR_0] != VAR_4)
  return (0);
 if (VAR_10->e_ident[VAR_1] != VAR_5)
  return (0);
 if (VAR_10->e_ident[VAR_3] != VAR_9)
  return (0);
 if (VAR_10->e_ident[VAR_2] != VAR_6)
  return (0);
 if (FUNC_1(VAR_10->e_type) != VAR_8)
  return (0);
 if (FUNC_1(VAR_10->e_machine) != VAR_7)
  return (0);

 return (1);
}
