
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bhndb_softc {struct bhndb_resources* bus_res; } ;
struct bhndb_resources {size_t dwa_count; struct bhndb_dw_alloc* dw_alloc; } ;
struct bhndb_regwin {scalar_t__ win_type; scalar_t__ win_size; } ;
struct bhndb_region {int alloc_flags; } ;
struct bhndb_dw_alloc {scalar_t__ target; struct bhndb_regwin* win; } ;
typedef scalar_t__ bus_size_t ;
typedef scalar_t__ bus_addr_t ;


 int VAR_0 ;
 int FUNC_0 (struct bhndb_softc*,int ) ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (int,char*) ;
 int VAR_2 ;
 struct bhndb_dw_alloc* FUNC_2 (struct bhndb_resources*) ;
 struct bhndb_dw_alloc* FUNC_3 (struct bhndb_resources*,scalar_t__*) ;
 struct bhndb_region* FUNC_4 (struct bhndb_resources*,scalar_t__,scalar_t__) ;
 int FUNC_5 (char*,unsigned long long,scalar_t__) ;

__attribute__((used)) static struct bhndb_dw_alloc *
FUNC_6(struct bhndb_softc *VAR_3, bus_addr_t VAR_4,
    bus_size_t VAR_5, bool *VAR_6, bool *VAR_7, bus_addr_t *VAR_8)
{
 struct bhndb_resources *VAR_9;
 struct bhndb_dw_alloc *VAR_10;
 struct bhndb_region *VAR_11;

 FUNC_0(VAR_3, VAR_2);

 VAR_9 = VAR_3->bus_res;
 *VAR_6 = 0;
 *VAR_7 = 0;


 if ((VAR_10 = FUNC_2(VAR_9)) != ((void*)0))
  return (VAR_10);




 for (size_t VAR_12 = 0; VAR_12 < VAR_9->dwa_count; VAR_12++) {
  const struct bhndb_regwin *VAR_13;

  VAR_10 = &VAR_9->dw_alloc[VAR_12];
  VAR_13 = VAR_10->win;

  FUNC_1(VAR_13->win_type == VAR_1,
   ("invalid register window type"));


  if (VAR_4 < VAR_10->target)
   continue;

  if (VAR_4 + VAR_5 > VAR_10->target + VAR_13->win_size)
   continue;


  *VAR_6 = 1;
  return (VAR_10);
 }



 VAR_11 = FUNC_4(VAR_9, VAR_4, VAR_5);
 if (VAR_11 == ((void*)0))
  return (((void*)0));

 if ((VAR_11->alloc_flags & VAR_0) == 0)
  return (((void*)0));




 if ((VAR_10 = FUNC_3(VAR_9, VAR_8)) != ((void*)0)) {
  *VAR_7 = 1;
  return (VAR_10);
 }

 FUNC_5("register windows exhausted attempting to map 0x%llx-0x%llx\n",
     (unsigned long long) VAR_4, (unsigned long long) VAR_4+VAR_5-1);
}
