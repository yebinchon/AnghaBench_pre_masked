
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ u_int ;
struct TYPE_6__ {scalar_t__ ncores; } ;
struct siba_erom {TYPE_3__ io; } ;
struct bhnd_core_info {scalar_t__ vendor; scalar_t__ device; int unit; } ;
struct siba_core_id {struct bhnd_core_info core_info; } ;
struct TYPE_4__ {scalar_t__ core_unit; } ;
struct TYPE_5__ {TYPE_1__ match; } ;
typedef struct bhnd_core_match {TYPE_2__ m; } const bhnd_core_match ;
typedef int bhnd_erom_t ;


 int VAR_0 ;
 int FUNC_0 (struct bhnd_core_info*,struct bhnd_core_match const*) ;
 int FUNC_1 (TYPE_3__*,scalar_t__,int ,struct siba_core_id*) ;

__attribute__((used)) static int
FUNC_2(bhnd_erom_t *VAR_1, const struct bhnd_core_match *VAR_2,
    struct bhnd_core_info *VAR_3)
{
 struct siba_erom *VAR_4;
 struct bhnd_core_match VAR_5;
 int VAR_6;

 VAR_4 = (struct siba_erom *)VAR_1;


 VAR_5 = *VAR_2;
 VAR_5.m.match.core_unit = 0;


 for (u_int VAR_7 = 0; VAR_7 < VAR_4->io.ncores; VAR_7++) {
  struct siba_core_id VAR_8;
  struct bhnd_core_info VAR_9;


  if ((VAR_6 = FUNC_1(&VAR_4->io, VAR_7, 0, &VAR_8)))
   return (VAR_6);

  VAR_9 = VAR_8.core_info;


  if (!FUNC_0(&VAR_9, &VAR_5))
   continue;


  for (u_int VAR_10 = 0; VAR_10 < VAR_7; VAR_10++) {
   VAR_6 = FUNC_1(&VAR_4->io, VAR_10, 0, &VAR_8);
   if (VAR_6)
    return (VAR_6);


   if (VAR_8.core_info.vendor == VAR_9.vendor &&
       VAR_8.core_info.device == VAR_9.device)
    VAR_9.unit++;
  }


  if (!FUNC_0(&VAR_9, VAR_2))
   continue;


  *VAR_3 = VAR_9;
  return (0);
 }


 return (VAR_0);
}
