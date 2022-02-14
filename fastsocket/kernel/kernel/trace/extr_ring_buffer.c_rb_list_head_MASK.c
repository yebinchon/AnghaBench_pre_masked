
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct list_head {int dummy; } ;


 unsigned long VAR_0 ;

__attribute__((used)) static struct list_head *FUNC_0(struct list_head *VAR_1)
{
 unsigned long VAR_2 = (unsigned long)VAR_1;

 return (struct list_head *)(VAR_2 & ~VAR_0);
}
