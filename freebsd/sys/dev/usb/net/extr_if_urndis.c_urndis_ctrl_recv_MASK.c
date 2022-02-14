
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ usb_error_t ;
struct urndis_softc {scalar_t__ sc_response_buf; int sc_ifaceno_ctl; } ;
struct rndis_comp_hdr {int rm_len; int rm_type; } ;


 int FUNC_0 (char*,scalar_t__,scalar_t__) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (struct urndis_softc*,int ,int ,int ,int ,scalar_t__,scalar_t__) ;

__attribute__((used)) static struct rndis_comp_hdr *
FUNC_3(struct urndis_softc *VAR_4)
{
 struct rndis_comp_hdr *VAR_5;
 usb_error_t VAR_6;

 VAR_6 = FUNC_2(VAR_4, VAR_3,
     VAR_1, VAR_4->sc_ifaceno_ctl, 0,
     VAR_4->sc_response_buf, VAR_0);

 if (VAR_6 != VAR_2)
  return (((void*)0));

 VAR_5 = (struct rndis_comp_hdr *)VAR_4->sc_response_buf;

 FUNC_0("type 0x%x len %u\n", FUNC_1(VAR_5->rm_type),
     FUNC_1(VAR_5->rm_len));

 if (FUNC_1(VAR_5->rm_len) > VAR_0) {
  FUNC_0("ctrl message error: wrong size %u > %u\n",
      FUNC_1(VAR_5->rm_len), VAR_0);
  return (((void*)0));
 }
 return (VAR_5);
}
