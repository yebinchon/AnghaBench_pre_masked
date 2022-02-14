
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef TYPE_1__* automaton_t ;
typedef TYPE_2__* ainsn_t ;
struct TYPE_9__ {int insn_equiv_class_num; int first_ainsn_with_given_equivalence_num; struct TYPE_9__* next_equiv_class_insn; struct TYPE_9__* next_same_reservs_insn; scalar_t__ first_insn_with_same_reservs; struct TYPE_9__* next_ainsn; } ;
struct TYPE_8__ {int insn_equiv_classes_num; TYPE_2__* ainsn_list; } ;


 int FUNC_0 (scalar_t__) ;
 TYPE_2__* FUNC_1 (TYPE_2__*,TYPE_2__*) ;
 int FUNC_2 (TYPE_1__*,int ) ;
 int VAR_0 ;

__attribute__((used)) static void
FUNC_3 (automaton_t VAR_1)
{
  ainsn_t VAR_2;
  ainsn_t VAR_3;
  ainsn_t VAR_4;
  ainsn_t VAR_5;
  ainsn_t VAR_6;
  int VAR_7;


  VAR_5 = ((void*)0);
  for (VAR_2 = VAR_1->ainsn_list; VAR_2 != ((void*)0); VAR_2 = VAR_2->next_ainsn)
    if (VAR_2->first_insn_with_same_reservs)
      VAR_5 = FUNC_1 (VAR_2,
       VAR_5);

  FUNC_2 (VAR_1, VAR_0);

  for (VAR_2 = VAR_1->ainsn_list; VAR_2 != ((void*)0); VAR_2 = VAR_2->next_ainsn)

    VAR_2->insn_equiv_class_num = -1;
  VAR_7 = 0;
  for (VAR_2 = VAR_1->ainsn_list; VAR_2 != ((void*)0); VAR_2 = VAR_2->next_ainsn)
    if (VAR_2->insn_equiv_class_num < 0)
      {
        VAR_3 = VAR_2;
        FUNC_0 (VAR_3->first_insn_with_same_reservs);
        VAR_3->first_ainsn_with_given_equivalence_num = 1;
        VAR_4 = VAR_3;
        do
          {
            for (VAR_6 = VAR_4;
                 VAR_6 != ((void*)0);
                 VAR_6
     = VAR_6->next_same_reservs_insn)
              VAR_6->insn_equiv_class_num = VAR_7;
            VAR_4 = VAR_4->next_equiv_class_insn;
          }
        while (VAR_4 != VAR_3);
        VAR_7++;
      }
  VAR_1->insn_equiv_classes_num = VAR_7;
}
