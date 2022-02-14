
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct bhnd_erom_io {int dummy; } ;
struct bhnd_chipid {int chip_caps; void* enum_addr; void* chip_type; void* ncores; void* chip_rev; void* chip_pkg; void* chip_id; } ;
typedef int bhnd_size_t ;
typedef void* bhnd_addr_t ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (void*) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 void* FUNC_1 (int,int ) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 void* FUNC_2 (struct bhnd_erom_io*,int ,int) ;
 int FUNC_3 (struct bhnd_erom_io*,void**,int *) ;

int
FUNC_4(struct bhnd_erom_io *VAR_12, struct bhnd_chipid *VAR_13)
{
 bhnd_addr_t VAR_14;
 bhnd_size_t VAR_15;
 uint32_t VAR_16, VAR_17;
 int VAR_18;


 if ((VAR_18 = FUNC_3(VAR_12, &VAR_14, &VAR_15)))
  return (VAR_18);


 VAR_16 = FUNC_2(VAR_12, VAR_6, 4);


 VAR_13->chip_id = FUNC_1(VAR_16, VAR_8);
 VAR_13->chip_pkg = FUNC_1(VAR_16, VAR_10);
 VAR_13->chip_rev = FUNC_1(VAR_16, VAR_11);
 VAR_13->chip_type = FUNC_1(VAR_16, VAR_7);
 VAR_13->ncores = FUNC_1(VAR_16, VAR_9);


 if (FUNC_0(VAR_13->chip_type)) {
  VAR_13->enum_addr = FUNC_2(VAR_12, VAR_5, 4);
 } else {
  VAR_13->enum_addr = VAR_14;
 }


 VAR_17 = FUNC_2(VAR_12, VAR_2, 4);
 VAR_13->chip_caps = 0x0;

 if (VAR_17 & VAR_3)
  VAR_13->chip_caps |= VAR_0;

 if (VAR_17 & VAR_4)
  VAR_13->chip_caps |= VAR_1;

 return (0);
}
