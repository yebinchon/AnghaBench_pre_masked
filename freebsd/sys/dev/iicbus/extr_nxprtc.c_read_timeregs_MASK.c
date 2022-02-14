
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint8_t ;
struct time_regs {scalar_t__ sec; } ;
struct nxprtc_softc {scalar_t__ use_timer; int secaddr; int dev; int tmcaddr; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int ,struct time_regs*,int,int ) ;
 int FUNC_1 (struct nxprtc_softc*,int ,scalar_t__*) ;

__attribute__((used)) static int
FUNC_2(struct nxprtc_softc *VAR_3, struct time_regs *VAR_4, uint8_t *VAR_5)
{
 int VAR_6;
 uint8_t VAR_7, VAR_8, VAR_9;







 do {
  if (VAR_3->use_timer) {
   if ((VAR_6 = FUNC_1(VAR_3, VAR_3->secaddr, &VAR_7)) != 0)
    break;
   if ((VAR_6 = FUNC_1(VAR_3, VAR_3->tmcaddr, &VAR_8)) != 0)
    break;
   if ((VAR_6 = FUNC_1(VAR_3, VAR_3->tmcaddr, &VAR_9)) != 0)
    break;
   if (VAR_8 != VAR_9)
    continue;
  }
  if ((VAR_6 = FUNC_0(VAR_3->dev, VAR_3->secaddr, VAR_4,
      sizeof(*VAR_4), VAR_2)) != 0)
   break;
 } while (VAR_3->use_timer && VAR_4->sec != VAR_7);
 if (!VAR_3->use_timer || VAR_8 > VAR_1)
  VAR_8 = 0;






 *VAR_5 = (VAR_1 - VAR_8 + VAR_0) % VAR_1;

 return (VAR_6);
}
