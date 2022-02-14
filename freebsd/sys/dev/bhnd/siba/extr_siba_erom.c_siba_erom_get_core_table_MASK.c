
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t u_int ;
struct TYPE_2__ {size_t ncores; } ;
struct siba_erom {TYPE_1__ io; } ;
struct bhnd_core_info {scalar_t__ vendor; scalar_t__ device; int unit; } ;
struct siba_core_id {struct bhnd_core_info core_info; } ;
typedef int bhnd_erom_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct bhnd_core_info* FUNC_0 (size_t,int,int ,int ) ;
 int FUNC_1 (TYPE_1__*,size_t,int ,struct siba_core_id*) ;

__attribute__((used)) static int
FUNC_2(bhnd_erom_t *VAR_3, struct bhnd_core_info **VAR_4,
    u_int *VAR_5)
{
 struct siba_erom *VAR_6;
 struct bhnd_core_info *VAR_7;
 int VAR_8;

 VAR_6 = (struct siba_erom *)VAR_3;


 VAR_7 = FUNC_0(VAR_6->io.ncores, sizeof(*VAR_7), VAR_1, VAR_2);
 if (VAR_7 == ((void*)0))
  return (VAR_0);

 *VAR_4 = VAR_7;
 *VAR_5 = VAR_6->io.ncores;


 for (u_int VAR_9 = 0; VAR_9 < VAR_6->io.ncores; VAR_9++) {
  struct siba_core_id VAR_10;


  if ((VAR_8 = FUNC_1(&VAR_6->io, VAR_9, 0, &VAR_10)))
   return (VAR_8);

  VAR_7[VAR_9] = VAR_10.core_info;


  for (u_int VAR_11 = 0; VAR_11 < VAR_9; VAR_11++) {
   if (VAR_7[VAR_11].vendor == VAR_7[VAR_9].vendor &&
       VAR_7[VAR_11].device == VAR_7[VAR_9].device)
    VAR_7[VAR_9].unit++;
  }
 }

 return (0);
}
