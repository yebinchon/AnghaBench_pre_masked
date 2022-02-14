
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct resource {int dummy; } ;
struct bhndb_softc {TYPE_1__* bus_res; } ;
struct bhndb_regwin {scalar_t__ win_offset; int win_type; } ;
struct bhndb_region {scalar_t__ addr; struct bhndb_regwin* static_regwin; } ;
typedef scalar_t__ rman_res_t ;
typedef int device_t ;
typedef scalar_t__ bhnd_size_t ;
struct TYPE_2__ {int res; } ;


 scalar_t__ FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (int,char*) ;
 struct resource* FUNC_2 (int ,struct bhndb_regwin const*) ;
 int FUNC_3 (struct resource*,struct resource*,scalar_t__,scalar_t__) ;
 int FUNC_4 (struct resource*) ;
 scalar_t__ FUNC_5 (struct resource*) ;
 scalar_t__ FUNC_6 (struct resource*) ;

__attribute__((used)) static int
FUNC_7(struct bhndb_softc *VAR_1,
    struct bhndb_region *VAR_2, device_t VAR_3, int VAR_4, int VAR_5,
    struct resource *VAR_6)
{
 struct resource *VAR_7;
 const struct bhndb_regwin *VAR_8;
 bhnd_size_t VAR_9;
 rman_res_t VAR_10, VAR_11;
 int VAR_12;

 VAR_8 = VAR_2->static_regwin;

 FUNC_1(VAR_8 != ((void*)0) && FUNC_0(VAR_8->win_type),
     ("can't activate non-static region"));

 VAR_10 = FUNC_6(VAR_6);
 VAR_11 = FUNC_5(VAR_6);


 VAR_7 = FUNC_2(VAR_1->bus_res->res, VAR_8);
 if (VAR_7 == ((void*)0))
  return (VAR_0);


 VAR_9 = VAR_10 - VAR_2->addr;
 VAR_9 += VAR_8->win_offset;


 VAR_12 = FUNC_3(VAR_6, VAR_7, VAR_9, VAR_11);
 if (VAR_12)
  return (VAR_12);


 if ((VAR_12 = FUNC_4(VAR_6)))
  return (VAR_12);

 return (0);
}
