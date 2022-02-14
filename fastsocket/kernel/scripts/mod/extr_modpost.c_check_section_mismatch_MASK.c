
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct elf_info {int dummy; } ;
typedef enum mismatch { ____Placeholder_mismatch } mismatch ;
struct TYPE_11__ {int r_offset; int r_addend; } ;
struct TYPE_10__ {int st_shndx; } ;
typedef TYPE_1__ Elf_Sym ;
typedef TYPE_2__ Elf_Rela ;


 int VAR_0 ;
 TYPE_1__* FUNC_0 (struct elf_info*,int ,TYPE_1__*) ;
 TYPE_1__* FUNC_1 (struct elf_info*,int ,char const*) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (char const*,int,char const*,int ,char const*,int ,char const*,char const*,int ) ;
 char* FUNC_4 (struct elf_info*,int ) ;
 scalar_t__ FUNC_5 (char const*,char const*,char const*,char const*) ;
 int FUNC_6 (char const*,char const*) ;
 char* FUNC_7 (struct elf_info*,TYPE_1__*) ;

__attribute__((used)) static void FUNC_8(const char *VAR_1, struct elf_info *VAR_2,
                                   Elf_Rela *VAR_3, Elf_Sym *VAR_4, const char *VAR_5)
{
 const char *VAR_6;
 enum mismatch VAR_7;

 VAR_6 = FUNC_4(VAR_2, VAR_4->st_shndx);
 VAR_7 = FUNC_6(VAR_5, VAR_6);
 if (VAR_7 != VAR_0) {
  Elf_Sym *VAR_8;
  Elf_Sym *VAR_9;
  const char *VAR_10;
  const char *VAR_11;

  VAR_9 = FUNC_1(VAR_2, VAR_3->r_offset, VAR_5);
  VAR_11 = FUNC_7(VAR_2, VAR_9);
  VAR_8 = FUNC_0(VAR_2, VAR_3->r_addend, VAR_4);
  VAR_10 = FUNC_7(VAR_2, VAR_8);


  if (FUNC_5(VAR_5, VAR_11, VAR_6, VAR_10)) {
   FUNC_3(VAR_1, VAR_7,
      VAR_5, VAR_3->r_offset, VAR_11,
      FUNC_2(VAR_9), VAR_6, VAR_10,
      FUNC_2(VAR_8));
  }
 }
}
