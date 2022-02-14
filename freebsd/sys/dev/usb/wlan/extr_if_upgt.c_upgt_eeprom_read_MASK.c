
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint32_t ;
struct upgt_softc {int sc_dev; int sc_mtx; scalar_t__ sc_memaddr_frame_start; } ;
struct upgt_lmac_mem {int chksum; void* addr; } ;
struct upgt_lmac_header {int dummy; } ;
struct TYPE_4__ {scalar_t__ flags; void* type; void* reqid; } ;
struct TYPE_3__ {void* len; int type; scalar_t__ flags; } ;
struct upgt_lmac_eeprom {void* len; void* offset; TYPE_2__ header2; TYPE_1__ header1; } ;
struct upgt_data {int buflen; scalar_t__ buf; } ;


 int FUNC_0 (struct upgt_softc*,int ,char*,int,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_1 (struct upgt_softc*) ;
 scalar_t__ VAR_8 ;
 int FUNC_2 (struct upgt_softc*) ;
 int FUNC_3 (int ,char*) ;
 void* FUNC_4 (int) ;
 void* FUNC_5 (scalar_t__) ;
 int VAR_9 ;
 int FUNC_6 (scalar_t__,int ,int ) ;
 int FUNC_7 (struct upgt_softc*,int *,int ,char*,int ) ;
 int FUNC_8 (struct upgt_softc*,struct upgt_data*) ;
 int FUNC_9 (int *,int) ;
 struct upgt_data* FUNC_10 (struct upgt_softc*) ;
 int FUNC_11 (int *,int) ;

__attribute__((used)) static int
FUNC_12(struct upgt_softc *VAR_10)
{
 struct upgt_data *VAR_11;
 struct upgt_lmac_mem *VAR_12;
 struct upgt_lmac_eeprom *VAR_13;
 int VAR_14, VAR_15, VAR_16;

 FUNC_1(VAR_10);
 FUNC_11(&VAR_10->sc_mtx, 100);

 VAR_16 = 0;
 VAR_14 = VAR_4;
 while (VAR_16 < VAR_5) {
  FUNC_0(VAR_10, VAR_3,
      "request EEPROM block (offset=%d, len=%d)\n", VAR_16, VAR_14);

  VAR_11 = FUNC_10(VAR_10);
  if (VAR_11 == ((void*)0)) {
   FUNC_2(VAR_10);
   return (VAR_1);
  }




  FUNC_6(VAR_11->buf, 0, VAR_2);

  VAR_12 = (struct upgt_lmac_mem *)VAR_11->buf;
  VAR_12->addr = FUNC_5(VAR_10->sc_memaddr_frame_start +
      VAR_8);

  VAR_13 = (struct upgt_lmac_eeprom *)(VAR_12 + 1);
  VAR_13->header1.flags = 0;
  VAR_13->header1.type = VAR_6;
  VAR_13->header1.len = FUNC_4((
      sizeof(struct upgt_lmac_eeprom) -
      sizeof(struct upgt_lmac_header)) + VAR_14);

  VAR_13->header2.reqid = FUNC_5(VAR_10->sc_memaddr_frame_start);
  VAR_13->header2.type = FUNC_4(VAR_7);
  VAR_13->header2.flags = 0;

  VAR_13->offset = FUNC_4(VAR_16);
  VAR_13->len = FUNC_4(VAR_14);

  VAR_11->buflen = sizeof(*VAR_12) + sizeof(*VAR_13) + VAR_14;

  VAR_12->chksum = FUNC_9((uint32_t *)VAR_13,
      VAR_11->buflen - sizeof(*VAR_12));
  FUNC_8(VAR_10, VAR_11);

  VAR_15 = FUNC_7(VAR_10, &VAR_10->sc_mtx, 0, "eeprom_request", VAR_9);
  if (VAR_15 != 0) {
   FUNC_3(VAR_10->sc_dev,
       "timeout while waiting for EEPROM data\n");
   FUNC_2(VAR_10);
   return (VAR_0);
  }

  VAR_16 += VAR_14;
  if (VAR_5 - VAR_16 < VAR_14)
   VAR_14 = VAR_5 - VAR_16;
 }

 FUNC_2(VAR_10);
 return (0);
}
