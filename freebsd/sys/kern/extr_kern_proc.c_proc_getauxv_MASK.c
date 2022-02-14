
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct thread {int dummy; } ;
struct sbuf {int dummy; } ;
struct proc {int dummy; } ;
typedef int Elf_Auxinfo ;
typedef int Elf32_Auxinfo ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (struct proc*,int ) ;
 int FUNC_1 (char**,int ) ;
 int FUNC_2 (struct thread*,struct proc*,char***,size_t*,int ) ;
 scalar_t__ FUNC_3 (struct sbuf*,char**,size_t) ;

int
FUNC_4(struct thread *VAR_4, struct proc *VAR_5, struct sbuf *VAR_6)
{
 size_t VAR_7, VAR_8;
 char **VAR_9;
 int VAR_10;

 VAR_10 = FUNC_2(VAR_4, VAR_5, &VAR_9, &VAR_7, VAR_2);
 if (VAR_10 == 0) {





   VAR_8 = VAR_7 * sizeof(Elf_Auxinfo);
  if (FUNC_3(VAR_6, VAR_9, VAR_8) != 0)
   VAR_10 = VAR_0;
  FUNC_1(VAR_9, VAR_1);
 }
 return (VAR_10);
}
