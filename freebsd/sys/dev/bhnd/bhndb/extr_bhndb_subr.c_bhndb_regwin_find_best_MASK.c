
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int ;
struct bhndb_regwin {int dummy; } ;
typedef int bus_size_t ;
typedef int bhnd_port_type ;
typedef int bhnd_devclass_t ;


 int VAR_0 ;
 struct bhndb_regwin* FUNC_0 (struct bhndb_regwin const*,int ,int,int ,int ,int ,int ,int ) ;
 struct bhndb_regwin const* FUNC_1 (struct bhndb_regwin const*,int ,int ) ;

const struct bhndb_regwin *
FUNC_2(const struct bhndb_regwin *VAR_1,
    bhnd_devclass_t VAR_2, int VAR_3, bhnd_port_type VAR_4, u_int VAR_5,
    u_int VAR_6, bus_size_t VAR_7, bus_size_t VAR_8)
{
 const struct bhndb_regwin *VAR_9;


 VAR_9 = FUNC_0(VAR_1, VAR_2, VAR_3, VAR_4,
     VAR_5, VAR_6, VAR_7, VAR_8);
 if (VAR_9 != ((void*)0))
  return (VAR_9);


 return (FUNC_1(VAR_1, VAR_0, VAR_8));
}
