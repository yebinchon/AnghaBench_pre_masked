
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_char ;
struct pptp_msg_wen {int align_err; int timeout_err; int buffer_overrun; int hardware_overrun; int framing_err; int crc_err; int reserved1; int peer_call_id; } ;
typedef int netdissect_options ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int *,int *) ;
 int VAR_0 ;

__attribute__((used)) static void
FUNC_4(netdissect_options *VAR_1,
               const u_char *VAR_2)
{
 const struct pptp_msg_wen *VAR_3 = (const struct pptp_msg_wen *)VAR_2;

 FUNC_2(VAR_3->peer_call_id);
 FUNC_3(VAR_1, &VAR_3->peer_call_id);
 FUNC_2(VAR_3->reserved1);
 FUNC_2(VAR_3->crc_err);
 FUNC_1((VAR_1, " CRC_ERR(%u)", FUNC_0(&VAR_3->crc_err)));
 FUNC_2(VAR_3->framing_err);
 FUNC_1((VAR_1, " FRAMING_ERR(%u)", FUNC_0(&VAR_3->framing_err)));
 FUNC_2(VAR_3->hardware_overrun);
 FUNC_1((VAR_1, " HARDWARE_OVERRUN(%u)", FUNC_0(&VAR_3->hardware_overrun)));
 FUNC_2(VAR_3->buffer_overrun);
 FUNC_1((VAR_1, " BUFFER_OVERRUN(%u)", FUNC_0(&VAR_3->buffer_overrun)));
 FUNC_2(VAR_3->timeout_err);
 FUNC_1((VAR_1, " TIMEOUT_ERR(%u)", FUNC_0(&VAR_3->timeout_err)));
 FUNC_2(VAR_3->align_err);
 FUNC_1((VAR_1, " ALIGN_ERR(%u)", FUNC_0(&VAR_3->align_err)));

 return;

trunc:
 FUNC_1((VAR_1, "%s", VAR_0));
}
