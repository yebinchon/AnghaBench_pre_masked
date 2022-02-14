
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uintmax_t ;
struct bhndb_resources {int dw_steal_mtx; } ;
struct bhndb_dw_alloc {int dummy; } ;
typedef int device_t ;
typedef scalar_t__ bus_addr_t ;


 int VAR_0 ;
 int FUNC_0 (int ,struct bhndb_resources*,struct bhndb_dw_alloc*,scalar_t__,int ) ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (char*,int ,int) ;

void
FUNC_4(device_t VAR_1, struct bhndb_resources *VAR_2,
    struct bhndb_dw_alloc *VAR_3, bus_addr_t VAR_4)
{
 int VAR_5;

 FUNC_1(&VAR_2->dw_steal_mtx, VAR_0);

 VAR_5 = FUNC_0(VAR_1, VAR_2, VAR_3, VAR_4, 0);
 if (VAR_5) {
  FUNC_3("failed to restore register window target %#jx: %d\n",
      (uintmax_t)VAR_4, VAR_5);
 }

 FUNC_2(&VAR_2->dw_steal_mtx);
}
