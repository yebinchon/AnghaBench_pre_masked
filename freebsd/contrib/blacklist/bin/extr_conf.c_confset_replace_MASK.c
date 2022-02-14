
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct confset {int dummy; } ;


 int FUNC_0 (struct confset*) ;
 int FUNC_1 (struct confset*) ;

__attribute__((used)) static void
FUNC_2(struct confset *VAR_0, struct confset *VAR_1)
{
 struct confset VAR_2;
 VAR_2 = *VAR_0;
 *VAR_0 = *VAR_1;
 FUNC_1(VAR_1);
 FUNC_0(&VAR_2);
}
