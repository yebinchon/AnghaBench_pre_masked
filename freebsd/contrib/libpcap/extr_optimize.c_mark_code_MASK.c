
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct icode {int cur_mark; int root; } ;


 int FUNC_0 (struct icode*,int ) ;

__attribute__((used)) static void
FUNC_1(struct icode *VAR_0)
{
 VAR_0->cur_mark += 1;
 FUNC_0(VAR_0, VAR_0->root);
}
