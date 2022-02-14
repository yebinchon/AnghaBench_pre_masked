
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct inode {int dummy; } ;
struct ctl_table_header {int dummy; } ;
struct TYPE_2__ {scalar_t__ sysctl; } ;


 TYPE_1__* FUNC_0 (struct inode*) ;
 struct ctl_table_header* FUNC_1 (scalar_t__) ;
 struct ctl_table_header* FUNC_2 (int *) ;

__attribute__((used)) static struct ctl_table_header *FUNC_3(struct inode *VAR_0)
{
 if (FUNC_0(VAR_0)->sysctl)
  return FUNC_1(FUNC_0(VAR_0)->sysctl);
 else
  return FUNC_2(((void*)0));
}
