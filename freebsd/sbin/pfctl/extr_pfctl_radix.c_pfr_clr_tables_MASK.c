
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pfr_table {int dummy; } ;
struct pfioc_table {int pfrio_flags; int pfrio_ndel; struct pfr_table pfrio_table; } ;


 int VAR_0 ;
 int FUNC_0 (struct pfioc_table*,int) ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (int ,int ,struct pfioc_table*) ;

int
FUNC_2(struct pfr_table *VAR_2, int *VAR_3, int VAR_4)
{
 struct pfioc_table VAR_5;

 FUNC_0(&VAR_5, sizeof VAR_5);
 VAR_5.pfrio_flags = VAR_4;
 if (VAR_2 != ((void*)0))
  VAR_5.pfrio_table = *VAR_2;
 if (FUNC_1(VAR_1, VAR_0, &VAR_5))
  return (-1);
 if (VAR_3 != ((void*)0))
  *VAR_3 = VAR_5.pfrio_ndel;
 return (0);
}
