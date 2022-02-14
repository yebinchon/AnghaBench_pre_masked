
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int Elf_Addr ;


 size_t FUNC_0 (size_t,int ) ;
 int* FUNC_1 (int) ;
 int FUNC_2 (void*,int,int) ;
 int FUNC_3 () ;
 char* FUNC_4 (size_t,size_t) ;
 int FUNC_5 (void*,void const*,int) ;
 int FUNC_6 (void*,int ,int) ;
 size_t FUNC_7 (int,size_t) ;
 void const* VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_8 (char*) ;
 int VAR_3 ;

void *
FUNC_9(void *VAR_4, size_t VAR_5, size_t VAR_6)
{
 size_t VAR_7;
 char *VAR_8;
 Elf_Addr *VAR_9;
 Elf_Addr VAR_10, VAR_11;

 VAR_6 = FUNC_0(VAR_6, VAR_1);
 VAR_7 = FUNC_7(VAR_3, VAR_6);

 if (VAR_5 < 2 * sizeof(Elf_Addr))
  VAR_5 = 2 * sizeof(Elf_Addr);
 VAR_8 = FUNC_4(VAR_7 + VAR_5, VAR_6);
 if (VAR_8 == ((void*)0)) {
  FUNC_8("__libc_allocate_tls: Out of memory.\n");
  FUNC_3();
 }
 FUNC_6(VAR_8, 0, VAR_7 + VAR_5);
 VAR_9 = FUNC_1(3 * sizeof(Elf_Addr));
 if (VAR_9 == ((void*)0)) {
  FUNC_8("__libc_allocate_tls: Out of memory.\n");
  FUNC_3();
 }

 VAR_10 = (Elf_Addr)(VAR_8 + VAR_7);
 ((Elf_Addr*)VAR_10)[0] = VAR_10;
 ((Elf_Addr*)VAR_10)[1] = (Elf_Addr) VAR_9;

 VAR_9[0] = 1;
 VAR_9[1] = 1;
 VAR_9[2] = VAR_10 - VAR_3;

 if (VAR_4) {



  VAR_11 = (Elf_Addr) VAR_4;
  FUNC_5((void *)(VAR_10 - VAR_3),
      (const void *)(VAR_11 - VAR_3),
      VAR_3);





  FUNC_2(VAR_4, 2*sizeof(Elf_Addr), sizeof(Elf_Addr));
 } else {
  FUNC_5((void *)(VAR_10 - VAR_3),
      VAR_0, VAR_2);
  FUNC_6((void *)(VAR_10 - VAR_3 + VAR_2),
      0, VAR_3 - VAR_2);
 }

 return (void*) VAR_10;
}
