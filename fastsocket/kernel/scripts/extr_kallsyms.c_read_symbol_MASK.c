
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sym_entry {char* sym; scalar_t__ len; int addr; } ;
typedef int FILE ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (char*,int,int *) ;
 int FUNC_2 (int ,char*) ;
 int FUNC_3 (int *,char*,int *,char*,char*) ;
 scalar_t__ FUNC_4 (char*) ;
 char* FUNC_5 (scalar_t__) ;
 scalar_t__ FUNC_6 (char*,int ) ;
 int VAR_3 ;
 scalar_t__ FUNC_7 (char*,char*) ;
 int FUNC_8 (char*,char*) ;
 scalar_t__ FUNC_9 (char*) ;
 char VAR_4 ;
 unsigned char FUNC_10 (char) ;

__attribute__((used)) static int FUNC_11(FILE *VAR_5, struct sym_entry *VAR_6)
{
 char VAR_7[500];
 char *VAR_8, VAR_9;
 int VAR_10;

 VAR_10 = FUNC_3(VAR_5, "%llx %c %499s\n", &VAR_6->addr, &VAR_9, VAR_7);
 if (VAR_10 != 3) {
  if (VAR_10 != VAR_0) {

   FUNC_1(VAR_7, 500, VAR_5);
  }
  return -1;
 }

 VAR_8 = VAR_7;

 if (VAR_4 && VAR_7[0] == VAR_4)
  VAR_8++;


 if (FUNC_7(VAR_8, "_text") == 0)
  VAR_2 = VAR_6->addr;
 else if (FUNC_6(VAR_8, VAR_6->addr) == 0)
                     ;
 else if (FUNC_10(VAR_9) == 'A')
 {

  if (FUNC_7(VAR_8, "__kernel_syscall_via_break") &&
      FUNC_7(VAR_8, "__kernel_syscall_via_epc") &&
      FUNC_7(VAR_8, "__kernel_sigtramp") &&
      FUNC_7(VAR_8, "__gp"))
   return -1;

 }
 else if (FUNC_10(VAR_9) == 'U' ||
   FUNC_4(VAR_8))
  return -1;

 else if (VAR_7[0] == '$')
  return -1;

 else if (VAR_9 == 'N')
  return -1;



 VAR_6->len = FUNC_9(VAR_7) + 1;
 VAR_6->sym = FUNC_5(VAR_6->len + 1);
 if (!VAR_6->sym) {
  FUNC_2(VAR_3, "kallsyms failure: "
   "unable to allocate required amount of memory\n");
  FUNC_0(VAR_1);
 }
 FUNC_8((char *)VAR_6->sym + 1, VAR_7);
 VAR_6->sym[0] = VAR_9;

 return 0;
}
