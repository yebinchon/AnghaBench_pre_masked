
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct stat {size_t st_size; } ;
struct TYPE_3__ {scalar_t__* e_ident; } ;
typedef int Elf64_Ehdr ;
typedef TYPE_1__ Elf32_Ehdr ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 size_t VAR_4 ;
 size_t VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 scalar_t__ VAR_12 ;
 void* VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (void*,size_t,TYPE_1__*) ;
 int FUNC_3 (void*,size_t,int *) ;
 scalar_t__ FUNC_4 (int ) ;
 int FUNC_5 (char*,char*) ;
 int FUNC_6 (int ,char*) ;
 scalar_t__ FUNC_7 (int,struct stat*) ;
 int VAR_20 ;
 void* FUNC_8 (int *,size_t,int,int ,int,int ) ;
 int FUNC_9 (char*,int ) ;
 int * VAR_21 ;
 int VAR_22 ;
 int FUNC_10 (char*) ;
 int VAR_23 ;
 scalar_t__ FUNC_11 (char*,char*) ;
 int FUNC_12 () ;
 int FUNC_13 (char*,char*,char*) ;

int FUNC_14(int VAR_24, char **VAR_25)
{
 struct stat VAR_26;
 Elf32_Ehdr *VAR_27;
 Elf64_Ehdr *VAR_28;
 size_t VAR_29;
 void *VAR_30;
 int VAR_31, VAR_32, VAR_33;

 while (VAR_24 > 1 && FUNC_11("-v", VAR_25[1]) == 0) {
  VAR_25++;
  VAR_24--;
  VAR_20++;
 }

 if (VAR_24 != 3)
  FUNC_12();


 VAR_31 = FUNC_9(VAR_25[1], VAR_15);
 if (VAR_31 < 0) {
  FUNC_10("open input");
  FUNC_1(1);
 }

 if (FUNC_7(VAR_31, &VAR_26) < 0) {
  FUNC_10("fstat");
  FUNC_1(1);
 }

 VAR_29 = VAR_26.st_size;

 VAR_30 = FUNC_8(((void*)0), VAR_29, VAR_16|VAR_17, VAR_14, VAR_31, 0);
 if (VAR_30 == VAR_13) {
  FUNC_10("mmap");
  FUNC_1(1);
 }

 if (FUNC_0(VAR_31) < 0) {
  FUNC_10("close input");
  FUNC_1(1);
 }


 VAR_27 = VAR_30;
 VAR_28 = VAR_30;

 if (VAR_27->e_ident[VAR_2] != VAR_8 ||
     VAR_27->e_ident[VAR_3] != VAR_9 ||
     VAR_27->e_ident[VAR_4] != VAR_10 ||
     VAR_27->e_ident[VAR_5] != VAR_11
     ) {
  FUNC_6(VAR_23, "Module does not appear to be ELF\n");
  FUNC_1(3);
 }


 VAR_33 = (VAR_27->e_ident[VAR_0] == VAR_6);
 VAR_32 = (VAR_27->e_ident[VAR_1] == VAR_7);
 VAR_21 = VAR_32 ? &VAR_18 : &VAR_19;

 FUNC_13("Module is %s-bit %s-endian\n",
  VAR_33 ? "64" : "32",
  VAR_32 ? "big" : "little");


 VAR_22 = FUNC_5(VAR_25[2], "w");
 if (!VAR_22) {
  FUNC_10("open output");
  FUNC_1(1);
 }


 if (VAR_33)
  FUNC_3(VAR_30, VAR_29, VAR_28);
 else
  FUNC_2(VAR_30, VAR_29, VAR_27);


 if (FUNC_4(VAR_22) == VAR_12) {
  FUNC_10("close output");
  FUNC_1(1);
 }

 return 0;
}
