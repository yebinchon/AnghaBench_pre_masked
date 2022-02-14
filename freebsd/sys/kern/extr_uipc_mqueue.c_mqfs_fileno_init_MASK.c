
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct unrhdr {int dummy; } ;
struct mqfs_info {struct unrhdr* mi_unrhdr; } ;


 int VAR_0 ;
 struct unrhdr* FUNC_0 (int,int ,int *) ;

__attribute__((used)) static void
FUNC_1(struct mqfs_info *VAR_1)
{
 struct unrhdr *VAR_2;

 VAR_2 = FUNC_0(1, VAR_0, ((void*)0));
 VAR_1->mi_unrhdr = VAR_2;
}
