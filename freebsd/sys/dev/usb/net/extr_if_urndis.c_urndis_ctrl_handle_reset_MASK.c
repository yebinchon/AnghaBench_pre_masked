
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint32_t ;
struct urndis_softc {int sc_filter; } ;
struct rndis_set_req {int dummy; } ;
struct rndis_reset_comp {scalar_t__ rm_status; scalar_t__ rm_len; scalar_t__ rm_adrreset; } ;
struct rndis_comp_hdr {int dummy; } ;
typedef int msg_filter ;


 int FUNC_0 (char*,...) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (scalar_t__) ;
 scalar_t__ FUNC_3 (struct urndis_softc*,int ,struct rndis_set_req*,int) ;

__attribute__((used)) static uint32_t
FUNC_4(struct urndis_softc *VAR_2,
    const struct rndis_comp_hdr *VAR_3)
{
 const struct rndis_reset_comp *VAR_4;
 uint32_t VAR_5;

 VAR_4 = (const struct rndis_reset_comp *)VAR_3;

 VAR_5 = FUNC_2(VAR_4->rm_status);

 FUNC_0("len %u status 0x%x "
     "adrreset %u\n",
     FUNC_2(VAR_4->rm_len),
     VAR_5,
     FUNC_2(VAR_4->rm_adrreset));

 if (VAR_5 != VAR_1) {
  FUNC_0("reset failed 0x%x\n", VAR_5);
  return (VAR_5);
 }
 if (VAR_4->rm_adrreset != 0) {
  struct {
   struct rndis_set_req hdr;
   uint32_t filter;
  } VAR_6;

  VAR_6.filter = FUNC_1(VAR_2->sc_filter);

  VAR_5 = FUNC_3(VAR_2, VAR_0,
      &VAR_6.hdr, sizeof(VAR_6));

  if (VAR_5 != VAR_1) {
   FUNC_0("unable to reset data filters\n");
   return (VAR_5);
  }
 }
 return (VAR_5);
}
