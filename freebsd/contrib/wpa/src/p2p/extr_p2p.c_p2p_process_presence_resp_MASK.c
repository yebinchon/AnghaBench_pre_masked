
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct p2p_message {int noa_len; int * noa; scalar_t__* status; } ;
struct p2p_data {TYPE_1__* cfg; } ;
struct TYPE_2__ {int cb_ctx; int (* presence_resp ) (int ,int const*,scalar_t__,int *,int ) ;} ;


 int VAR_0 ;
 int FUNC_0 (struct p2p_data*,char*,...) ;
 scalar_t__ FUNC_1 (int const*,size_t,struct p2p_message*) ;
 int FUNC_2 (struct p2p_message*) ;
 int FUNC_3 (int ,int const*,scalar_t__,int *,int ) ;
 int FUNC_4 (int ,char*,int *,int ) ;

__attribute__((used)) static void FUNC_5(struct p2p_data *VAR_1, const u8 *VAR_2,
          const u8 *VAR_3, const u8 *VAR_4, size_t VAR_5)
{
 struct p2p_message VAR_6;

 FUNC_0(VAR_1, "Received P2P Action - P2P Presence Response");

 if (FUNC_1(VAR_4, VAR_5, &VAR_6) < 0) {
  FUNC_0(VAR_1, "Failed to parse P2P Presence Response");
  return;
 }

 if (VAR_6.status == ((void*)0) || VAR_6.noa == ((void*)0)) {
  FUNC_0(VAR_1, "No Status or NoA attribute in P2P Presence Response");
  FUNC_2(&VAR_6);
  return;
 }

 if (VAR_1->cfg->presence_resp) {
  VAR_1->cfg->presence_resp(VAR_1->cfg->cb_ctx, VAR_3, *VAR_6.status,
     VAR_6.noa, VAR_6.noa_len);
 }

 if (*VAR_6.status) {
  FUNC_0(VAR_1, "P2P Presence Request was rejected: status %u",
   *VAR_6.status);
  FUNC_2(&VAR_6);
  return;
 }

 FUNC_0(VAR_1, "P2P Presence Request was accepted");
 FUNC_4(VAR_0, "P2P: P2P Presence Response - NoA",
      VAR_6.noa, VAR_6.noa_len);

 FUNC_2(&VAR_6);
}
