
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef TYPE_1__* linker_file_t ;
typedef TYPE_2__* elf_file_t ;
struct TYPE_8__ {char* l_name; int l_ld; int l_addr; } ;
struct TYPE_7__ {TYPE_4__ gdb; int dynamic; } ;
struct TYPE_6__ {int ctors_size; int ctors_addr; int filename; int address; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (TYPE_4__*) ;
 int FUNC_3 (int ,int ) ;
 char* FUNC_4 (scalar_t__,int ,int ) ;
 int FUNC_5 (char*,int ) ;
 scalar_t__ FUNC_6 (int ) ;

__attribute__((used)) static int
FUNC_7(linker_file_t VAR_4)
{




 int VAR_5;


 VAR_5 = FUNC_1(VAR_4);
 if (VAR_5 != 0)
  return (VAR_5);
 FUNC_3(VAR_4->ctors_addr, VAR_4->ctors_size);
 return (0);
}
