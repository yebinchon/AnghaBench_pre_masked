
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint16_t ;
struct elink_params {scalar_t__ port; struct bxe_softc* sc; } ;
struct bxe_softc {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct bxe_softc*,int ,int ) ;

__attribute__((used)) static void FUNC_1(struct elink_params *VAR_6,
    uint16_t VAR_7,
    uint8_t VAR_8)
{
 struct bxe_softc *VAR_9 = VAR_6->sc;

 FUNC_0(VAR_9, VAR_6->port ? VAR_3 : VAR_0,
        VAR_8);
 FUNC_0(VAR_9, VAR_6->port ? VAR_4 : VAR_1,
        VAR_8);
 FUNC_0(VAR_9, VAR_6->port ? VAR_5 :
        VAR_2, VAR_7);
}
