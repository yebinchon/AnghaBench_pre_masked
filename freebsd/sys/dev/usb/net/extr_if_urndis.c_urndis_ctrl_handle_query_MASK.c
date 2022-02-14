
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef scalar_t__ uint64_t ;
typedef int uint32_t ;
typedef int uint16_t ;
struct urndis_softc {int dummy; } ;
struct rndis_query_comp {int rm_status; int rm_infobuflen; int rm_infobufoffset; int rm_len; int rm_rid; } ;
struct rndis_comp_hdr {int dummy; } ;


 int FUNC_0 (char*,int,...) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_1 (int ) ;

__attribute__((used)) static uint32_t
FUNC_2(struct urndis_softc *VAR_3,
    const struct rndis_comp_hdr *VAR_4, const void **VAR_5, uint16_t *VAR_6)
{
 const struct rndis_query_comp *VAR_7;
 uint64_t VAR_8;

 VAR_7 = (const struct rndis_query_comp *)VAR_4;

 FUNC_0("len %u rid %u status 0x%x "
     "buflen %u bufoff %u\n",
     FUNC_1(VAR_7->rm_len),
     FUNC_1(VAR_7->rm_rid),
     FUNC_1(VAR_7->rm_status),
     FUNC_1(VAR_7->rm_infobuflen),
     FUNC_1(VAR_7->rm_infobufoffset));

 *VAR_5 = ((void*)0);
 *VAR_6 = 0;
 if (FUNC_1(VAR_7->rm_status) != VAR_2) {
  FUNC_0("query failed 0x%x\n", FUNC_1(VAR_7->rm_status));
  return (FUNC_1(VAR_7->rm_status));
 }
 VAR_8 = FUNC_1(VAR_7->rm_infobuflen);
 VAR_8 += FUNC_1(VAR_7->rm_infobufoffset);
 VAR_8 += VAR_0;

 if (VAR_8 > (uint64_t)FUNC_1(VAR_7->rm_len)) {
  FUNC_0("ctrl message error: invalid query info "
      "len/offset/end_position(%u/%u/%u) -> "
      "go out of buffer limit %u\n",
      FUNC_1(VAR_7->rm_infobuflen),
      FUNC_1(VAR_7->rm_infobufoffset),
      FUNC_1(VAR_7->rm_infobuflen) +
      FUNC_1(VAR_7->rm_infobufoffset) + VAR_0,
      FUNC_1(VAR_7->rm_len));
  return (VAR_1);
 }
 *VAR_5 = ((const uint8_t *)VAR_7) + VAR_0 +
     FUNC_1(VAR_7->rm_infobufoffset);
 *VAR_6 = FUNC_1(VAR_7->rm_infobuflen);

 return (FUNC_1(VAR_7->rm_status));
}
