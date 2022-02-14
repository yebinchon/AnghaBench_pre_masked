
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct super_block {int dummy; } ;
struct seq_file {int dummy; } ;
struct TYPE_2__ {int (* sb_show_options ) (struct seq_file*,struct super_block*) ;} ;


 TYPE_1__* VAR_0 ;
 int FUNC_0 (struct seq_file*,struct super_block*) ;

int FUNC_1(struct seq_file *VAR_1, struct super_block *VAR_2)
{
 return VAR_0->sb_show_options(VAR_1, VAR_2);
}
