
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint32_t ;
typedef scalar_t__ uint16_t ;
struct urndis_softc {int dummy; } ;
struct rndis_query_req {void* rm_devicevchdl; void* rm_infobufoffset; void* rm_infobuflen; void* rm_oid; void* rm_rid; void* rm_len; void* rm_type; } ;
struct rndis_comp_hdr {int dummy; } ;


 int FUNC_0 (char*,...) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 void* FUNC_1 (scalar_t__) ;
 int FUNC_2 (void*) ;
 scalar_t__ FUNC_3 (struct urndis_softc*,struct rndis_comp_hdr*,void const**,scalar_t__*) ;
 struct rndis_comp_hdr* FUNC_4 (struct urndis_softc*) ;
 scalar_t__ FUNC_5 (struct urndis_softc*,struct rndis_query_req*,scalar_t__) ;

__attribute__((used)) static uint32_t
FUNC_6(struct urndis_softc *VAR_4, uint32_t VAR_5,
    struct rndis_query_req *VAR_6, uint16_t VAR_7, const void **VAR_8,
    uint16_t *VAR_9)
{
 struct rndis_comp_hdr *VAR_10;
 uint32_t VAR_11, VAR_12;

 VAR_6->rm_type = FUNC_1(VAR_0);
 VAR_6->rm_len = FUNC_1(VAR_7);
 VAR_6->rm_rid = 0;
 VAR_6->rm_oid = FUNC_1(VAR_5);
 VAR_11 = VAR_7 - sizeof(*VAR_6);
 VAR_6->rm_infobuflen = FUNC_1(VAR_11);
 if (VAR_11 != 0) {
  VAR_6->rm_infobufoffset = FUNC_1(sizeof(*VAR_6) -
      VAR_1);
 } else {
  VAR_6->rm_infobufoffset = 0;
 }
 VAR_6->rm_devicevchdl = 0;

 FUNC_0("type %u len %u rid %u oid 0x%x "
     "infobuflen %u infobufoffset %u devicevchdl %u\n",
     FUNC_2(VAR_6->rm_type),
     FUNC_2(VAR_6->rm_len),
     FUNC_2(VAR_6->rm_rid),
     FUNC_2(VAR_6->rm_oid),
     FUNC_2(VAR_6->rm_infobuflen),
     FUNC_2(VAR_6->rm_infobufoffset),
     FUNC_2(VAR_6->rm_devicevchdl));

 VAR_12 = FUNC_5(VAR_4, VAR_6, VAR_7);

 if (VAR_12 != VAR_3) {
  FUNC_0("query failed\n");
  return (VAR_12);
 }
 if ((VAR_10 = FUNC_4(VAR_4)) == ((void*)0)) {
  FUNC_0("unable to get query response\n");
  return (VAR_2);
 }
 VAR_12 = FUNC_3(VAR_4, VAR_10, VAR_8, VAR_9);

 return (VAR_12);
}
