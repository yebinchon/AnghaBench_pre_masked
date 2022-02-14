
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
typedef int uint16_t ;
struct msk_softc {int dummy; } ;
struct msk_if_softc {int msk_port; struct msk_softc* msk_softc; } ;


 int FUNC_0 (struct msk_softc*,int ,int ) ;
 int FUNC_1 (struct msk_softc*,int ,int ,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (struct msk_if_softc*) ;
 int FUNC_3 (int ,int) ;

__attribute__((used)) static void
FUNC_4(struct msk_if_softc *VAR_4)
{
 struct msk_softc *VAR_5;
 uint32_t VAR_6;
 uint16_t VAR_7;
 int VAR_8;

 FUNC_2(VAR_4);

 VAR_5 = VAR_4->msk_softc;

 VAR_7 = FUNC_0(VAR_5, VAR_4->msk_port, VAR_1);
 FUNC_1(VAR_5, VAR_4->msk_port, VAR_1, VAR_7 | VAR_0);

 for (VAR_8 = VAR_2; VAR_8 <= VAR_3; VAR_8 += sizeof(uint32_t))
  VAR_6 = FUNC_3(VAR_4->msk_port, VAR_8);

 VAR_7 &= ~VAR_0;
 FUNC_1(VAR_5, VAR_4->msk_port, VAR_1, VAR_7);
}
