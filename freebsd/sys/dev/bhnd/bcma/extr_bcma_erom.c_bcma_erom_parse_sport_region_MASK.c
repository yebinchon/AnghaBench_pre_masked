
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef scalar_t__ uint32_t ;
struct bcma_erom_sport_region {int base_addr; int size; void* region_port; void* region_type; } ;
struct bcma_erom {int dummy; } ;
typedef int bhnd_size_t ;
typedef int bhnd_addr_t ;


 int FUNC_0 (scalar_t__,int ) ;
 void* FUNC_1 (scalar_t__,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (struct bcma_erom*,char*,int ,void*,unsigned long long,unsigned long long) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_3 (void*) ;
 scalar_t__ FUNC_4 (struct bcma_erom*,scalar_t__*) ;
 int FUNC_5 (struct bcma_erom*,scalar_t__*) ;
 int FUNC_6 (struct bcma_erom*) ;

__attribute__((used)) static int
FUNC_7(struct bcma_erom *VAR_13,
    struct bcma_erom_sport_region *VAR_14)
{
 uint32_t VAR_15;
 uint8_t VAR_16;
 int VAR_17;


 if (FUNC_4(VAR_13, &VAR_15))
  return (VAR_3);


 if (!FUNC_0(VAR_15, VAR_5)) {
  return (VAR_4);
 } else {
  FUNC_6(VAR_13);
 }

 VAR_14->base_addr = FUNC_1(VAR_15, VAR_7);
 VAR_14->region_type = FUNC_1(VAR_15, VAR_10);
 VAR_14->region_port = FUNC_1(VAR_15, VAR_8);
 VAR_16 = FUNC_1(VAR_15, VAR_9);


 if (FUNC_1(VAR_15, VAR_6)) {
  if ((VAR_17 = FUNC_5(VAR_13, &VAR_15)))
   return (VAR_17);

  VAR_14->base_addr |= ((bhnd_addr_t) VAR_15 << 32);
 }




 if (VAR_16 == VAR_1) {
  if ((VAR_17 = FUNC_5(VAR_13, &VAR_15)))
   return (VAR_17);

  VAR_14->size = FUNC_1(VAR_15, VAR_12);

  if (FUNC_1(VAR_15, VAR_11)) {
   if ((VAR_17 = FUNC_5(VAR_13, &VAR_15)))
    return (VAR_17);
   VAR_14->size |= ((bhnd_size_t) VAR_15 << 32);
  }
 } else {
  VAR_14->size = VAR_0 << VAR_16;
 }


 if (VAR_14->size != 0 &&
     VAR_2 - (VAR_14->size - 1) < VAR_14->base_addr)
 {
  FUNC_2(VAR_13, "%s%u: invalid address map %llx:%llx\n",
      FUNC_3(VAR_14->region_type),
      VAR_14->region_port,
      (unsigned long long) VAR_14->base_addr,
      (unsigned long long) VAR_14->size);

  return (VAR_3);
 }

 return (0);
}
