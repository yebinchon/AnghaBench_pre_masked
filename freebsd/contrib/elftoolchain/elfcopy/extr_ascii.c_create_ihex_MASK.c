
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int uint16_t ;
struct TYPE_9__ {scalar_t__ d_size; int * d_buf; } ;
struct TYPE_8__ {int e_entry; } ;
struct TYPE_7__ {int sh_flags; scalar_t__ sh_type; scalar_t__ sh_size; int sh_addr; } ;
typedef TYPE_1__ GElf_Shdr ;
typedef TYPE_2__ GElf_Ehdr ;
typedef int Elf_Scn ;
typedef TYPE_3__ Elf_Data ;
typedef int Elf ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int * FUNC_0 (int,int ,int *) ;
 int FUNC_1 (int) ;
 int FUNC_2 () ;
 TYPE_3__* FUNC_3 (int *,int *) ;
 int * FUNC_4 (int *,int *) ;
 int FUNC_5 (int ,char*,int ) ;
 int * FUNC_6 (int *,TYPE_2__*) ;
 int * FUNC_7 (int *,TYPE_1__*) ;
 int FUNC_8 (int,int,int *,scalar_t__) ;
 int FUNC_9 (int) ;
 int FUNC_10 (int,int) ;
 int FUNC_11 (int,int ) ;
 int FUNC_12 (char*,...) ;

void
FUNC_13(int VAR_4, int VAR_5)
{
 Elf *VAR_6;
 Elf_Scn *VAR_7;
 Elf_Data *VAR_8;
 GElf_Ehdr VAR_9;
 GElf_Shdr VAR_10;
 int VAR_11;
 uint16_t VAR_12, VAR_13;

 if ((VAR_6 = FUNC_0(VAR_4, VAR_0, ((void*)0))) == ((void*)0))
  FUNC_5(VAR_1, "elf_begin() failed: %s",
      FUNC_1(-1));

 VAR_13 = 0;
 VAR_7 = ((void*)0);
 while ((VAR_7 = FUNC_4(VAR_6, VAR_7)) != ((void*)0)) {
  if (FUNC_7(VAR_7, &VAR_10) == ((void*)0)) {
   FUNC_12("gelf_getshdr failed: %s", FUNC_1(-1));
   (void) FUNC_2();
   continue;
  }
  if ((VAR_10.sh_flags & VAR_2) == 0 ||
      VAR_10.sh_type == VAR_3 ||
      VAR_10.sh_size == 0)
   continue;
  if (VAR_10.sh_addr > 0xFFFFFFFF) {
   FUNC_12("address space too big for Intel Hex file");
   continue;
  }
  (void) FUNC_2();
  if ((VAR_8 = FUNC_3(VAR_7, ((void*)0))) == ((void*)0)) {
   VAR_11 = FUNC_2();
   if (VAR_11 != 0)
    FUNC_12("elf_getdata failed: %s", FUNC_1(-1));
   continue;
  }
  if (VAR_8->d_buf == ((void*)0) || VAR_8->d_size == 0)
   continue;
  VAR_12 = (VAR_10.sh_addr >> 16) & 0xFFFF;
  if (VAR_12 > 0 && VAR_12 != VAR_13) {

   VAR_13 = VAR_12;
   FUNC_10(VAR_5, VAR_12);
  }
  FUNC_8(VAR_5, VAR_10.sh_addr, VAR_8->d_buf, VAR_8->d_size);
 }
 VAR_11 = FUNC_2();
 if (VAR_11 != 0)
  FUNC_12("elf_nextscn failed: %s", FUNC_1(VAR_11));

 if (FUNC_6(VAR_6, &VAR_9) == ((void*)0))
  FUNC_5(VAR_1, "gelf_getehdr() failed: %s",
      FUNC_1(-1));
 FUNC_11(VAR_5, VAR_9.e_entry);
 FUNC_9(VAR_5);
}
