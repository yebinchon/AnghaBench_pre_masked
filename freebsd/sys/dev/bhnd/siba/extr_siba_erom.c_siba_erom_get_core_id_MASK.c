
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u_int ;
struct siba_erom {int io; } ;
struct TYPE_2__ {scalar_t__ vendor; scalar_t__ device; int unit; } ;
struct siba_core_id {TYPE_1__ core_info; } ;


 int FUNC_0 (int *,scalar_t__,int ,struct siba_core_id*) ;

int
FUNC_1(struct siba_erom *VAR_0, u_int VAR_1,
    struct siba_core_id *VAR_2)
{
 struct siba_core_id VAR_3;
 int VAR_4;


 if ((VAR_4 = FUNC_0(&VAR_0->io, VAR_1, 0, &VAR_3)))
  return (VAR_4);


 for (u_int VAR_5 = 0; VAR_5 < VAR_1; VAR_5++) {
  struct siba_core_id VAR_6;

  if ((VAR_4 = FUNC_0(&VAR_0->io, VAR_5, 0, &VAR_6)))
   return (VAR_4);


  if (VAR_3.core_info.vendor == VAR_6.core_info.vendor &&
      VAR_3.core_info.device == VAR_6.core_info.device)
   VAR_3.core_info.unit++;
 }

 *VAR_2 = VAR_3;
 return (0);
}
