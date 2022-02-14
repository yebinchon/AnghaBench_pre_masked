
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint16_t ;
struct iwm_softc {int sc_dev; } ;
struct iwm_rx_packet {scalar_t__ data; } ;
struct iwm_nvm_access_resp {int * data; int offset; int length; int status; } ;
struct iwm_nvm_access_cmd {int op_code; int type; int length; int offset; } ;
struct iwm_host_cmd {int flags; int* len; struct iwm_rx_packet* resp_pkt; int data; int id; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct iwm_softc*,int,char*,int) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_1 (int ,char*,int,...) ;
 int FUNC_2 (int) ;
 int FUNC_3 (struct iwm_softc*,struct iwm_host_cmd*) ;
 int FUNC_4 (struct iwm_softc*,struct iwm_host_cmd*) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int *,int *,int) ;

__attribute__((used)) static int
FUNC_7(struct iwm_softc *VAR_9, uint16_t VAR_10,
 uint16_t VAR_11, uint16_t VAR_12, uint8_t *VAR_13, uint16_t *VAR_14)
{
 struct iwm_nvm_access_cmd VAR_15 = {
  .offset = FUNC_2(VAR_11),
  .length = FUNC_2(VAR_12),
  .type = FUNC_2(VAR_10),
  .op_code = VAR_7,
 };
 struct iwm_nvm_access_resp *VAR_16;
 struct iwm_rx_packet *VAR_17;
 struct iwm_host_cmd VAR_18 = {
  .id = VAR_6,
  .flags = VAR_3 | VAR_2,
  .data = &VAR_15, 
 };
 int VAR_19, VAR_20, VAR_21;
 uint8_t *VAR_22;

 VAR_18.len[0] = sizeof(struct iwm_nvm_access_cmd);

 VAR_19 = FUNC_4(VAR_9, &VAR_18);
 if (VAR_19) {
  FUNC_1(VAR_9->sc_dev,
      "Could not send NVM_ACCESS command (error=%d)\n", VAR_19);
  return VAR_19;
 }

 VAR_17 = VAR_18.resp_pkt;


 VAR_16 = (void *)VAR_17->data;
 VAR_19 = FUNC_5(VAR_16->status);
 VAR_20 = FUNC_5(VAR_16->length);
 VAR_21 = FUNC_5(VAR_16->offset);
 VAR_22 = VAR_16->data;
 if (VAR_19) {
  if ((VAR_11 != 0) &&
      (VAR_19 == VAR_8)) {
   FUNC_0(VAR_9, VAR_4 | VAR_5,
        "NVM access command failed on offset 0x%x since that section size is multiple 2K\n",
        VAR_11);
   *VAR_14 = 0;
   VAR_19 = 0;
  } else {
   FUNC_0(VAR_9, VAR_4 | VAR_5,
        "NVM access command failed with status %d\n", VAR_19);
   VAR_19 = VAR_1;
  }
  goto exit;
 }

 if (VAR_21 != VAR_11) {
  FUNC_1(VAR_9->sc_dev,
      "NVM ACCESS response with invalid offset %d\n",
      VAR_21);
  VAR_19 = VAR_0;
  goto exit;
 }

 if (VAR_20 > VAR_12) {
  FUNC_1(VAR_9->sc_dev,
      "NVM ACCESS response with too much data "
      "(%d bytes requested, %d bytes received)\n",
      VAR_12, VAR_20);
  VAR_19 = VAR_0;
  goto exit;
 }


 FUNC_6(VAR_13 + VAR_11, VAR_22, VAR_20);
 *VAR_14 = VAR_20;

 exit:
 FUNC_3(VAR_9, &VAR_18);
 return VAR_19;
}
