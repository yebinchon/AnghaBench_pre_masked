
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bhndb_resources {int dummy; } ;
struct bhndb_region {scalar_t__ size; int * static_regwin; } ;
typedef scalar_t__ bhnd_size_t ;
typedef scalar_t__ bhnd_addr_t ;


 struct bhndb_region* FUNC_0 (struct bhndb_resources*,scalar_t__,int) ;

bool
FUNC_1(struct bhndb_resources *VAR_0,
    bhnd_addr_t VAR_1, bhnd_size_t VAR_2)
{
 struct bhndb_region *VAR_3;
 bhnd_addr_t VAR_4;

 VAR_4 = VAR_1;
 while ((VAR_3 = FUNC_0(VAR_0, VAR_4, 1)) != ((void*)0)) {

  if (VAR_3->static_regwin == ((void*)0))
   return (0);


  VAR_4 += VAR_3->size;


  if (VAR_4 == VAR_1 + VAR_2)
   return (1);

 }


 return (0);
}
