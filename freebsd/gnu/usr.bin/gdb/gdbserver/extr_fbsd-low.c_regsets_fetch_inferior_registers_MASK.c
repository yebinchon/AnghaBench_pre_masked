
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct regset_info {scalar_t__ size; int (* store_function ) (void*) ;int get_request; } ;
typedef int PTRACE_ARG3_TYPE ;


 int VAR_0 ;
 void* FUNC_0 (scalar_t__) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int ,int,int ,int ) ;
 int FUNC_3 (char*,char*,int) ;
 int FUNC_4 (void*) ;
 struct regset_info* VAR_1 ;

__attribute__((used)) static int
FUNC_5 ()
{
  struct regset_info *VAR_2;

  VAR_2 = VAR_1;

  while (VAR_2->size >= 0)
    {
      void *VAR_3;
      int VAR_4;

      if (VAR_2->size == 0)
 {
   VAR_2 ++;
   continue;
 }

      VAR_3 = FUNC_0 (VAR_2->size);
      VAR_4 = FUNC_2 (VAR_2->get_request, VAR_0, (PTRACE_ARG3_TYPE) VAR_3, 0);
      if (VAR_4 < 0)
 {
   char VAR_5[256];
   FUNC_3 (VAR_5, "ptrace(regsets_fetch_inferior_registers) PID=%d",
     VAR_0);
   FUNC_1 (VAR_5);
 }
      VAR_2->store_function (VAR_3);
      VAR_2 ++;
    }
  return 0;
}
