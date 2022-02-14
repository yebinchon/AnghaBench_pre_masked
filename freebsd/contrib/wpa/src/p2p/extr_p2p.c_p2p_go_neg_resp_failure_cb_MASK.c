
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct p2p_device {scalar_t__ status; int flags; } ;
struct p2p_data {scalar_t__ state; TYPE_1__* go_neg_peer; } ;
struct TYPE_2__ {scalar_t__ status; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (struct p2p_data*) ;
 int FUNC_1 (struct p2p_data*,char*,int) ;
 struct p2p_device* FUNC_2 (struct p2p_data*,int const*) ;
 int FUNC_3 (struct p2p_data*,scalar_t__) ;

__attribute__((used)) static void FUNC_4(struct p2p_data *VAR_5, int VAR_6,
           const u8 *VAR_7)
{
 FUNC_1(VAR_5, "GO Negotiation Response (failure) TX callback: success=%d", VAR_6);
 if (VAR_5->go_neg_peer && VAR_5->go_neg_peer->status != VAR_2) {
  FUNC_3(VAR_5, VAR_5->go_neg_peer->status);
  return;
 }

 if (VAR_6) {
  struct p2p_device *VAR_8;
  VAR_8 = FUNC_2(VAR_5, VAR_7);
  if (VAR_8 &&
      VAR_8->status == VAR_1)
   VAR_8->flags |= VAR_0;
 }

 if (VAR_5->state == VAR_4 || VAR_5->state == VAR_3)
  FUNC_0(VAR_5);
}
