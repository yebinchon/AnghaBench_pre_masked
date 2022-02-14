
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int32_t ;
struct tws_softc {int tws_dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct tws_softc*,char*,int ,int ) ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (struct tws_softc*,int ,int) ;
 int FUNC_3 (struct tws_softc*) ;
 int FUNC_4 (struct tws_softc*,int ,int ,int) ;

__attribute__((used)) static void
FUNC_5(struct tws_softc *VAR_2)
{
    u_int32_t VAR_3=0;

    FUNC_0(VAR_2, "attn error", 0, 0);
    FUNC_4(VAR_2, VAR_0, ~0, 4);
    VAR_3 = FUNC_2(VAR_2, VAR_1, 4);
    FUNC_1(VAR_2->tws_dev, "Micro controller error.\n");
    FUNC_3(VAR_2);
}
