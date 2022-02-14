
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint32_t ;
struct urndis_softc {scalar_t__ sc_lim_pktsz; } ;
struct rndis_init_comp {int rm_status; int rm_pktmaxsz; int rm_medium; int rm_devflags; int rm_aflistsz; int rm_aflistoffset; int rm_align; int rm_pktmaxcnt; int rm_ver_minor; int rm_ver_major; int rm_rid; int rm_len; } ;
struct rndis_comp_hdr {int dummy; } ;


 int FUNC_0 (char*,scalar_t__,...) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ FUNC_1 (int ) ;

__attribute__((used)) static uint32_t
FUNC_2(struct urndis_softc *VAR_4,
    const struct rndis_comp_hdr *VAR_5)
{
 const struct rndis_init_comp *VAR_6;

 VAR_6 = (const struct rndis_init_comp *)VAR_5;

 FUNC_0("len %u rid %u status 0x%x "
     "ver_major %u ver_minor %u devflags 0x%x medium 0x%x pktmaxcnt %u "
     "pktmaxsz %u align %u aflistoffset %u aflistsz %u\n",
     FUNC_1(VAR_6->rm_len),
     FUNC_1(VAR_6->rm_rid),
     FUNC_1(VAR_6->rm_status),
     FUNC_1(VAR_6->rm_ver_major),
     FUNC_1(VAR_6->rm_ver_minor),
     FUNC_1(VAR_6->rm_devflags),
     FUNC_1(VAR_6->rm_medium),
     FUNC_1(VAR_6->rm_pktmaxcnt),
     FUNC_1(VAR_6->rm_pktmaxsz),
     FUNC_1(VAR_6->rm_align),
     FUNC_1(VAR_6->rm_aflistoffset),
     FUNC_1(VAR_6->rm_aflistsz));

 if (FUNC_1(VAR_6->rm_status) != VAR_3) {
  FUNC_0("init failed 0x%x\n", FUNC_1(VAR_6->rm_status));
  return (FUNC_1(VAR_6->rm_status));
 }
 if (FUNC_1(VAR_6->rm_devflags) != VAR_0) {
  FUNC_0("wrong device type (current type: 0x%x)\n",
      FUNC_1(VAR_6->rm_devflags));
  return (VAR_2);
 }
 if (FUNC_1(VAR_6->rm_medium) != VAR_1) {
  FUNC_0("medium not 802.3 (current medium: 0x%x)\n",
      FUNC_1(VAR_6->rm_medium));
  return (VAR_2);
 }
 VAR_4->sc_lim_pktsz = FUNC_1(VAR_6->rm_pktmaxsz);

 return (FUNC_1(VAR_6->rm_status));
}
