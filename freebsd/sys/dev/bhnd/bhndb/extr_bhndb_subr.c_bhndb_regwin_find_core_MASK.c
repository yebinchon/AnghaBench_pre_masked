
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u_int ;
struct TYPE_3__ {scalar_t__ class; int unit; scalar_t__ port_type; scalar_t__ port; scalar_t__ region; scalar_t__ offset; } ;
struct TYPE_4__ {TYPE_1__ core; } ;
struct bhndb_regwin {scalar_t__ win_type; scalar_t__ win_size; TYPE_2__ d; } ;
typedef scalar_t__ bus_size_t ;
typedef scalar_t__ bhnd_port_type ;
typedef scalar_t__ bhnd_devclass_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;

const struct bhndb_regwin *
FUNC_0(const struct bhndb_regwin *VAR_2, bhnd_devclass_t VAR_3,
    int VAR_4, bhnd_port_type VAR_5, u_int VAR_6, u_int VAR_7,
    bus_size_t VAR_8, bus_size_t VAR_9)
{
 const struct bhndb_regwin *VAR_10;

 for (VAR_10 = VAR_2; VAR_10->win_type != VAR_1; VAR_10++)
 {
  bus_size_t VAR_11;


  if (VAR_10->win_type != VAR_0)
   continue;

  if (VAR_10->d.core.class != VAR_3)
   continue;

  if (VAR_4 != -1 && VAR_10->d.core.unit != VAR_4)
   continue;

  if (VAR_10->d.core.port_type != VAR_5)
   continue;

  if (VAR_10->d.core.port != VAR_6)
   continue;

  if (VAR_10->d.core.region != VAR_7)
   continue;



  if (VAR_10->d.core.offset > VAR_8)
   continue;

  VAR_11 = VAR_8 - VAR_10->d.core.offset;

  if (VAR_10->win_size < VAR_11)
   continue;

  if (VAR_10->win_size - VAR_11 < VAR_9)
   continue;

  return (VAR_10);
 }

 return (((void*)0));
}
