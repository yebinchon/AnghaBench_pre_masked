
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ class; scalar_t__ unit; } ;
struct TYPE_4__ {TYPE_1__ core; } ;
struct bhndb_regwin {scalar_t__ win_type; TYPE_2__ d; } ;
struct bhnd_core_info {scalar_t__ unit; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (struct bhnd_core_info*) ;

bool
FUNC_1(const struct bhndb_regwin *VAR_1,
    struct bhnd_core_info *VAR_2)
{

 if (VAR_1->win_type != VAR_0)
  return (0);


 if (FUNC_0(VAR_2) != VAR_1->d.core.class)
  return (0);


 if (VAR_2->unit != VAR_1->d.core.unit)
  return (0);


 return (1);
}
