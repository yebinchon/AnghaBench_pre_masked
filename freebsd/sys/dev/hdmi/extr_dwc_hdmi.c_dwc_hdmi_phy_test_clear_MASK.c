
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned char uint8_t ;
struct dwc_hdmi_softc {int dummy; } ;


 int VAR_0 ;
 unsigned char VAR_1 ;
 unsigned char VAR_2 ;
 unsigned char FUNC_0 (struct dwc_hdmi_softc*,int ) ;
 int FUNC_1 (struct dwc_hdmi_softc*,int ,unsigned char) ;

__attribute__((used)) static inline void
FUNC_2(struct dwc_hdmi_softc *VAR_3, unsigned char VAR_4)
{
 uint8_t VAR_5;

 VAR_5 = FUNC_0(VAR_3, VAR_0);
 VAR_5 &= ~VAR_1;
 VAR_5 |= (VAR_4 << VAR_2) &
  VAR_1;
 FUNC_1(VAR_3, VAR_0, VAR_5);
}
