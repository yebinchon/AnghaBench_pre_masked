
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bhndb_regwin {scalar_t__ win_type; } ;
typedef scalar_t__ bhndb_regwin_type_t ;


 scalar_t__ VAR_0 ;

size_t
FUNC_0(const struct bhndb_regwin *VAR_1,
    bhndb_regwin_type_t VAR_2)
{
 const struct bhndb_regwin *VAR_3;
 size_t VAR_4;

 VAR_4 = 0;
 for (VAR_3 = VAR_1; VAR_3->win_type != VAR_0; VAR_3++) {
  if (VAR_2 == VAR_0 || VAR_3->win_type == VAR_2)
   VAR_4++;
 }

 return (VAR_4);
}
