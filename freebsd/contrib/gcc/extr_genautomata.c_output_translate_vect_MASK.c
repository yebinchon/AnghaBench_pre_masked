
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_6__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int vla_hwint_t ;
typedef TYPE_2__* automaton_t ;
typedef TYPE_3__* ainsn_t ;
struct TYPE_10__ {int insns_num; } ;
struct TYPE_9__ {int insn_equiv_class_num; TYPE_1__* insn_reserv_decl; struct TYPE_9__* next_ainsn; } ;
struct TYPE_8__ {int insn_equiv_classes_num; TYPE_3__* ainsn_list; } ;
struct TYPE_7__ {int insn_num; } ;


 int FUNC_0 (int ,int ,int) ;
 int FUNC_1 (int ,int ,int ) ;
 int FUNC_2 (int ,int ,int ) ;
 int FUNC_3 (int ,int ,int ,int ) ;
 TYPE_6__* VAR_0 ;
 int FUNC_4 (int ,char*) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_5 (int ,int ,int ) ;
 int FUNC_6 (int ,TYPE_2__*) ;
 int FUNC_7 (int ) ;
 int VAR_3 ;

__attribute__((used)) static void
FUNC_8 (automaton_t VAR_4)
{
  ainsn_t VAR_5;
  int VAR_6;
  vla_hwint_t VAR_7;

  VAR_7 = FUNC_0 (VAR_3,VAR_1, VAR_0->insns_num);

  for (VAR_6 = 0; VAR_6 < VAR_0->insns_num; VAR_6++)

    FUNC_2 (VAR_3, VAR_7,
      VAR_4->insn_equiv_classes_num);

  for (VAR_5 = VAR_4->ainsn_list; VAR_5 != ((void*)0); VAR_5 = VAR_5->next_ainsn)
    FUNC_3 (VAR_3, VAR_7,
   VAR_5->insn_reserv_decl->insn_num,
   VAR_5->insn_equiv_class_num);

  FUNC_4 (VAR_2,
           "/* Vector translating external insn codes to internal ones.*/\n");
  FUNC_4 (VAR_2, "static const ");
  FUNC_5 (VAR_2, 0, VAR_4->insn_equiv_classes_num);
  FUNC_4 (VAR_2, " ");
  FUNC_6 (VAR_2, VAR_4);
  FUNC_4 (VAR_2, "[] ATTRIBUTE_UNUSED = {\n");
  FUNC_7 (VAR_7);
  FUNC_4 (VAR_2, "};\n\n");
  FUNC_1 (VAR_3,VAR_1, VAR_7);
}
