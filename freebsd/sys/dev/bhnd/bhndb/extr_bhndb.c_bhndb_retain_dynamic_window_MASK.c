
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct resource {int dummy; } ;
struct bhndb_softc {int bus_res; int dev; } ;
struct bhndb_dw_alloc {TYPE_1__* win; } ;
typedef scalar_t__ rman_res_t ;
struct TYPE_2__ {scalar_t__ win_size; } ;


 int FUNC_0 (struct bhndb_softc*,int ) ;
 int VAR_0 ;
 struct bhndb_dw_alloc* FUNC_1 (int ,scalar_t__,scalar_t__) ;
 struct bhndb_dw_alloc* FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int ,struct bhndb_dw_alloc*,struct resource*) ;
 int FUNC_4 (int ,int ,struct bhndb_dw_alloc*,scalar_t__,scalar_t__) ;
 int FUNC_5 (int ,char*,unsigned long long,scalar_t__,int) ;
 scalar_t__ FUNC_6 (struct resource*) ;
 scalar_t__ FUNC_7 (struct resource*) ;

__attribute__((used)) static struct bhndb_dw_alloc *
FUNC_8(struct bhndb_softc *VAR_1, struct resource *VAR_2)
{
 struct bhndb_dw_alloc *VAR_3;
 rman_res_t VAR_4, VAR_5;
 int VAR_6;

 FUNC_0(VAR_1, VAR_0);

 VAR_4 = FUNC_7(VAR_2);
 VAR_5 = FUNC_6(VAR_2);


 VAR_3 = FUNC_1(VAR_1->bus_res, VAR_4, VAR_5);
 if (VAR_3 != ((void*)0)) {
  if (FUNC_3(VAR_1->bus_res, VAR_3, VAR_2) == 0)
   return (VAR_3);

  return (((void*)0));
 }


 VAR_3 = FUNC_2(VAR_1->bus_res);
 if (VAR_3 == ((void*)0)) {

  return (((void*)0));
 }


 if (VAR_3->win->win_size < FUNC_6(VAR_2))
  return (((void*)0));


 VAR_6 = FUNC_4(VAR_1->dev, VAR_1->bus_res, VAR_3, FUNC_7(VAR_2),
     FUNC_6(VAR_2));
 if (VAR_6) {
  FUNC_5(VAR_1->dev, "dynamic window initialization "
   "for 0x%llx-0x%llx failed: %d\n",
   (unsigned long long) VAR_4,
   (unsigned long long) VAR_4 + VAR_5 - 1,
   VAR_6);
  return (((void*)0));
 }


 if (FUNC_3(VAR_1->bus_res, VAR_3, VAR_2))
  return (((void*)0));

 return (VAR_3);
}
