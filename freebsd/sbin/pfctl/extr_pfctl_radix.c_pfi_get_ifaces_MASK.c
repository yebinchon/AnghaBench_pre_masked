
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pfioc_iface {int pfiio_esize; int pfiio_size; struct pfi_kif* pfiio_buffer; int pfiio_name; } ;
struct pfi_kif {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct pfioc_iface*,int) ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_1 (int ,int ,struct pfioc_iface*) ;
 int FUNC_2 (int ,char const*,int) ;

int
FUNC_3(const char *VAR_4, struct pfi_kif *VAR_5, int *VAR_6)
{
 struct pfioc_iface VAR_7;

 if (VAR_6 == ((void*)0) || *VAR_6 < 0 || (*VAR_6 && VAR_5 == ((void*)0))) {
  VAR_3 = VAR_1;
  return (-1);
 }
 FUNC_0(&VAR_7, sizeof VAR_7);
 if (VAR_4 != ((void*)0))
  if (FUNC_2(VAR_7.pfiio_name, VAR_4, sizeof(VAR_7.pfiio_name)) >=
      sizeof(VAR_7.pfiio_name)) {
   VAR_3 = VAR_1;
   return (-1);
  }
 VAR_7.pfiio_buffer = VAR_5;
 VAR_7.pfiio_esize = sizeof(*VAR_5);
 VAR_7.pfiio_size = *VAR_6;
 if (FUNC_1(VAR_2, VAR_0, &VAR_7))
  return (-1);
 *VAR_6 = VAR_7.pfiio_size;
 return (0);
}
