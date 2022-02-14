
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct regset_info {scalar_t__ size; int set_request; int (* fill_function ) (void*) ;} ;
typedef int PTRACE_ARG3_TYPE ;


 int FUNC_0 (void*) ;
 int VAR_0 ;
 void* FUNC_1 (scalar_t__) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (int ,int ,int ,int ) ;
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

      VAR_3 = FUNC_1 (VAR_2->size);
      VAR_2->fill_function (VAR_3);
      VAR_4 = FUNC_3 (VAR_2->set_request, VAR_0, (PTRACE_ARG3_TYPE) VAR_3, 0);
      if (VAR_4 < 0)
 {
   FUNC_2 ("Warning: ptrace(regsets_store_inferior_registers)");
 }
      VAR_2 ++;
      FUNC_0 (VAR_3);
    }
  return 0;
}
