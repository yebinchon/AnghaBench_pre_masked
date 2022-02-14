
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint16_t ;
struct mips_tmp_reloc {int ahl; int* where_hi16; } ;
typedef int linker_file_t ;
typedef int int16_t ;
typedef int (* elf_lookup_fn ) (int ,int,int,int*) ;
struct TYPE_4__ {int r_offset; int r_info; } ;
struct TYPE_3__ {int r_offset; int r_addend; int r_info; } ;
typedef int Elf_Word ;
typedef TYPE_1__ Elf_Rela ;
typedef TYPE_2__ Elf_Rel ;
typedef int Elf_Addr ;
typedef int Elf64_Addr ;
typedef int Elf32_Addr ;




 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int,int*) ;
 int FUNC_3 (struct mips_tmp_reloc*) ;
 struct mips_tmp_reloc* FUNC_4 () ;
 int FUNC_5 (char*,int) ;
 int FUNC_6 (char*,int) ;

__attribute__((used)) static int
FUNC_7(linker_file_t VAR_0, Elf_Addr VAR_1, const void *VAR_2,
    int VAR_3, int VAR_4, elf_lookup_fn VAR_5)
{
 Elf32_Addr *VAR_6 = (Elf32_Addr *)((void*)0);
 Elf_Addr VAR_7;
 Elf_Addr VAR_8 = (Elf_Addr)0;
 Elf_Word VAR_9 = (Elf_Word)0, VAR_10;
 struct mips_tmp_reloc *VAR_11;
 const Elf_Rel *VAR_12 = ((void*)0);
 const Elf_Rela *VAR_13 = ((void*)0);
 int VAR_14;


 static Elf_Addr VAR_15;

 switch (VAR_3) {
 case 137:
  VAR_12 = (const Elf_Rel *)VAR_2;
  VAR_6 = (Elf32_Addr *) (VAR_1 + VAR_12->r_offset);
  VAR_9 = FUNC_1(VAR_12->r_info);
  VAR_10 = FUNC_0(VAR_12->r_info);
  switch (VAR_9) {
  case 133:
   VAR_8 = *(Elf64_Addr *)VAR_6;
   break;
  default:
   VAR_8 = *VAR_6;
   break;
  }

  break;
 case 136:
  VAR_13 = (const Elf_Rela *)VAR_2;
  VAR_6 = (Elf32_Addr *) (VAR_1 + VAR_13->r_offset);
  VAR_8 = VAR_13->r_addend;
  VAR_9 = FUNC_1(VAR_13->r_info);
  VAR_10 = FUNC_0(VAR_13->r_info);
  break;
 default:
  FUNC_5("unknown reloc type %d\n", VAR_3);
 }

 switch (VAR_9) {
 case 128:
  break;

 case 134:
  VAR_14 = VAR_5(VAR_0, VAR_10, 1, &VAR_7);
  if (VAR_14 != 0)
   return (-1);
  VAR_7 += VAR_8;
  if (*VAR_6 != VAR_7)
   *VAR_6 = (Elf32_Addr)VAR_7;
  break;

 case 135:
  VAR_14 = VAR_5(VAR_0, VAR_10, 1, &VAR_7);
  if (VAR_14 != 0)
   return (-1);

  VAR_8 &= 0x03ffffff;



  if (VAR_13 == ((void*)0))
   VAR_8 <<= 2;

  VAR_7 += ((Elf_Addr)VAR_6 & 0xf0000000) | VAR_8;
  VAR_7 >>= 2;

  *VAR_6 &= ~0x03ffffff;
  *VAR_6 |= VAR_7 & 0x03ffffff;
  break;

 case 133:
  VAR_14 = VAR_5(VAR_0, VAR_10, 1, &VAR_7);
  if (VAR_14 != 0)
   return (-1);
  VAR_7 += VAR_8;
  if (*(Elf64_Addr*)VAR_6 != VAR_7)
   *(Elf64_Addr*)VAR_6 = VAR_7;
  break;
 case 132:
  if (VAR_13 != ((void*)0)) {
   VAR_14 = VAR_5(VAR_0, VAR_10, 1, &VAR_7);
   if (VAR_14 != 0)
    return (-1);
   VAR_7 += VAR_8;
   *VAR_6 &= 0xffff0000;
   *VAR_6 |= ((((long long) VAR_7 + 0x8000LL) >> 16) & 0xffff);
  } else {





   if (FUNC_2(VAR_8 << 16, VAR_6) == 0)
    return (-1);
   VAR_15 = VAR_8 << 16;
  }
  break;

 case 129:
  if (VAR_13 != ((void*)0)) {
   VAR_14 = VAR_5(VAR_0, VAR_10, 1, &VAR_7);
   if (VAR_14 != 0)
    return (-1);
   VAR_7 += VAR_8;
   *VAR_6 &= 0xffff0000;
   *VAR_6 |= VAR_7 & 0xffff;
  } else {
   Elf_Addr VAR_16;
   Elf_Addr VAR_17;

   VAR_16 = VAR_15 + (int16_t) VAR_8;
   VAR_14 = VAR_5(VAR_0, VAR_10, 1, &VAR_7);
   if (VAR_14 != 0)
    return (-1);

   VAR_17 = VAR_8 & 0xffff0000;


   VAR_17 |= (uint16_t)(VAR_16 + VAR_7);
   *VAR_6 = VAR_17;
   while ((VAR_11 = FUNC_4()) != ((void*)0)) {
    Elf_Addr VAR_18;





    VAR_18 = VAR_11->ahl;
    VAR_18 += (int16_t) VAR_8;

    VAR_17 = *(VAR_11->where_hi16);
    VAR_17 &= 0xffff0000;
    VAR_17 |= ((VAR_18 + VAR_7) -
        (int16_t)(VAR_18 + VAR_7)) >> 16;
    *(VAR_11->where_hi16) = VAR_17;
    FUNC_3(VAR_11);
   }
  }

  break;

 case 131:
  VAR_14 = VAR_5(VAR_0, VAR_10, 1, &VAR_7);
  if (VAR_14 != 0)
   return (-1);
  VAR_7 += VAR_8;
  *VAR_6 &= 0xffff0000;
  *VAR_6 |= (((long long)VAR_7 + 0x80008000LL) >> 32) & 0xffff;
  break;

 case 130:
  VAR_14 = VAR_5(VAR_0, VAR_10, 1, &VAR_7);
  if (VAR_14 != 0)
   return (-1);
  VAR_7 += VAR_8;
  *VAR_6 &= 0xffff0000;
  *VAR_6 |= (((long long)VAR_7 + 0x800080008000LL) >> 48) & 0xffff;
  break;

 default:
  FUNC_6("kldload: unexpected relocation type %d\n",
   VAR_9);
  return (-1);
 }

 return(0);
}
