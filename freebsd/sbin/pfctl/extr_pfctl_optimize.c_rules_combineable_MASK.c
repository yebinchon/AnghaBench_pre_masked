
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pf_rule {int dummy; } ;
typedef int a ;


 int VAR_0 ;
 int FUNC_0 (struct pf_rule*,struct pf_rule*,int ) ;
 scalar_t__ FUNC_1 (struct pf_rule*,struct pf_rule*,int) ;

int
FUNC_2(struct pf_rule *VAR_1, struct pf_rule *VAR_2)
{
 struct pf_rule VAR_3, VAR_4;

 FUNC_0(&VAR_3, VAR_1, VAR_0);
 FUNC_0(&VAR_4, VAR_2, VAR_0);
 return (FUNC_1(&VAR_3, &VAR_4, sizeof(VAR_3)) == 0);
}
