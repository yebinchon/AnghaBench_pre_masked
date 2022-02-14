
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint8_t ;
typedef int uint32_t ;
typedef scalar_t__ u_long ;
typedef scalar_t__ u_int ;
struct bhnd_core_match {int dummy; } ;
struct bhnd_core_info {int dummy; } ;
struct bcma_erom_sport_region {int size; int base_addr; } ;
struct bcma_erom_core {scalar_t__ num_mport; } ;
struct bcma_erom {int dummy; } ;
typedef int bhnd_size_t ;
typedef scalar_t__ bhnd_port_type ;
typedef int bhnd_erom_t ;
typedef int bhnd_addr_t ;


 int FUNC_0 (int ,int ) ;
 scalar_t__ FUNC_1 (int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (struct bcma_erom*,struct bcma_erom_core*) ;
 int FUNC_3 (struct bcma_erom*,struct bcma_erom_sport_region*) ;
 int FUNC_4 (struct bcma_erom*,int *) ;
 int FUNC_5 (struct bcma_erom*,scalar_t__,scalar_t__*) ;
 int FUNC_6 (struct bcma_erom*,struct bhnd_core_match const*,struct bhnd_core_info*) ;
 int FUNC_7 (struct bcma_erom*) ;
 int FUNC_8 (struct bcma_erom*) ;

__attribute__((used)) static int
FUNC_9(bhnd_erom_t *VAR_4, const struct bhnd_core_match *VAR_5,
    bhnd_port_type VAR_6, u_int VAR_7, u_int VAR_8,
    struct bhnd_core_info *VAR_9, bhnd_addr_t *VAR_10, bhnd_size_t *VAR_11)
{
 struct bcma_erom *VAR_12;
 struct bcma_erom_core VAR_13;
 uint32_t VAR_14;
 uint8_t VAR_15, VAR_16;
 bool VAR_17;
 int VAR_18;

 VAR_12 = (struct bcma_erom *)VAR_4;



 if ((VAR_18 = FUNC_6(VAR_12, VAR_5, VAR_9)))
  return (VAR_18);

 if ((VAR_18 = FUNC_2(VAR_12, &VAR_13)))
  return (VAR_18);


 for (u_long VAR_19 = 0; VAR_19 < VAR_13.num_mport; VAR_19++) {
  if ((VAR_18 = FUNC_7(VAR_12)))
   return (VAR_18);
 }


 VAR_17 = 0;
 while (1) {
  bhnd_port_type VAR_20;
  uint8_t VAR_21;

  if ((VAR_18 = FUNC_4(VAR_12, &VAR_14)))
   return (VAR_18);

  if (!FUNC_0(VAR_14, VAR_1))
   return (VAR_0);


  VAR_21 = FUNC_1(VAR_14, VAR_3);
  VAR_18 = FUNC_5(VAR_12, VAR_21, &VAR_20);
  if (VAR_18)
   return (VAR_18);

  if (VAR_20 == VAR_6) {
   VAR_17 = 1;
   break;
  }


  if ((VAR_18 = FUNC_8(VAR_12)))
   return (VAR_18);
 }

 if (!VAR_17)
  return (VAR_0);



 VAR_17 = 0;
 for (u_int VAR_22 = 0; VAR_22 <= VAR_7; VAR_22++) {
  bhnd_port_type VAR_23;

  if ((VAR_18 = FUNC_4(VAR_12, &VAR_14)))
   return (VAR_18);

  if (!FUNC_0(VAR_14, VAR_1))
   return (VAR_0);


  VAR_16 = FUNC_1(VAR_14, VAR_3);
  VAR_15 = FUNC_1(VAR_14, VAR_2);


  if (VAR_22 == VAR_7) {
   VAR_18 = FUNC_5(VAR_12, VAR_16,
       &VAR_23);
   if (VAR_18)
    return (VAR_18);

   if (VAR_23 == VAR_6)
    VAR_17 = 1;

   break;
  }


  while (1) {
   uint8_t VAR_24, VAR_25;

   if ((VAR_18 = FUNC_8(VAR_12)))
    return (VAR_18);

   if ((VAR_18 = FUNC_4(VAR_12, &VAR_14)))
    return (VAR_18);

   if (!FUNC_0(VAR_14, VAR_1))
    return (VAR_0);

   VAR_24 = FUNC_1(VAR_14, VAR_3);
   VAR_25 = FUNC_1(VAR_14, VAR_2);

   if (VAR_24 != VAR_16 ||
       VAR_25 != VAR_15)
    break;
  }
 }

 if (!VAR_17)
  return (VAR_0);


 for (u_int VAR_26 = 0; VAR_26 <= VAR_8; VAR_26++) {
  struct bcma_erom_sport_region VAR_27;
  uint8_t VAR_28, VAR_29;

  if ((VAR_18 = FUNC_4(VAR_12, &VAR_14)))
   return (VAR_18);

  if (!FUNC_0(VAR_14, VAR_1))
   return (VAR_0);


  VAR_29 = FUNC_1(VAR_14, VAR_3);
  VAR_28 = FUNC_1(VAR_14, VAR_2);

  if (VAR_29 != VAR_16 ||
      VAR_28 != VAR_15)
   break;


  if ((VAR_18 = FUNC_3(VAR_12, &VAR_27)))
   return (VAR_18);


  if (VAR_26 == VAR_8) {

   *VAR_10 = VAR_27.base_addr;
   *VAR_11 = VAR_27.size;
   return (0);
  }
 }


 return (VAR_0);
}
