
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pfr_table {int dummy; } ;
struct pfioc_table {int pfrio_flags; int pfrio_ndel; struct pfr_table pfrio_table; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct pfioc_table*,int) ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_1 (int ,int ,struct pfioc_table*) ;

int
FUNC_2(struct pfr_table *VAR_4, int *VAR_5, int VAR_6)
{
 struct pfioc_table VAR_7;

 if (VAR_4 == ((void*)0)) {
  VAR_3 = VAR_1;
  return (-1);
 }
 FUNC_0(&VAR_7, sizeof VAR_7);
 VAR_7.pfrio_flags = VAR_6;
 VAR_7.pfrio_table = *VAR_4;
 if (FUNC_1(VAR_2, VAR_0, &VAR_7))
  return (-1);
 if (VAR_5 != ((void*)0))
  *VAR_5 = VAR_7.pfrio_ndel;
 return (0);
}
