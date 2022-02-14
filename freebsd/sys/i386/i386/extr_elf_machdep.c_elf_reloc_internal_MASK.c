
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
 int VAR_0 ;







 scalar_t__ FUNC_2 (int ,scalar_t__) ;
 int FUNC_3 (char*,int) ;
 int FUNC_4 (char*,...) ;
 scalar_t__ FUNC_5 () ;

__attribute__((used)) static int
FUNC_6(linker_file_t VAR_1, Elf_Addr VAR_2, const void *VAR_3,
    int VAR_4, elf_lookup_fn VAR_5, int VAR_6)
{
 Elf_Addr *VAR_7;
 Elf_Addr VAR_8;
 Elf_Addr VAR_9;
 Elf_Word VAR_10, VAR_11;
 const Elf_Rel *VAR_12;
 const Elf_Rela *VAR_13;
 int VAR_14;

 switch (VAR_4) {
 case 136:
  VAR_12 = (const Elf_Rel *)VAR_3;
  VAR_7 = (Elf_Addr *) (VAR_2 + VAR_12->r_offset);
  VAR_9 = *VAR_7;
  VAR_10 = FUNC_1(VAR_12->r_info);
  VAR_11 = FUNC_0(VAR_12->r_info);
  break;
 case 135:
  VAR_13 = (const Elf_Rela *)VAR_3;
  VAR_7 = (Elf_Addr *) (VAR_2 + VAR_13->r_offset);
  VAR_9 = VAR_13->r_addend;
  VAR_10 = FUNC_1(VAR_13->r_info);
  VAR_11 = FUNC_0(VAR_13->r_info);
  break;
 default:
  FUNC_3("unknown reloc type %d\n", VAR_4);
 }

 if ((VAR_6 & VAR_0) != 0) {
  if (VAR_10 == 128) {
   VAR_8 = FUNC_2(VAR_1, VAR_2 + VAR_9);
   if (*VAR_7 != VAR_8)
    *VAR_7 = VAR_8;
  }
  return (0);
 }

 switch (VAR_10) {

  case 130:
   break;

  case 134:
   VAR_14 = VAR_5(VAR_1, VAR_11, 1, &VAR_8);
   if (VAR_14 != 0)
    return -1;
   VAR_8 += VAR_9;
   if (*VAR_7 != VAR_8)
    *VAR_7 = VAR_8;
   break;

  case 129:
   VAR_14 = VAR_5(VAR_1, VAR_11, 1, &VAR_8);
   if (VAR_14 != 0)
    return -1;
   VAR_8 += VAR_9 - (Elf_Addr)VAR_7;
   if (*VAR_7 != VAR_8)
    *VAR_7 = VAR_8;
   break;

  case 133:




   FUNC_4("kldload: unexpected R_COPY relocation\n");
   return -1;
   break;

  case 132:
   VAR_14 = VAR_5(VAR_1, VAR_11, 1, &VAR_8);
   if (VAR_14 != 0)
    return -1;
   if (*VAR_7 != VAR_8)
    *VAR_7 = VAR_8;
   break;

  case 128:
   break;

  case 131:
   VAR_8 = VAR_2 + VAR_9;
   VAR_8 = ((Elf_Addr (*)(void))VAR_8)();
   if (*VAR_7 != VAR_8)
    *VAR_7 = VAR_8;
   break;
  default:
   FUNC_4("kldload: unexpected relocation type %d\n",
          VAR_10);
   return -1;
 }
 return(0);
}
