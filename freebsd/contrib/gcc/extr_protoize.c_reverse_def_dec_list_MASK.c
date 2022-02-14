
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {TYPE_2__* fip; } ;
typedef TYPE_1__ hash_table_entry ;
struct TYPE_6__ {TYPE_3__* defs_decs; } ;
typedef TYPE_2__ file_info ;
struct TYPE_7__ {struct TYPE_7__* next_in_file; } ;
typedef TYPE_3__ def_dec_info ;



__attribute__((used)) static void
FUNC_0 (const hash_table_entry *VAR_0)
{
  file_info *VAR_1 = VAR_0->fip;
  def_dec_info *VAR_2 = ((void*)0);
  def_dec_info *VAR_3 = (def_dec_info *) VAR_1->defs_decs;

  if (!VAR_3)
    return;

  VAR_2 = VAR_3;
  if (! (VAR_3 = (def_dec_info *) VAR_3->next_in_file))
    return;

  VAR_2->next_in_file = ((void*)0);

  while (VAR_3)
    {
      def_dec_info *VAR_4 = (def_dec_info *) VAR_3->next_in_file;

      VAR_3->next_in_file = VAR_2;
      VAR_2 = VAR_3;
      VAR_3 = VAR_4;
    }

  VAR_1->defs_decs = VAR_2;
}
