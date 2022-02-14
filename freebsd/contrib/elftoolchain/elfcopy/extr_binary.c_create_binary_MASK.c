
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ ssize_t ;
typedef int off_t ;
struct TYPE_6__ {scalar_t__ d_size; int * d_buf; } ;
struct TYPE_5__ {int sh_flags; scalar_t__ sh_type; scalar_t__ sh_size; int sh_offset; int sh_addr; } ;
typedef TYPE_1__ GElf_Shdr ;
typedef int Elf_Scn ;
typedef TYPE_2__ Elf_Data ;
typedef int Elf64_Addr ;
typedef int Elf ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int * FUNC_0 (int,int ,int *) ;
 int FUNC_1 (int) ;
 int FUNC_2 () ;
 int * FUNC_3 (int *,int *) ;
 TYPE_2__* FUNC_4 (int *,int *) ;
 int FUNC_5 (int ,char*) ;
 int FUNC_6 (int ,char*,int ) ;
 int * FUNC_7 (int *,TYPE_1__*) ;
 scalar_t__ FUNC_8 (int,int,int ) ;
 int FUNC_9 (char*,int ) ;
 scalar_t__ FUNC_10 (int,int *,scalar_t__) ;

void
FUNC_11(int VAR_5, int VAR_6)
{
 Elf *VAR_7;
 Elf_Scn *VAR_8;
 Elf_Data *VAR_9;
 Elf64_Addr VAR_10;
 GElf_Shdr VAR_11;
 off_t VAR_12, VAR_13;
 int VAR_14;

 if ((VAR_7 = FUNC_0(VAR_5, VAR_0, ((void*)0))) == ((void*)0))
  FUNC_6(VAR_1, "elf_begin() failed: %s",
      FUNC_1(-1));

 VAR_10 = 0;
 VAR_12 = 0;
 if (FUNC_8(VAR_6, VAR_12, VAR_2) < 0)
  FUNC_5(VAR_1, "lseek failed");




 VAR_12 = -1;
 VAR_8 = ((void*)0);
 while ((VAR_8 = FUNC_3(VAR_7, VAR_8)) != ((void*)0)) {
  if (FUNC_7(VAR_8, &VAR_11) == ((void*)0)) {
   FUNC_9("gelf_getshdr failed: %s", FUNC_1(-1));
   (void) FUNC_2();
   continue;
  }
  if ((VAR_11.sh_flags & VAR_3) == 0 ||
      VAR_11.sh_type == VAR_4 ||
      VAR_11.sh_size == 0)
   continue;
  if (VAR_12 == -1 || (off_t) VAR_11.sh_offset < VAR_12) {
   VAR_12 = VAR_11.sh_offset;
   VAR_10 = VAR_11.sh_addr;
  }
 }
 VAR_14 = FUNC_2();
 if (VAR_14 != 0)
  FUNC_9("elf_nextscn failed: %s", FUNC_1(VAR_14));

 if (VAR_12 == -1)
  return;




 VAR_8 = ((void*)0);
 while ((VAR_8 = FUNC_3(VAR_7, VAR_8)) != ((void*)0)) {
  if (FUNC_7(VAR_8, &VAR_11) == ((void*)0)) {
   FUNC_9("gelf_getshdr failed: %s", FUNC_1(-1));
   (void) FUNC_2();
   continue;
  }
  if ((VAR_11.sh_flags & VAR_3) == 0 ||
      VAR_11.sh_type == VAR_4 ||
      VAR_11.sh_size == 0)
   continue;
  (void) FUNC_2();
  if ((VAR_9 = FUNC_4(VAR_8, ((void*)0))) == ((void*)0)) {
   VAR_14 = FUNC_2();
   if (VAR_14 != 0)
    FUNC_9("elf_rawdata failed: %s", FUNC_1(-1));
   continue;
  }
  if (VAR_9->d_buf == ((void*)0) || VAR_9->d_size == 0)
   continue;


  VAR_13 = VAR_11.sh_addr - VAR_10;
  if (FUNC_8(VAR_6, VAR_13, VAR_2) < 0)
   FUNC_5(VAR_1, "lseek failed");


  if (FUNC_10(VAR_6, VAR_9->d_buf, VAR_9->d_size) != (ssize_t) VAR_9->d_size)
   FUNC_5(VAR_1, "write failed");
 }
 VAR_14 = FUNC_2();
 if (VAR_14 != 0)
  FUNC_9("elf_nextscn failed: %s", FUNC_1(VAR_14));
}
