
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bhndb_regwin {scalar_t__ win_type; scalar_t__ win_size; } ;
typedef scalar_t__ bus_size_t ;
typedef scalar_t__ bhndb_regwin_type_t ;


 scalar_t__ VAR_0 ;

const struct bhndb_regwin *
FUNC_0(const struct bhndb_regwin *VAR_1,
    bhndb_regwin_type_t VAR_2, bus_size_t VAR_3)
{
 const struct bhndb_regwin *VAR_4;

 for (VAR_4 = VAR_1; VAR_4->win_type != VAR_0; VAR_4++)
 {
  if (VAR_4->win_type == VAR_2 && VAR_4->win_size >= VAR_3)
   return (VAR_4);
 }

 return (((void*)0));
}
