
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct score_it {int size; int relax_size; int relax_inst; int type; int instruction; } ;
struct TYPE_4__ {int is_insn; } ;
struct TYPE_5__ {TYPE_1__ tc_frag_data; } ;


 int FUNC_0 (int,int,int ,int ,int ,int) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (int) ;
 int FUNC_2 (int) ;
 char* FUNC_3 (int) ;
 int FUNC_4 (int ) ;
 TYPE_2__* VAR_1 ;
 scalar_t__ FUNC_5 () ;
 char* FUNC_6 (int ,scalar_t__,int ,int ,int *,int ,int *) ;
 int FUNC_7 (TYPE_2__*) ;
 int VAR_2 ;
 int FUNC_8 (char*,int ,int) ;
 int VAR_3 ;

__attribute__((used)) static void
FUNC_9 (struct score_it VAR_4)
{
  char *VAR_5;
  int VAR_6 = VAR_2;
  int VAR_7 = 0;


  if (FUNC_5 () != 0)
    {
      if (!VAR_1->tc_frag_data.is_insn)
 FUNC_7 (VAR_1);

      FUNC_4 (0);
    }
  FUNC_2 (20);

  VAR_5 = FUNC_3 (VAR_4.size);
  FUNC_8 (VAR_5, VAR_4.instruction, VAR_4.size);





  VAR_6 &= (VAR_4.relax_size != 0);
  VAR_7 = VAR_6 ? VAR_4.relax_size : 0;

  VAR_5 = FUNC_6 (VAR_3, VAR_7 + VAR_0, 0,
                FUNC_0 (VAR_4.size, VAR_4.relax_size,
                              VAR_4.type, 0, 0, VAR_6),
                ((void*)0), 0, ((void*)0));

  if (VAR_6)
    FUNC_8 (VAR_5, VAR_4.relax_inst, VAR_7);
}
