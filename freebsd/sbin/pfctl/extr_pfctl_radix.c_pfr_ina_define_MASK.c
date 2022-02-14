
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pfr_table {int dummy; } ;
struct pfr_addr {int dummy; } ;
struct pfioc_table {int pfrio_flags; int pfrio_esize; int pfrio_size; int pfrio_ticket; int pfrio_nadd; int pfrio_naddr; struct pfr_addr* pfrio_buffer; struct pfr_table pfrio_table; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct pfioc_table*,int) ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_1 (int ,int ,struct pfioc_table*) ;

int
FUNC_2(struct pfr_table *VAR_4, struct pfr_addr *VAR_5, int VAR_6,
    int *VAR_7, int *VAR_8, int VAR_9, int VAR_10)
{
 struct pfioc_table VAR_11;

 if (VAR_4 == ((void*)0) || VAR_6 < 0 || (VAR_6 && VAR_5 == ((void*)0))) {
  VAR_3 = VAR_1;
  return (-1);
 }
 FUNC_0(&VAR_11, sizeof VAR_11);
 VAR_11.pfrio_flags = VAR_10;
 VAR_11.pfrio_table = *VAR_4;
 VAR_11.pfrio_buffer = VAR_5;
 VAR_11.pfrio_esize = sizeof(*VAR_5);
 VAR_11.pfrio_size = VAR_6;
 VAR_11.pfrio_ticket = VAR_9;
 if (FUNC_1(VAR_2, VAR_0, &VAR_11))
  return (-1);
 if (VAR_7 != ((void*)0))
  *VAR_7 = VAR_11.pfrio_nadd;
 if (VAR_8 != ((void*)0))
  *VAR_8 = VAR_11.pfrio_naddr;
 return (0);
}
