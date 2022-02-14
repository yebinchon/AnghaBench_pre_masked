
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bhndb_resources {int dw_steal_mtx; } ;
struct bhndb_regwin {scalar_t__ win_size; } ;
struct bhndb_dw_alloc {int target; struct bhndb_regwin* win; } ;
typedef int device_t ;
typedef scalar_t__ bus_size_t ;
typedef scalar_t__ bus_addr_t ;


 int FUNC_0 (int ,struct bhndb_regwin*,int) ;
 int VAR_0 ;
 int FUNC_1 (int,char*) ;
 scalar_t__ FUNC_2 (struct bhndb_resources*,struct bhndb_dw_alloc*) ;
 scalar_t__ FUNC_3 (int *) ;

int
FUNC_4(device_t VAR_1, struct bhndb_resources *VAR_2,
    struct bhndb_dw_alloc *VAR_3, bus_addr_t VAR_4, bus_size_t VAR_5)
{
 const struct bhndb_regwin *VAR_6;
 bus_addr_t VAR_7;
 int VAR_8;

 VAR_6 = VAR_3->win;

 FUNC_1(FUNC_2(VAR_2, VAR_3) || FUNC_3(&VAR_2->dw_steal_mtx),
     ("attempting to set the target address on an in-use window"));


 VAR_7 = VAR_4 % VAR_6->win_size;
 VAR_3->target = VAR_4 - VAR_7;


 if (VAR_6->win_size - VAR_7 < VAR_5)
  return (VAR_0);


 VAR_8 = FUNC_0(VAR_1, VAR_3->win, VAR_3->target);
 if (VAR_8) {
  VAR_3->target = 0x0;
  return (VAR_8);
 }

 return (0);
}
