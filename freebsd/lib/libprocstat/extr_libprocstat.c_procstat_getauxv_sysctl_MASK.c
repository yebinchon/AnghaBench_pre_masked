
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int pid_t ;
typedef int Elf_Auxinfo ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (int) ;
 int * FUNC_2 (size_t) ;
 int FUNC_3 (int*) ;
 int * FUNC_4 (int,unsigned int*) ;
 int FUNC_5 (int*,int ,int *,size_t*,int *,int ) ;
 int FUNC_6 (char*,int,...) ;

__attribute__((used)) static Elf_Auxinfo *
FUNC_7(pid_t VAR_7, unsigned int *VAR_8)
{
 Elf_Auxinfo *VAR_9;
 int VAR_10[4];
 size_t VAR_11;





 VAR_10[0] = VAR_0;
 VAR_10[1] = VAR_3;
 VAR_10[2] = VAR_4;
 VAR_10[3] = VAR_7;
 VAR_11 = VAR_5 * sizeof(Elf_Auxinfo);
 VAR_9 = FUNC_2(VAR_11);
 if (VAR_9 == ((void*)0)) {
  FUNC_6("malloc(%zu)", VAR_11);
  return (((void*)0));
 }
 if (FUNC_5(VAR_10, FUNC_3(VAR_10), VAR_9, &VAR_11, ((void*)0), 0) == -1) {
  if (VAR_6 != VAR_2 && VAR_6 != VAR_1)
   FUNC_6("sysctl: kern.proc.auxv: %d: %d", VAR_7, VAR_6);
  FUNC_0(VAR_9);
  return (((void*)0));
 }
 *VAR_8 = VAR_11 / sizeof(Elf_Auxinfo);
 return (VAR_9);
}
