
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int e_shstrndx; } ;
struct TYPE_5__ {scalar_t__ sh_type; scalar_t__ sh_addr; scalar_t__ sh_size; scalar_t__ sh_name; } ;
typedef TYPE_1__ GElf_Shdr ;
typedef TYPE_2__ GElf_Ehdr ;
typedef int Elf ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 char* FUNC_0 (int *,int ,size_t) ;
 int VAR_4 ;
 int FUNC_1 () ;
 int FUNC_2 (char*,int ) ;
 int FUNC_3 (scalar_t__,int ,int) ;
 int VAR_5 ;

__attribute__((used)) static void
FUNC_4(Elf *VAR_6, GElf_Ehdr *VAR_7, GElf_Shdr *VAR_8)
{
 char *VAR_9;

 VAR_9 = FUNC_0(VAR_6, VAR_7->e_shstrndx,
     (size_t) VAR_8->sh_name);
 if ((VAR_8->sh_type == VAR_3 ||
     VAR_8->sh_type == VAR_2 || VAR_8->sh_type == VAR_1 ||
     VAR_8->sh_type == VAR_0) && VAR_8->sh_addr == 0)
  return;
 FUNC_1();
 FUNC_2(VAR_9, 0);
 FUNC_3(VAR_8->sh_size, VAR_4, 1);
 FUNC_3(VAR_8->sh_addr, VAR_4, 2);
 VAR_5 += VAR_8->sh_size;
}
