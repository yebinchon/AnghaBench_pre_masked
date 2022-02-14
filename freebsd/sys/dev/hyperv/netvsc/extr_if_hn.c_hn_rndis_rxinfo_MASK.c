
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint32_t ;
struct rndis_pktinfo {int rm_size; int rm_pktinfooffset; void* rm_data; int rm_type; } ;
struct hn_rxinfo {int vlan_info; int csum_info; int hash_value; int hash_info; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;


 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;


 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 scalar_t__ FUNC_0 (int) ;

__attribute__((used)) static int
FUNC_1(const void *VAR_12, int VAR_13, struct hn_rxinfo *VAR_14)
{
 const struct rndis_pktinfo *VAR_15 = VAR_12;
 uint32_t VAR_16 = 0;

 while (VAR_13 != 0) {
  const void *VAR_17;
  uint32_t VAR_18;

  if (FUNC_0(VAR_13 < sizeof(*VAR_15)))
   return (VAR_0);
  if (FUNC_0(VAR_13 < VAR_15->rm_size))
   return (VAR_0);
  VAR_13 -= VAR_15->rm_size;

  if (FUNC_0(VAR_15->rm_size & VAR_11))
   return (VAR_0);
  if (FUNC_0(VAR_15->rm_size < VAR_15->rm_pktinfooffset))
   return (VAR_0);
  VAR_18 = VAR_15->rm_size - VAR_15->rm_pktinfooffset;
  VAR_17 = VAR_15->rm_data;

  switch (VAR_15->rm_type) {
  case 128:
   if (FUNC_0(VAR_18 < VAR_10))
    return (VAR_0);
   VAR_14->vlan_info = *((const uint32_t *)VAR_17);
   VAR_16 |= VAR_8;
   break;

  case 129:
   if (FUNC_0(VAR_18 < VAR_9))
    return (VAR_0);
   VAR_14->csum_info = *((const uint32_t *)VAR_17);
   VAR_16 |= VAR_5;
   break;

  case 130:
   if (FUNC_0(VAR_18 < VAR_3))
    return (VAR_0);
   VAR_14->hash_value = *((const uint32_t *)VAR_17);
   VAR_16 |= VAR_7;
   break;

  case 131:
   if (FUNC_0(VAR_18 < VAR_2))
    return (VAR_0);
   VAR_14->hash_info = *((const uint32_t *)VAR_17);
   VAR_16 |= VAR_6;
   break;

  default:
   goto next;
  }

  if (VAR_16 == VAR_4) {

   break;
  }
next:
  VAR_15 = (const struct rndis_pktinfo *)
      ((const uint8_t *)VAR_15 + VAR_15->rm_size);
 }





 if ((VAR_16 & VAR_7) == 0)
  VAR_14->hash_info = VAR_1;
 return (0);
}
