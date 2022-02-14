
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int linker_file_t ;
typedef int (* elf_lookup_fn ) (int ,int,int,scalar_t__*) ;
struct TYPE_4__ {scalar_t__ r_offset; int r_info; } ;
struct TYPE_3__ {scalar_t__ r_offset; scalar_t__ r_addend; int r_info; } ;
typedef int Elf_Word ;
typedef TYPE_1__ Elf_Rela ;
typedef TYPE_2__ Elf_Rel ;
typedef scalar_t__ Elf_Addr ;




 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;





 scalar_t__ FUNC_2 (int ,scalar_t__) ;
 scalar_t__ FUNC_3 (scalar_t__*) ;
 int FUNC_4 (char*,int) ;
 int FUNC_5 (char*,...) ;
 int FUNC_6 (scalar_t__*,scalar_t__) ;

__attribute__((used)) static int
FUNC_7(linker_file_t VAR_0, Elf_Addr VAR_1, const void *VAR_2,
    int VAR_3, int VAR_4, elf_lookup_fn VAR_5)
{
 Elf_Addr *VAR_6;
 Elf_Addr VAR_7;
 Elf_Addr VAR_8;
 Elf_Word VAR_9, VAR_10;
 const Elf_Rel *VAR_11;
 const Elf_Rela *VAR_12;
 int VAR_13;

 switch (VAR_3) {
 case 134:
  VAR_11 = (const Elf_Rel *)VAR_2;
  VAR_6 = (Elf_Addr *) (VAR_1 + VAR_11->r_offset);
  VAR_8 = FUNC_3(VAR_6);
  VAR_9 = FUNC_1(VAR_11->r_info);
  VAR_10 = FUNC_0(VAR_11->r_info);
  break;
 case 133:
  VAR_12 = (const Elf_Rela *)VAR_2;
  VAR_6 = (Elf_Addr *) (VAR_1 + VAR_12->r_offset);
  VAR_8 = VAR_12->r_addend;
  VAR_9 = FUNC_1(VAR_12->r_info);
  VAR_10 = FUNC_0(VAR_12->r_info);
  break;
 default:
  FUNC_4("unknown reloc type %d\n", VAR_3);
 }

 if (VAR_4) {
  if (VAR_9 == 128) {
   VAR_7 = FUNC_2(VAR_0, VAR_1 + VAR_8);
   if (FUNC_3(VAR_6) != VAR_7)
    FUNC_6(VAR_6, VAR_7);
  }
  return (0);
 }

 switch (VAR_9) {

  case 129:
   break;

  case 132:
   VAR_13 = VAR_5(VAR_0, VAR_10, 1, &VAR_7);
   if (VAR_13 != 0)
    return -1;
   FUNC_6(VAR_6, VAR_7 + FUNC_3(VAR_6));
   break;

  case 131:




   FUNC_5("kldload: unexpected R_COPY relocation\n");
   return -1;
   break;

  case 130:
   VAR_13 = VAR_5(VAR_0, VAR_10, 1, &VAR_7);
   if (VAR_13 == 0) {
    FUNC_6(VAR_6, VAR_7);
    return (0);
   }
   return (-1);
  case 128:
   break;

  default:
   FUNC_5("kldload: unexpected relocation type %d\n",
          VAR_9);
   return -1;
 }
 return(0);
}
