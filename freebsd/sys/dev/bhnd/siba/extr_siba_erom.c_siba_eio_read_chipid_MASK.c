
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct siba_erom_io {int eio; } ;
struct TYPE_2__ {scalar_t__ vendor; scalar_t__ device; int hwrev; } ;
struct siba_core_id {TYPE_1__ core_info; } ;
struct bhnd_chipid {int chip_id; int ncores; } ;
typedef int bus_addr_t ;





 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (struct siba_erom_io*,char*,scalar_t__,scalar_t__) ;
 int FUNC_2 (int ,struct bhnd_chipid*) ;
 scalar_t__ VAR_4 ;
 int FUNC_3 (struct siba_erom_io*,int ,int ,struct siba_core_id*) ;

__attribute__((used)) static int
FUNC_4(struct siba_erom_io *VAR_5, bus_addr_t VAR_6,
    struct bhnd_chipid *VAR_7)
{
 struct siba_core_id VAR_8;
 int VAR_9;


 if ((VAR_9 = FUNC_3(VAR_5, 0, 0, &VAR_8)))
  return (VAR_9);

 if (VAR_8.core_info.vendor != VAR_1 ||
     VAR_8.core_info.device != VAR_0)
 {
  if (VAR_4) {
   FUNC_1(VAR_5, "first core not chipcommon "
       "(vendor=%#hx, core=%#hx)\n", VAR_8.core_info.vendor,
       VAR_8.core_info.device);
  }
  return (VAR_3);
 }


 if ((VAR_9 = FUNC_2(VAR_5->eio, VAR_7)))
  return (VAR_9);


 if (FUNC_0(VAR_8.core_info.hwrev))
  return (0);

 switch (VAR_7->chip_id) {
 case 130:
  VAR_7->ncores = 6;
  break;
 case 129:
  VAR_7->ncores = 9;
  break;
 case 128:
  VAR_7->ncores = 7;
  break;
 default:
  return (VAR_2);
 }

 return (0);
}
