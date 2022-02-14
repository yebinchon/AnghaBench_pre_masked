
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pfr_table {int dummy; } ;
struct pfioc_table {int pfrio_flags; int pfrio_esize; int pfrio_size; int pfrio_nadd; struct pfr_table* pfrio_buffer; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct pfioc_table*,int) ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_1 (int ,int ,struct pfioc_table*) ;

int
FUNC_2(struct pfr_table *VAR_4, int VAR_5, int *VAR_6, int VAR_7)
{
 struct pfioc_table VAR_8;

 if (VAR_5 < 0 || (VAR_5 && VAR_4 == ((void*)0))) {
  VAR_3 = VAR_1;
  return (-1);
 }
 FUNC_0(&VAR_8, sizeof VAR_8);
 VAR_8.pfrio_flags = VAR_7;
 VAR_8.pfrio_buffer = VAR_4;
 VAR_8.pfrio_esize = sizeof(*VAR_4);
 VAR_8.pfrio_size = VAR_5;
 if (FUNC_1(VAR_2, VAR_0, &VAR_8))
  return (-1);
 if (VAR_6 != ((void*)0))
  *VAR_6 = VAR_8.pfrio_nadd;
 return (0);
}
