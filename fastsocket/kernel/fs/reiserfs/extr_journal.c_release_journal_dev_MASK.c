
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct super_block {scalar_t__ s_dev; } ;
struct reiserfs_journal {TYPE_1__* j_dev_bd; int j_dev_mode; } ;
struct TYPE_3__ {scalar_t__ bd_dev; } ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*,int ) ;
 int FUNC_2 (struct super_block*,char*,char*,int) ;

__attribute__((used)) static int FUNC_3(struct super_block *VAR_0,
          struct reiserfs_journal *VAR_1)
{
 int VAR_2;

 VAR_2 = 0;

 if (VAR_1->j_dev_bd != ((void*)0)) {
  if (VAR_1->j_dev_bd->bd_dev != VAR_0->s_dev)
   FUNC_0(VAR_1->j_dev_bd);
  VAR_2 = FUNC_1(VAR_1->j_dev_bd, VAR_1->j_dev_mode);
  VAR_1->j_dev_bd = ((void*)0);
 }

 if (VAR_2 != 0) {
  FUNC_2(VAR_0, "sh-457",
     "Cannot release journal device: %i", VAR_2);
 }
 return VAR_2;
}
