
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct stat {scalar_t__ st_size; } ;
typedef scalar_t__ off_t ;
struct TYPE_6__ {scalar_t__* e_ident; scalar_t__ e_version; scalar_t__ e_type; scalar_t__ e_machine; int e_phentsize; int e_phoff; int e_phnum; } ;
typedef int Elf_Phdr ;
typedef TYPE_1__ Elf_Ehdr ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 int FUNC_0 (TYPE_1__) ;
 scalar_t__ VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 scalar_t__ VAR_12 ;
 int VAR_13 ;
 int FUNC_1 (char*,char const*,...) ;
 int VAR_14 ;
 TYPE_1__* FUNC_2 (int *,scalar_t__,int ,int,int,int ) ;
 int FUNC_3 (TYPE_1__*,scalar_t__) ;
 int FUNC_4 (int ) ;

__attribute__((used)) static Elf_Ehdr *
FUNC_5(int VAR_15, const char *VAR_16, const struct stat *VAR_17)
{
 Elf_Ehdr *VAR_18;


 if (VAR_17 != ((void*)0) && VAR_17->st_size < (off_t)sizeof(Elf_Ehdr)) {
  FUNC_1("%s: invalid file format", VAR_16);
  return (((void*)0));
 }

 VAR_18 = FUNC_2(((void*)0), VAR_12, VAR_13, VAR_11 | VAR_10,
     VAR_15, 0);
 if (VAR_18 == (Elf_Ehdr *)VAR_9) {
  FUNC_1("%s: read error: %s", VAR_16, FUNC_4(VAR_14));
  return (((void*)0));
 }


 if (!FUNC_0(*VAR_18)) {
  FUNC_1("%s: invalid file format", VAR_16);
  goto error;
 }
 if (VAR_18->e_ident[VAR_0] != VAR_3 ||
     VAR_18->e_ident[VAR_1] != VAR_4) {
  FUNC_1("%s: unsupported file layout", VAR_16);
  goto error;
 }
 if (VAR_18->e_ident[VAR_2] != VAR_8 ||
     VAR_18->e_version != VAR_8) {
  FUNC_1("%s: unsupported file version", VAR_16);
  goto error;
 }
 if (VAR_18->e_type != VAR_7 && VAR_18->e_type != VAR_6) {
  FUNC_1("%s: unsupported file type", VAR_16);
  goto error;
 }
 if (VAR_18->e_machine != VAR_5) {
  FUNC_1("%s: unsupported machine", VAR_16);
  goto error;
 }






 if (VAR_18->e_phentsize != sizeof(Elf_Phdr)) {
  FUNC_1(
     "%s: invalid shared object: e_phentsize != sizeof(Elf_Phdr)", VAR_16);
  goto error;
 }
 if (VAR_18->e_phoff + VAR_18->e_phnum * sizeof(Elf_Phdr) >
     (size_t)VAR_12) {
  FUNC_1("%s: program header too large", VAR_16);
  goto error;
 }
 return (VAR_18);

error:
 FUNC_3(VAR_18, VAR_12);
 return (((void*)0));
}
