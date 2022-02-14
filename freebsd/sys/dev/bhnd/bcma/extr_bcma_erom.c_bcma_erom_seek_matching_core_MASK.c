
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u_int ;
struct TYPE_3__ {scalar_t__ core_unit; } ;
struct TYPE_4__ {TYPE_1__ match; } ;
typedef struct bhnd_core_match {TYPE_2__ m; } const bhnd_core_match ;
struct bhnd_core_info {scalar_t__ vendor; scalar_t__ device; int unit; } ;
struct bcma_erom_core {scalar_t__ vendor; scalar_t__ device; } ;
struct bcma_erom {int dummy; } ;
typedef int bus_size_t ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (struct bcma_erom*,struct bcma_erom_core*) ;
 int FUNC_1 (struct bcma_erom*) ;
 int FUNC_2 (struct bcma_erom*,int ) ;
 int FUNC_3 (struct bcma_erom*,int ) ;
 int FUNC_4 (struct bcma_erom*) ;
 int FUNC_5 (struct bcma_erom_core*,scalar_t__,int ,struct bhnd_core_info*) ;
 int FUNC_6 (struct bhnd_core_info*,struct bhnd_core_match const*) ;

__attribute__((used)) static int
FUNC_7(struct bcma_erom *VAR_2,
    const struct bhnd_core_match *VAR_3, struct bhnd_core_info *VAR_4)
{
 struct bhnd_core_match VAR_5;
 bus_size_t VAR_6, VAR_7;
 int VAR_8;


 FUNC_1(VAR_2);


 VAR_5 = *VAR_3;
 VAR_5.m.match.core_unit = 0;


 for (u_int VAR_9 = 0; VAR_9 < VAR_1; VAR_9++) {
  struct bcma_erom_core VAR_10;
  struct bhnd_core_info VAR_11;


  VAR_8 = FUNC_3(VAR_2, VAR_0);
  if (VAR_8)
   return (VAR_8);


  VAR_6 = FUNC_4(VAR_2);


  if ((VAR_8 = FUNC_0(VAR_2, &VAR_10)))
   return (VAR_8);

  FUNC_5(&VAR_10, VAR_9, 0, &VAR_11);


  if (!FUNC_6(&VAR_11, &VAR_5))
   continue;


  VAR_7 = FUNC_4(VAR_2);
  FUNC_1(VAR_2);
  for (u_int VAR_12 = 0; VAR_12 < VAR_9; VAR_12++) {

   VAR_8 = FUNC_3(VAR_2,
       VAR_0);
   if (VAR_8)
    return (VAR_8);

   if ((VAR_8 = FUNC_0(VAR_2, &VAR_10)))
    return (VAR_8);


   if (VAR_10.vendor == VAR_11.vendor && VAR_10.device == VAR_11.device)
    VAR_11.unit++;
  }


  if (!FUNC_6(&VAR_11, VAR_3)) {

   FUNC_2(VAR_2, VAR_7);
   continue;
  }



  FUNC_2(VAR_2, VAR_6);
  if (VAR_4 != ((void*)0))
   *VAR_4 = VAR_11;

  return (0);
 }


 return (VAR_8);
}
