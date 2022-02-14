
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct socket {int so_snd; int so_rcv; } ;
struct ha_softc {scalar_t__ ha_listen; scalar_t__ ha_connect; struct socket* ha_so; scalar_t__ ha_receiving; int * ha_sending; int ha_sendq; scalar_t__ ha_connected; scalar_t__ ha_disconnect; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_3 (struct ha_softc*,int ,int ,int ) ;
 int VAR_6 ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (scalar_t__*,int ,int ,char*,int ) ;
 int FUNC_7 (char*,int) ;
 int FUNC_8 (struct socket*) ;
 int FUNC_9 (struct socket*,int ) ;
 int FUNC_10 (scalar_t__*) ;

__attribute__((used)) static void
FUNC_11(struct ha_softc *VAR_7)
{
 struct socket *VAR_8 = VAR_7->ha_so;
 int VAR_9 = 0;

 if (VAR_7->ha_connected || VAR_7->ha_disconnect) {
  VAR_7->ha_connected = 0;
  FUNC_5(&VAR_7->ha_sendq);
  FUNC_4(VAR_7->ha_sending);
  VAR_7->ha_sending = ((void*)0);
  VAR_9 = 1;
 }
 if (VAR_8) {
  FUNC_0(&VAR_8->so_rcv);
  FUNC_9(VAR_8, VAR_4);
  while (VAR_7->ha_receiving) {
   FUNC_10(&VAR_7->ha_receiving);
   FUNC_6(&VAR_7->ha_receiving, FUNC_1(&VAR_8->so_rcv),
       0, "ha_rx exit", 0);
  }
  FUNC_2(&VAR_8->so_rcv);
  FUNC_0(&VAR_8->so_snd);
  FUNC_9(VAR_8, VAR_5);
  FUNC_2(&VAR_8->so_snd);
  VAR_7->ha_so = ((void*)0);
  if (VAR_7->ha_connect)
   FUNC_7("reconnect", VAR_6 / 2);
  FUNC_8(VAR_8);
 }
 if (VAR_9) {
  FUNC_3(VAR_7, VAR_0, VAR_1,
      (VAR_7->ha_connect || VAR_7->ha_listen) ?
      VAR_3 : VAR_2);
 }
}
