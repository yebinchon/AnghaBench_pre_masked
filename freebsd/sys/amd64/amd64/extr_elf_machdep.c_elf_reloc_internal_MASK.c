
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int linker_file_t ;
typedef int (* elf_lookup_fn ) (int ,int,int,scalar_t__*) ;
struct TYPE_4__ {int r_info; scalar_t__ r_offset; } ;
struct TYPE_3__ {int r_info; scalar_t__ r_addend; scalar_t__ r_offset; } ;
typedef int Elf_Size ;
typedef TYPE_1__ Elf_Rela ;
typedef TYPE_2__ Elf_Rel ;
typedef scalar_t__ Elf_Addr ;
typedef scalar_t__ Elf64_Addr ;
typedef scalar_t__ Elf32_Addr ;




 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ,scalar_t__) ;
 int FUNC_3 (char*,int) ;
 int FUNC_4 (char*,...) ;
 scalar_t__ FUNC_5 () ;

__attribute__((used)) static int
FUNC_6(linker_file_t VAR_0, Elf_Addr VAR_1, const void *VAR_2,
    int VAR_3, elf_lookup_fn VAR_4)
{
 Elf64_Addr *VAR_5, VAR_6;
 Elf32_Addr *VAR_7, VAR_8;
 Elf_Addr VAR_9;
 Elf_Addr VAR_10;
 Elf_Size VAR_11, VAR_12;
 const Elf_Rel *VAR_13;
 const Elf_Rela *VAR_14;
 int VAR_15;

 switch (VAR_3) {
 case 139:
  VAR_13 = (const Elf_Rel *)VAR_2;
  VAR_5 = (Elf_Addr *) (VAR_1 + VAR_13->r_offset);
  VAR_11 = FUNC_1(VAR_13->r_info);
  VAR_12 = FUNC_0(VAR_13->r_info);

  switch (VAR_11) {
  case 130:
  case 137:
  case 129:
   VAR_10 = *(Elf32_Addr *)VAR_5;
   break;
  default:
   VAR_10 = *VAR_5;
   break;
  }
  break;
 case 138:
  VAR_14 = (const Elf_Rela *)VAR_2;
  VAR_5 = (Elf_Addr *) (VAR_1 + VAR_14->r_offset);
  VAR_10 = VAR_14->r_addend;
  VAR_11 = FUNC_1(VAR_14->r_info);
  VAR_12 = FUNC_0(VAR_14->r_info);
  break;
 default:
  FUNC_3("unknown reloc type %d\n", VAR_3);
 }

 switch (VAR_11) {
  case 131:
   break;

  case 136:
   VAR_15 = VAR_4(VAR_0, VAR_12, 1, &VAR_9);
   VAR_6 = VAR_9 + VAR_10;
   if (VAR_15 != 0)
    return -1;
   if (*VAR_5 != VAR_6)
    *VAR_5 = VAR_6;
   break;

  case 130:
  case 129:

   VAR_15 = VAR_4(VAR_0, VAR_12, 1, &VAR_9);
   VAR_7 = (Elf32_Addr *)VAR_5;
   VAR_8 = (Elf32_Addr)(VAR_9 + VAR_10 - (Elf_Addr)VAR_5);
   if (VAR_15 != 0)
    return -1;
   if (*VAR_7 != VAR_8)
    *VAR_7 = VAR_8;
   break;

  case 137:
   VAR_15 = VAR_4(VAR_0, VAR_12, 1, &VAR_9);
   VAR_8 = (Elf32_Addr)(VAR_9 + VAR_10);
   VAR_7 = (Elf32_Addr *)VAR_5;
   if (VAR_15 != 0)
    return -1;
   if (*VAR_7 != VAR_8)
    *VAR_7 = VAR_8;
   break;

  case 135:




   FUNC_4("kldload: unexpected R_COPY relocation\n");
   return (-1);

  case 134:
  case 132:
   VAR_15 = VAR_4(VAR_0, VAR_12, 1, &VAR_9);
   if (VAR_15 != 0)
    return -1;
   if (*VAR_5 != VAR_9)
    *VAR_5 = VAR_9;
   break;

  case 128:
   VAR_9 = FUNC_2(VAR_0, VAR_1 + VAR_10);
   VAR_6 = VAR_9;
   if (*VAR_5 != VAR_6)
    *VAR_5 = VAR_6;
   break;

  case 133:
   VAR_9 = VAR_1 + VAR_10;
   VAR_6 = ((Elf64_Addr (*)(void))VAR_9)();
   if (*VAR_5 != VAR_6)
    *VAR_5 = VAR_6;
   break;

  default:
   FUNC_4("kldload: unexpected relocation type %ld\n",
          VAR_11);
   return (-1);
 }
 return (0);
}
