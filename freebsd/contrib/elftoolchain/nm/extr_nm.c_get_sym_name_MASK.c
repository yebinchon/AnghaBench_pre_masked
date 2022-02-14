
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int st_shndx; int st_name; int st_info; } ;
typedef TYPE_1__ GElf_Sym ;
typedef int Elf ;


 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ VAR_0 ;
 char* FUNC_1 (int *,size_t,int ) ;

__attribute__((used)) static const char *
FUNC_2(Elf *VAR_1, const GElf_Sym *VAR_2, size_t VAR_3, const char **VAR_4,
    int VAR_5)
{
 const char *VAR_6;

 VAR_6 = ((void*)0);


 if (FUNC_0(VAR_2->st_info) == VAR_0) {
  if (VAR_4 != ((void*)0) && VAR_2->st_shndx < VAR_5)
   VAR_6 = VAR_4[VAR_2->st_shndx];
 } else
  VAR_6 = FUNC_1(VAR_1, VAR_3, VAR_2->st_name);

 if (VAR_6 == ((void*)0))
  VAR_6 = "(null)";

 return (VAR_6);
}
