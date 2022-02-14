
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct elf_info {int dummy; } ;
struct TYPE_4__ {scalar_t__ sh_type; int sh_flags; } ;
typedef TYPE_1__ Elf_Shdr ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (char const*,int ) ;
 char* FUNC_1 (struct elf_info*,TYPE_1__*) ;
 int VAR_2 ;
 int FUNC_2 (char*,char const*,char const*) ;

__attribute__((used)) static void FUNC_3(const char *VAR_3, struct elf_info *VAR_4,
                          Elf_Shdr *VAR_5)
{
 const char *VAR_6 = FUNC_1(VAR_4, VAR_5);

 if (VAR_5->sh_type == VAR_1 &&
     !(VAR_5->sh_flags & VAR_0) &&
     !FUNC_0(VAR_6, VAR_2)) {
  FUNC_2("%s (%s): unexpected non-allocatable section.\n"
       "Did you forget to use \"ax\"/\"aw\" in a .S file?\n"
       "Note that for example <linux/init.h> contains\n"
       "section definitions for use in .S files.\n\n",
       VAR_3, VAR_6);
 }
}
