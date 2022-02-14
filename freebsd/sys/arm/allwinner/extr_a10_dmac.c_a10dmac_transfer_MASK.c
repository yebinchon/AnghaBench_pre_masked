
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct a10dmac_channel {scalar_t__ ch_type; } ;
typedef int device_t ;
typedef size_t bus_addr_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 int FUNC_0 (struct a10dmac_channel*,int ,size_t) ;
 int VAR_9 ;
 int FUNC_1 (struct a10dmac_channel*) ;
 int FUNC_2 (struct a10dmac_channel*,int) ;

__attribute__((used)) static int
FUNC_3(device_t VAR_10, void *VAR_11, bus_addr_t VAR_12, bus_addr_t VAR_13,
    size_t VAR_14)
{
 struct a10dmac_channel *VAR_15 = VAR_11;
 uint32_t VAR_16;

 VAR_16 = FUNC_1(VAR_15);
 if (VAR_15->ch_type == VAR_8) {
  if (VAR_16 & VAR_5)
   return (VAR_9);

  FUNC_0(VAR_15, VAR_7, VAR_12);
  FUNC_0(VAR_15, VAR_6, VAR_13);
  FUNC_0(VAR_15, VAR_4, VAR_14);

  VAR_16 |= VAR_5;
  FUNC_2(VAR_15, VAR_16);
 } else {
  if (VAR_16 & VAR_1)
   return (VAR_9);

  FUNC_0(VAR_15, VAR_3, VAR_12);
  FUNC_0(VAR_15, VAR_2, VAR_13);
  FUNC_0(VAR_15, VAR_0, VAR_14);

  VAR_16 |= VAR_1;
  FUNC_2(VAR_15, VAR_16);
 }

 return (0);
}
