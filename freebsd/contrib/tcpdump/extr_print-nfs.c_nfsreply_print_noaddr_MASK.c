
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint32_t ;
typedef int u_int ;
typedef int u_char ;
struct TYPE_4__ {int high; int low; } ;
struct TYPE_5__ {int rj_why; TYPE_1__ rj_vers; int rj_stat; } ;
struct TYPE_6__ {TYPE_2__ rp_reject; int rp_stat; } ;
struct sunrpc_msg {TYPE_3__ rm_reply; } ;
typedef int netdissect_options ;
typedef enum sunrpc_reject_stat { ____Placeholder_sunrpc_reject_stat } sunrpc_reject_stat ;
typedef enum sunrpc_auth_stat { ____Placeholder_sunrpc_auth_stat } sunrpc_auth_stat ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ) ;




 int FUNC_3 (int *,struct sunrpc_msg const*,int,int,int ) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_4 (int ,char*,int) ;
 int VAR_2 ;
 int FUNC_5 (struct sunrpc_msg const*,int const*,int*,int*) ;

void
FUNC_6(netdissect_options *VAR_3,
                      register const u_char *VAR_4, u_int VAR_5,
                      register const u_char *VAR_6)
{
 register const struct sunrpc_msg *VAR_7;
 uint32_t VAR_8, VAR_9, VAR_10;
 enum sunrpc_reject_stat VAR_11;
 uint32_t VAR_12;
 uint32_t VAR_13;
 enum sunrpc_auth_stat VAR_14;

 VAR_0 = 0;
 VAR_7 = (const struct sunrpc_msg *)VAR_4;

 FUNC_2(VAR_7->rm_reply.rp_stat);
 VAR_10 = FUNC_0(&VAR_7->rm_reply.rp_stat);
 switch (VAR_10) {

 case 130:
  FUNC_1((VAR_3, "reply ok %u", VAR_5));
  if (FUNC_5(VAR_7, VAR_6, &VAR_8, &VAR_9) >= 0)
   FUNC_3(VAR_3, VAR_7, VAR_8, VAR_9, VAR_5);
  break;

 case 129:
  FUNC_1((VAR_3, "reply ERR %u: ", VAR_5));
  FUNC_2(VAR_7->rm_reply.rp_reject.rj_stat);
  VAR_11 = FUNC_0(&VAR_7->rm_reply.rp_reject.rj_stat);
  switch (VAR_11) {

  case 128:
   FUNC_2(VAR_7->rm_reply.rp_reject.rj_vers.high);
   VAR_12 = FUNC_0(&VAR_7->rm_reply.rp_reject.rj_vers.low);
   VAR_13 = FUNC_0(&VAR_7->rm_reply.rp_reject.rj_vers.high);
   FUNC_1((VAR_3, "RPC Version mismatch (%u-%u)", VAR_12, VAR_13));
   break;

  case 131:
   FUNC_2(VAR_7->rm_reply.rp_reject.rj_why);
   VAR_14 = FUNC_0(&VAR_7->rm_reply.rp_reject.rj_why);
   FUNC_1((VAR_3, "Auth %s", FUNC_4(VAR_1, "Invalid failure code %u", VAR_14)));
   break;

  default:
   FUNC_1((VAR_3, "Unknown reason for rejecting rpc message %u", (unsigned int)VAR_11));
   break;
  }
  break;

 default:
  FUNC_1((VAR_3, "reply Unknown rpc response code=%u %u", VAR_10, VAR_5));
  break;
 }
 return;

trunc:
 if (!VAR_0)
  FUNC_1((VAR_3, "%s", VAR_2));
}
