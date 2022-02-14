
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct seq_file {int dummy; } ;
struct gcov_iterator {int record; size_t type; size_t count; TYPE_2__* info; } ;
struct TYPE_8__ {int ident; int checksum; int* n_ctrs; } ;
struct TYPE_7__ {size_t offset; int ctr_type; } ;
struct TYPE_6__ {int version; int stamp; TYPE_1__* counts; } ;
struct TYPE_5__ {int * values; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int VAR_2 ;
 TYPE_4__* FUNC_1 (struct gcov_iterator*) ;
 TYPE_3__* FUNC_2 (struct gcov_iterator*) ;
 int FUNC_3 (struct seq_file*,int) ;
 int FUNC_4 (struct seq_file*,int ) ;

int FUNC_5(struct gcov_iterator *VAR_3, struct seq_file *VAR_4)
{
 int VAR_5 = -VAR_0;

 switch (VAR_3->record) {
 case 134:
  VAR_5 = FUNC_3(VAR_4, VAR_1);
  break;
 case 129:
  VAR_5 = FUNC_3(VAR_4, VAR_3->info->version);
  break;
 case 128:
  VAR_5 = FUNC_3(VAR_4, VAR_3->info->stamp);
  break;
 case 131:
  VAR_5 = FUNC_3(VAR_4, VAR_2);
  break;
 case 130:
  VAR_5 = FUNC_3(VAR_4, 2);
  break;
 case 132:
  VAR_5 = FUNC_3(VAR_4, FUNC_1(VAR_3)->ident);
  break;
 case 133:
  VAR_5 = FUNC_3(VAR_4, FUNC_1(VAR_3)->checksum);
  break;
 case 135:
  VAR_5 = FUNC_3(VAR_4,
   FUNC_0(FUNC_2(VAR_3)->ctr_type));
  break;
 case 136:
  VAR_5 = FUNC_3(VAR_4,
    FUNC_1(VAR_3)->n_ctrs[VAR_3->type] * 2);
  break;
 case 137:
  VAR_5 = FUNC_4(VAR_4,
   VAR_3->info->counts[VAR_3->type].
    values[VAR_3->count + FUNC_2(VAR_3)->offset]);
  break;
 }
 return VAR_5;
}
