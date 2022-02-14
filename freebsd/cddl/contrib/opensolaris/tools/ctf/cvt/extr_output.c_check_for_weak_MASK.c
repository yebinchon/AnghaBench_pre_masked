
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef scalar_t__ uchar_t ;
struct TYPE_10__ {scalar_t__ d_buf; } ;
struct TYPE_9__ {int st_name; scalar_t__ st_value; scalar_t__ st_size; scalar_t__ st_shndx; scalar_t__ st_info; } ;
typedef TYPE_1__ GElf_Sym ;
typedef TYPE_2__ Elf_Data ;


 scalar_t__ FUNC_0 (scalar_t__) ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int * FUNC_2 (TYPE_2__*,int,TYPE_1__*) ;
 scalar_t__ FUNC_3 (char*,char const*) ;

__attribute__((used)) static int
FUNC_4(GElf_Sym *VAR_3, char const *VAR_4,
    Elf_Data *VAR_5, int VAR_6, Elf_Data *VAR_7,
    GElf_Sym *VAR_8, char **VAR_9)
{
 char *VAR_10 = ((void*)0);
 char *VAR_11 = ((void*)0);
 GElf_Sym VAR_12;
 int VAR_13 = 0;
 int VAR_14;
 VAR_12.st_info = 0;
 VAR_12.st_name = 0;

 if (FUNC_0(VAR_3->st_info) != VAR_1)
  return (0);

 for (VAR_14 = 0; VAR_14 < VAR_6; VAR_14++) {
  GElf_Sym VAR_15;
  uchar_t VAR_16;

  if (FUNC_2(VAR_5, VAR_14, &VAR_15) == ((void*)0))
   continue;

  VAR_16 = FUNC_1(VAR_15.st_info);

  if (VAR_16 == VAR_2)
   VAR_10 = (char *)VAR_7->d_buf + VAR_15.st_name;

  if (FUNC_1(VAR_3->st_info) != VAR_16 ||
      VAR_3->st_value != VAR_15.st_value)
   continue;

  if (VAR_3->st_size != VAR_15.st_size)
   continue;

  if (FUNC_0(VAR_15.st_info) == VAR_1)
   continue;

  if (VAR_15.st_shndx != VAR_3->st_shndx)
   continue;

  if (FUNC_0(VAR_15.st_info) == VAR_0 &&
      (VAR_10 == ((void*)0) || VAR_4 == ((void*)0) ||
      FUNC_3(VAR_10, VAR_4) != 0)) {
   VAR_13 = 1;
   VAR_11 = VAR_10;
   VAR_12 = VAR_15;
   continue;
  }

  *VAR_9 = VAR_10;
  *VAR_8 = VAR_15;
  return (1);
 }

 if (VAR_13) {
  *VAR_9 = VAR_11;
  *VAR_8 = VAR_12;
  return (1);
 }

 return (0);
}
