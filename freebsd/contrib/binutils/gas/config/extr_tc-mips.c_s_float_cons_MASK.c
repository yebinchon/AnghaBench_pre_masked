
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int symbolS ;
struct insn_label_list {int * label; } ;
struct TYPE_3__ {struct insn_label_list* label_list; } ;
typedef TYPE_1__ segment_info_type ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int,int ,int *) ;
 int FUNC_2 () ;
 int FUNC_3 () ;
 int VAR_1 ;
 TYPE_1__* FUNC_4 (int ) ;

__attribute__((used)) static void
FUNC_5 (int VAR_2)
{
  segment_info_type *VAR_3 = FUNC_4 (VAR_1);
  struct insn_label_list *VAR_4 = VAR_3->label_list;
  symbolS *VAR_5;

  VAR_5 = VAR_4 != ((void*)0) ? VAR_4->label : ((void*)0);

  FUNC_3 ();

  if (VAR_0)
    {
      if (VAR_2 == 'd')
 FUNC_1 (3, 0, VAR_5);
      else
 FUNC_1 (2, 0, VAR_5);
    }

  FUNC_2 ();

  FUNC_0 (VAR_2);
}
