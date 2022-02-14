
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint32_t ;
struct nfe_softc {int nfe_flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct nfe_softc*,int ) ;

__attribute__((used)) static void
FUNC_1(struct nfe_softc *VAR_3, uint8_t *VAR_4)
{
 uint32_t VAR_5;

 if ((VAR_3->nfe_flags & VAR_0) == 0) {
  VAR_5 = FUNC_0(VAR_3, VAR_2);
  VAR_4[0] = (VAR_5 >> 8) & 0xff;
  VAR_4[1] = (VAR_5 & 0xff);

  VAR_5 = FUNC_0(VAR_3, VAR_1);
  VAR_4[2] = (VAR_5 >> 24) & 0xff;
  VAR_4[3] = (VAR_5 >> 16) & 0xff;
  VAR_4[4] = (VAR_5 >> 8) & 0xff;
  VAR_4[5] = (VAR_5 & 0xff);
 } else {
  VAR_5 = FUNC_0(VAR_3, VAR_2);
  VAR_4[5] = (VAR_5 >> 8) & 0xff;
  VAR_4[4] = (VAR_5 & 0xff);

  VAR_5 = FUNC_0(VAR_3, VAR_1);
  VAR_4[3] = (VAR_5 >> 24) & 0xff;
  VAR_4[2] = (VAR_5 >> 16) & 0xff;
  VAR_4[1] = (VAR_5 >> 8) & 0xff;
  VAR_4[0] = (VAR_5 & 0xff);
 }
}
