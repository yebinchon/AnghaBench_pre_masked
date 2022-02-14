
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


typedef int bfd_vma ;
struct TYPE_12__ {unsigned int (* dis_hash ) (char*,unsigned long) ;int (* dis_hash_p ) (int ) ;} ;
struct TYPE_11__ {int insn; struct TYPE_11__* next; } ;
typedef TYPE_1__ CGEN_INSN_LIST ;
typedef TYPE_2__* CGEN_CPU_DESC ;


 scalar_t__ FUNC_0 (TYPE_2__*) ;
 scalar_t__ VAR_0 ;
 unsigned long FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (TYPE_1__*,int ,TYPE_1__**,unsigned int) ;
 int FUNC_4 (int ,char*,int ,int) ;
 int FUNC_5 (int ) ;
 unsigned int FUNC_6 (char*,unsigned long) ;

__attribute__((used)) static CGEN_INSN_LIST *
FUNC_7 (CGEN_CPU_DESC VAR_1,
  const CGEN_INSN_LIST *VAR_2,
  CGEN_INSN_LIST **VAR_3,
  CGEN_INSN_LIST *VAR_4)
{
  int VAR_5 = FUNC_0 (VAR_1) == VAR_0;
  const CGEN_INSN_LIST *VAR_6;

  for (VAR_6 = VAR_2; VAR_6 != ((void*)0); VAR_6 = VAR_6->next, ++ VAR_4)
    {
      unsigned int VAR_7;
      char VAR_8[4];
      unsigned long VAR_9;

      if (! (* VAR_1->dis_hash_p) (VAR_6->insn))
 continue;




      VAR_9 = FUNC_1 (VAR_6->insn);
      FUNC_4((bfd_vma) VAR_9,
     VAR_8,
     FUNC_2 (VAR_6->insn),
     VAR_5);
      VAR_7 = (* VAR_1->dis_hash) (VAR_8, VAR_9);
      FUNC_3 (VAR_4, VAR_6->insn, VAR_3, VAR_7);
    }

  return VAR_4;
}
