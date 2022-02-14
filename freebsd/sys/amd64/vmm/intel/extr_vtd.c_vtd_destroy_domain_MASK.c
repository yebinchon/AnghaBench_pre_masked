
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct domain {int pt_levels; int ptp; } ;


 int VAR_0 ;
 int FUNC_0 (int *,struct domain*,int ,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (struct domain*,int ) ;
 int VAR_3 ;
 int FUNC_2 (int ,int ) ;

__attribute__((used)) static void
FUNC_3(void *VAR_4)
{
 struct domain *VAR_5;

 VAR_5 = VAR_4;

 FUNC_0(&VAR_2, VAR_5, VAR_1, VAR_3);
 FUNC_2(VAR_5->ptp, VAR_5->pt_levels);
 FUNC_1(VAR_5, VAR_0);
}
