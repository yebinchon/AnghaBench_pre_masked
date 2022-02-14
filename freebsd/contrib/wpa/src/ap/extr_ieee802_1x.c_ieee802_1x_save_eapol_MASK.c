
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
struct sta_info {TYPE_1__* pending_eapol_rx; } ;
struct TYPE_3__ {int rx_time; int buf; } ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int *) ;
 TYPE_1__* FUNC_2 (int) ;
 int FUNC_3 (int const*,size_t) ;
 int FUNC_4 (int ) ;

__attribute__((used)) static void FUNC_5(struct sta_info *VAR_0, const u8 *VAR_1,
      size_t VAR_2)
{
 if (VAR_0->pending_eapol_rx) {
  FUNC_4(VAR_0->pending_eapol_rx->buf);
 } else {
  VAR_0->pending_eapol_rx =
   FUNC_2(sizeof(*VAR_0->pending_eapol_rx));
  if (!VAR_0->pending_eapol_rx)
   return;
 }

 VAR_0->pending_eapol_rx->buf = FUNC_3(VAR_1, VAR_2);
 if (!VAR_0->pending_eapol_rx->buf) {
  FUNC_0(VAR_0->pending_eapol_rx);
  VAR_0->pending_eapol_rx = ((void*)0);
  return;
 }

 FUNC_1(&VAR_0->pending_eapol_rx->rx_time);
}
