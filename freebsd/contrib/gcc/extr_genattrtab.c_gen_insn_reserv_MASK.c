
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct insn_reserv {int bypassed; struct insn_reserv* next; int insn_num; int condexp; int default_latency; int name; } ;
typedef int rtx ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int) ;
 int FUNC_2 (int ,int) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (int ,int ,int ) ;
 struct insn_reserv** VAR_0 ;
 int VAR_1 ;
 struct insn_reserv* FUNC_5 (int) ;

__attribute__((used)) static void
FUNC_6 (rtx VAR_2)
{
  struct insn_reserv *VAR_3 = FUNC_5 (sizeof (struct insn_reserv));

  VAR_3->name = FUNC_0 (FUNC_3 (VAR_2, 0));
  VAR_3->default_latency = FUNC_2 (VAR_2, 1);
  VAR_3->condexp = FUNC_4 (FUNC_1 (VAR_2, 2), 0, 0);
  VAR_3->insn_num = VAR_1;
  VAR_3->bypassed = 0;
  VAR_3->next = 0;

  *VAR_0 = VAR_3;
  VAR_0 = &VAR_3->next;
  VAR_1++;
}
