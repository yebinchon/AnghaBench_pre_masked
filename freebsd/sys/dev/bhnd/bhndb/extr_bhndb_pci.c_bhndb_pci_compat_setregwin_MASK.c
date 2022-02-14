
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u_int ;
struct TYPE_3__ {int cfg_offset; } ;
struct TYPE_4__ {TYPE_1__ dyn; } ;
struct bhndb_regwin {scalar_t__ win_type; TYPE_2__ d; } ;
typedef int device_t ;
typedef scalar_t__ bhnd_addr_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int) ;
 int VAR_2 ;
 int FUNC_1 (int ,int ,struct bhndb_regwin const*,scalar_t__) ;
 scalar_t__ FUNC_2 (int ,int,int) ;

__attribute__((used)) static int
FUNC_3(device_t VAR_3, device_t VAR_4,
    const struct bhndb_regwin *VAR_5, bhnd_addr_t VAR_6)
{
 int VAR_7;
 int VAR_8;

 if (VAR_5->win_type != VAR_1)
  return (VAR_2);

 VAR_8 = VAR_5->d.dyn.cfg_offset;
 for (u_int VAR_9 = 0; VAR_9 < VAR_0; VAR_9++) {
  if ((VAR_7 = FUNC_1(VAR_3, VAR_4, VAR_5, VAR_6)))
   return (VAR_7);

  if (FUNC_2(VAR_4, VAR_8, 4) == VAR_6)
   return (0);

  FUNC_0(10);
 }


 return (VAR_2);
}
