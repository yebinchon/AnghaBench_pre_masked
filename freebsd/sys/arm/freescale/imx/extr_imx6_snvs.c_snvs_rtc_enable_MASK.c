
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct snvs_softc {int lpcr; } ;


 int VAR_0 ;
 int FUNC_0 (struct snvs_softc*,int ) ;
 int VAR_1 ;
 int FUNC_1 (struct snvs_softc*,int ,int) ;

__attribute__((used)) static void
FUNC_2(struct snvs_softc *VAR_2, bool VAR_3)
{
 uint32_t VAR_4;

 if (VAR_3)
  VAR_2->lpcr |= VAR_0;
 else
  VAR_2->lpcr &= ~VAR_0;
 FUNC_1(VAR_2, VAR_1, VAR_2->lpcr);


 VAR_4 = VAR_2->lpcr & VAR_0;
 while ((FUNC_0(VAR_2, VAR_1) & VAR_0) != VAR_4)
  continue;
}
