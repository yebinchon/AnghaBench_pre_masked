
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint32_t ;
struct elink_params {int port; int * phy; struct bxe_softc* sc; } ;
struct bxe_softc {int dummy; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (struct bxe_softc*,char*) ;
 size_t VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_2 (struct bxe_softc*,scalar_t__,int) ;
 int FUNC_3 (int *,struct elink_params*,int ) ;

__attribute__((used)) static void FUNC_4(struct elink_params *VAR_6)
{
 struct bxe_softc *VAR_7 = VAR_6->sc;
 uint8_t VAR_8;
 uint32_t VAR_9;
 FUNC_1(VAR_7, "elink_xgxs_deassert\n");
 VAR_8 = VAR_6->port;

 VAR_9 = VAR_2 << (VAR_8*16);


 FUNC_2(VAR_7, VAR_3 + VAR_4, VAR_9);
 FUNC_0(500);
 FUNC_2(VAR_7, VAR_3 + VAR_5, VAR_9);
 FUNC_3(&VAR_6->phy[VAR_0], VAR_6,
     VAR_1);
}
