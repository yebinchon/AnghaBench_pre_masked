
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct bhndb_softc {int bus_res; int dev; } ;
struct bhndb_dw_alloc {scalar_t__ target; TYPE_1__* win; } ;
typedef scalar_t__ bus_size_t ;
typedef scalar_t__ bus_addr_t ;
struct TYPE_2__ {scalar_t__ win_size; scalar_t__ win_offset; } ;


 int FUNC_0 (struct bhndb_softc*,int ) ;
 int VAR_0 ;
 int FUNC_1 (int ,int ,struct bhndb_dw_alloc*,scalar_t__,scalar_t__) ;
 struct bhndb_dw_alloc* FUNC_2 (struct bhndb_softc*,scalar_t__,scalar_t__,int*,int*,scalar_t__*) ;
 int FUNC_3 (char*,unsigned long long,scalar_t__) ;

__attribute__((used)) static inline struct bhndb_dw_alloc *
FUNC_4(struct bhndb_softc *VAR_1, bus_addr_t VAR_2, bus_size_t VAR_3,
    bus_size_t *VAR_4, bool *VAR_5, bus_addr_t *VAR_6)
{
 struct bhndb_dw_alloc *VAR_7;
 bool VAR_8;
 int VAR_9;

 FUNC_0(VAR_1, VAR_0);

 VAR_7 = FUNC_2(VAR_1, VAR_2, VAR_3, &VAR_8, VAR_5,
     VAR_6);



 if (VAR_2 < VAR_7->target ||
     VAR_2 > VAR_7->target + VAR_7->win->win_size ||
     (VAR_7->target + VAR_7->win->win_size) - VAR_2 < VAR_3)
 {

  if (VAR_8) {
   FUNC_3("borrowed register window does not map expected "
       "range 0x%llx-0x%llx\n",
       (unsigned long long) VAR_2,
       (unsigned long long) VAR_2+VAR_3-1);
  }

  VAR_9 = FUNC_1(VAR_1->dev, VAR_1->bus_res, VAR_7, VAR_2,
      VAR_3);
  if (VAR_9) {
      FUNC_3("failed to set register window target mapping "
       "0x%llx-0x%llx\n",
       (unsigned long long) VAR_2,
       (unsigned long long) VAR_2+VAR_3-1);
  }
 }


 *VAR_4 = (VAR_2 - VAR_7->target) + VAR_7->win->win_offset;
 return (VAR_7);
}
