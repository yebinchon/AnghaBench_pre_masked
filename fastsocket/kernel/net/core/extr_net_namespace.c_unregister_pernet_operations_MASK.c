
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pernet_operations {int (* exit ) (int *) ;} ;


 int VAR_0 ;
 int FUNC_0 (int *) ;

__attribute__((used)) static void FUNC_1(struct pernet_operations *VAR_1)
{
 if (VAR_1->exit)
  VAR_1->exit(&VAR_0);
}
