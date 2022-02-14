
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct inode {int i_mode; } ;
struct ctl_table_header {int root; } ;
struct ctl_table {int dummy; } ;
struct TYPE_2__ {struct ctl_table* sysctl_entry; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct ctl_table_header*) ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_1__* FUNC_1 (struct inode*) ;
 int FUNC_2 (struct ctl_table_header*) ;
 scalar_t__ FUNC_3 (int ) ;
 struct ctl_table_header* FUNC_4 (struct inode*) ;
 int FUNC_5 (struct ctl_table_header*) ;
 int FUNC_6 (int ,struct ctl_table*,int) ;

__attribute__((used)) static int FUNC_7(struct inode *VAR_3, int VAR_4)
{




 struct ctl_table_header *VAR_5;
 struct ctl_table *VAR_6;
 int VAR_7;


 if ((VAR_4 & VAR_1) && FUNC_3(VAR_3->i_mode))
  return -VAR_0;

 VAR_5 = FUNC_4(VAR_3);
 if (FUNC_0(VAR_5))
  return FUNC_2(VAR_5);

 VAR_6 = FUNC_1(VAR_3)->sysctl_entry;
 if (!VAR_6)
  VAR_7 = VAR_4 & VAR_2 ? -VAR_0 : 0;
 else
  VAR_7 = FUNC_6(VAR_5->root, VAR_6, VAR_4);

 FUNC_5(VAR_5);
 return VAR_7;
}
