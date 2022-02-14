
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct notifier_block {int * tags; } ;


 int FUNC_0 (int ,int ,struct notifier_block*,int ) ;
 size_t VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

int
FUNC_1(struct notifier_block *VAR_3)
{

 VAR_3->tags[VAR_0] = FUNC_0(
     VAR_1, VAR_2, VAR_3, 0);
 return (0);
}
