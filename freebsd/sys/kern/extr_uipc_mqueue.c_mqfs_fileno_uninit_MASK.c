
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct unrhdr {int dummy; } ;
struct mqfs_info {struct unrhdr* mi_unrhdr; } ;


 int FUNC_0 (struct unrhdr*) ;

__attribute__((used)) static void
FUNC_1(struct mqfs_info *VAR_0)
{
 struct unrhdr *VAR_1;

 VAR_1 = VAR_0->mi_unrhdr;
 VAR_0->mi_unrhdr = ((void*)0);
 FUNC_0(VAR_1);
}
