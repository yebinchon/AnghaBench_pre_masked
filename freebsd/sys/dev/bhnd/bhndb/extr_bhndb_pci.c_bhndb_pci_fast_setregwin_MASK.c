
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int cfg_offset; } ;
struct TYPE_4__ {TYPE_1__ dyn; } ;
struct bhndb_regwin {int win_type; scalar_t__ win_size; TYPE_2__ d; } ;
typedef int device_t ;
typedef scalar_t__ bhnd_addr_t ;



 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (int ,int ,scalar_t__,int) ;

__attribute__((used)) static int
FUNC_1(device_t VAR_4, device_t VAR_5,
    const struct bhndb_regwin *VAR_6, bhnd_addr_t VAR_7)
{


 if (VAR_7 > VAR_3)
  return (VAR_2);

 switch (VAR_6->win_type) {
 case 128:

  if (VAR_7 % VAR_6->win_size != 0)
   return (VAR_0);

  FUNC_0(VAR_5, VAR_6->d.dyn.cfg_offset, VAR_7, 4);
  break;
 default:
  return (VAR_1);
 }

 return (0);
}
