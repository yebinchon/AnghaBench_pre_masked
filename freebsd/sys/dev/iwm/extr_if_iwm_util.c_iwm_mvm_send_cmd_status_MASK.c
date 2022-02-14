
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint32_t ;
struct iwm_softc {int dummy; } ;
struct TYPE_2__ {int flags; } ;
struct iwm_rx_packet {scalar_t__ data; TYPE_1__ hdr; } ;
struct iwm_host_cmd {int flags; struct iwm_rx_packet* resp_pkt; } ;
struct iwm_cmd_response {int status; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int,char*) ;
 int FUNC_1 (struct iwm_softc*,struct iwm_host_cmd*) ;
 int FUNC_2 (struct iwm_rx_packet*) ;
 int FUNC_3 (struct iwm_softc*,struct iwm_host_cmd*) ;
 int FUNC_4 (int ) ;

int
FUNC_5(struct iwm_softc *VAR_4,
 struct iwm_host_cmd *VAR_5, uint32_t *VAR_6)
{
 struct iwm_rx_packet *VAR_7;
 struct iwm_cmd_response *VAR_8;
 int VAR_9, VAR_10;

 FUNC_0((VAR_5->flags & VAR_3) == 0,
     ("invalid command"));
 VAR_5->flags |= VAR_2 | VAR_3;

 if ((VAR_9 = FUNC_3(VAR_4, VAR_5)) != 0)
  return VAR_9;
 VAR_7 = VAR_5->resp_pkt;


 if (!VAR_7) {
  VAR_9 = 0;
  goto out_free_resp;
 }

 if (VAR_7->hdr.flags & VAR_1) {
  VAR_9 = VAR_0;
  goto out_free_resp;
 }

 VAR_10 = FUNC_2(VAR_7);
 if (VAR_10 != sizeof(*VAR_8)) {
  VAR_9 = VAR_0;
  goto out_free_resp;
 }

 VAR_8 = (void *)VAR_7->data;
 *VAR_6 = FUNC_4(VAR_8->status);
 out_free_resp:
 FUNC_1(VAR_4, VAR_5);
 return VAR_9;
}
