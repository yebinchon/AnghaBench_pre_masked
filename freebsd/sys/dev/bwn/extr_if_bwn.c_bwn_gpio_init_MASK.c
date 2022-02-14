
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_2__ {int board_flags; } ;
struct bwn_softc {TYPE_1__ sc_board_info; } ;
struct bwn_mac {struct bwn_softc* mac_sc; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct bwn_mac*,int ) ;
 int FUNC_1 (struct bwn_mac*,int ) ;
 int FUNC_2 (struct bwn_mac*,int ,int) ;
 int FUNC_3 (struct bwn_mac*,int ,int) ;
 int FUNC_4 (struct bwn_mac*,int) ;

__attribute__((used)) static int
FUNC_5(struct bwn_mac *VAR_5)
{
 struct bwn_softc *VAR_6;
 uint32_t VAR_7;

 VAR_6 = VAR_5->mac_sc;

 VAR_7 = 0xF;

 FUNC_3(VAR_5, VAR_3,
     FUNC_1(VAR_5, VAR_3) & ~VAR_4);
 FUNC_2(VAR_5, VAR_2,
     FUNC_0(VAR_5, VAR_2) | VAR_7);

 if (VAR_6->sc_board_info.board_flags & VAR_0) {

  FUNC_2(VAR_5, VAR_2,
      FUNC_0(VAR_5, VAR_2) | VAR_1);

  VAR_7 |= VAR_1;
 }

 return (FUNC_4(VAR_5, VAR_7));
}
