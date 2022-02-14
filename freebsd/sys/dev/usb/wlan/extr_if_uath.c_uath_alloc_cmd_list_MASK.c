
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct uath_softc {int sc_cmd_inactive; scalar_t__ sc_cmd_dma_buf; int sc_cmd_waiting; int sc_cmd_pending; int sc_cmd_active; } ;
struct uath_cmd {int msgid; int * buf; struct uath_softc* sc; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *,struct uath_cmd*,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (struct uath_softc*,int ) ;
 int VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static int
FUNC_3(struct uath_softc *VAR_4, struct uath_cmd VAR_5[])
{
 int VAR_6;

 FUNC_0(&VAR_4->sc_cmd_active);
 FUNC_0(&VAR_4->sc_cmd_pending);
 FUNC_0(&VAR_4->sc_cmd_waiting);
 FUNC_0(&VAR_4->sc_cmd_inactive);

 for (VAR_6 = 0; VAR_6 != VAR_0; VAR_6++) {
  struct uath_cmd *VAR_7 = &VAR_5[VAR_6];

  VAR_7->sc = VAR_4;
  VAR_7->msgid = VAR_6;
  VAR_7->buf = ((uint8_t *)VAR_4->sc_cmd_dma_buf) +
      (VAR_6 * VAR_1);
  FUNC_1(&VAR_4->sc_cmd_inactive, VAR_7, VAR_2);
  FUNC_2(VAR_4, VAR_3);
 }
 return (0);
}
