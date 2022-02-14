
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int ;
struct bhndb_pci_probe {int ncores; int cores; } ;
struct bhnd_core_info {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct bhnd_core_info* FUNC_0 (size_t,int ,int ) ;
 int FUNC_1 (struct bhnd_core_info*,int ,size_t) ;

__attribute__((used)) static int
FUNC_2(struct bhndb_pci_probe *VAR_2,
    struct bhnd_core_info **VAR_3, u_int *VAR_4)
{
 size_t VAR_5 = sizeof(**VAR_3) * VAR_2->ncores;

 *VAR_3 = FUNC_0(VAR_5, VAR_0, VAR_1);
 FUNC_1(*VAR_3, VAR_2->cores, VAR_5);

 *VAR_4 = VAR_2->ncores;

 return (0);
}
