
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint32_t ;
struct urndis_softc {int dummy; } ;
struct rndis_init_req {void* rm_max_xfersz; void* rm_ver_minor; void* rm_ver_major; void* rm_rid; void* rm_len; void* rm_type; } ;
struct rndis_comp_hdr {int dummy; } ;
typedef int msg ;


 int FUNC_0 (char*,...) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 void* FUNC_1 (int) ;
 int FUNC_2 (void*) ;
 scalar_t__ FUNC_3 (struct urndis_softc*,struct rndis_comp_hdr*,int *,int *) ;
 struct rndis_comp_hdr* FUNC_4 (struct urndis_softc*) ;
 scalar_t__ FUNC_5 (struct urndis_softc*,struct rndis_init_req*,int) ;

__attribute__((used)) static uint32_t
FUNC_6(struct urndis_softc *VAR_5)
{
 struct rndis_init_req VAR_6;
 struct rndis_comp_hdr *VAR_7;
 uint32_t VAR_8;

 VAR_6.rm_type = FUNC_1(VAR_0);
 VAR_6.rm_len = FUNC_1(sizeof(VAR_6));
 VAR_6.rm_rid = 0;
 VAR_6.rm_ver_major = FUNC_1(VAR_4);
 VAR_6.rm_ver_minor = FUNC_1(1);
 VAR_6.rm_max_xfersz = FUNC_1(VAR_1);

 FUNC_0("type %u len %u rid %u ver_major %u "
     "ver_minor %u max_xfersz %u\n",
     FUNC_2(VAR_6.rm_type),
     FUNC_2(VAR_6.rm_len),
     FUNC_2(VAR_6.rm_rid),
     FUNC_2(VAR_6.rm_ver_major),
     FUNC_2(VAR_6.rm_ver_minor),
     FUNC_2(VAR_6.rm_max_xfersz));

 VAR_8 = FUNC_5(VAR_5, &VAR_6, sizeof(VAR_6));

 if (VAR_8 != VAR_3) {
  FUNC_0("init failed\n");
  return (VAR_8);
 }
 if ((VAR_7 = FUNC_4(VAR_5)) == ((void*)0)) {
  FUNC_0("unable to get init response\n");
  return (VAR_2);
 }
 VAR_8 = FUNC_3(VAR_5, VAR_7, ((void*)0), ((void*)0));

 return (VAR_8);
}
