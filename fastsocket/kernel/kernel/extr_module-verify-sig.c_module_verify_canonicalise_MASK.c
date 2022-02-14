
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct module_verify_data {int* canonlist; int nsects; int* canonmap; int sig_index; char* secstrings; int ncanon; TYPE_1__* sections; } ;
struct TYPE_2__ {int sh_flags; scalar_t__ sh_type; size_t sh_info; int sh_name; } ;
typedef TYPE_1__ Elf_Shdr ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int* FUNC_0 (int,int ) ;
 scalar_t__ FUNC_1 (char const*,char const*) ;

__attribute__((used)) static int FUNC_2(struct module_verify_data *VAR_5)
{
 int VAR_6, VAR_7, VAR_8, VAR_9;




 VAR_5->canonlist =
  FUNC_0(sizeof(int) * VAR_5->nsects * 2, VAR_1);
 if (!VAR_5->canonlist)
  return -VAR_0;

 VAR_5->canonmap = VAR_5->canonlist + VAR_5->nsects;
 VAR_6 = 0;

 for (VAR_7 = 1; VAR_7 < VAR_5->nsects; VAR_7++) {
  const Elf_Shdr *VAR_10 = VAR_5->sections + VAR_7;

  if (VAR_7 == VAR_5->sig_index)
   continue;


  if (VAR_10->sh_flags & VAR_2)
   VAR_5->canonlist[VAR_6++] = VAR_7;
  else if ((VAR_10->sh_type == VAR_3 ||
     VAR_10->sh_type == VAR_4) &&
    VAR_5->sections[VAR_10->sh_info].sh_flags & VAR_2)
   VAR_5->canonlist[VAR_6++] = VAR_7;
 }


 do {
  VAR_8 = 0;

  for (VAR_7 = 0; VAR_7 < VAR_6 - 1; VAR_7++) {
   const char *VAR_11, *VAR_12;

   VAR_11 = VAR_5->secstrings +
    VAR_5->sections[VAR_5->canonlist[VAR_7 + 0]].sh_name;
   VAR_12 = VAR_5->secstrings +
    VAR_5->sections[VAR_5->canonlist[VAR_7 + 1]].sh_name;

   if (FUNC_1(VAR_11, VAR_12) > 0) {
    VAR_9 = VAR_5->canonlist[VAR_7 + 0];
    VAR_5->canonlist[VAR_7 + 0] =
     VAR_5->canonlist[VAR_7 + 1];
    VAR_5->canonlist[VAR_7 + 1] = VAR_9;
    VAR_8 = 1;
   }
  }

 } while (VAR_8);

 for (VAR_7 = 0; VAR_7 < VAR_6; VAR_7++)
  VAR_5->canonmap[VAR_5->canonlist[VAR_7]] = VAR_7 + 1;
 VAR_5->ncanon = VAR_6;
 return 0;
}
