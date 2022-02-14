
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct see_ref_s {int insn; } ;
typedef void* rtx ;


 scalar_t__ FUNC_0 (void*) ;
 int FUNC_1 (void*,int ) ;
 scalar_t__ VAR_0 ;
 int FUNC_2 (scalar_t__,char*) ;
 int FUNC_3 (scalar_t__,void*) ;

__attribute__((used)) static int
FUNC_4 (void **VAR_1, void *VAR_2)
{
  rtx VAR_3 = *VAR_1;
  struct see_ref_s *VAR_4 = (struct see_ref_s *) VAR_2;

  if (FUNC_0 (VAR_3))


    return 1;

  if (VAR_0)
    {
      FUNC_2 (VAR_0, "Inserting use extension:\n");
      FUNC_3 (VAR_0, VAR_3);
    }

  FUNC_1 (VAR_3, VAR_4->insn);

  return 1;
}
