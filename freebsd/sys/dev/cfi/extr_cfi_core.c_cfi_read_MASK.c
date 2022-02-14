
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
typedef int uint16_t ;
typedef int u_int ;
struct cfi_softc {int sc_width; int sc_handle; int sc_tag; } ;


 int FUNC_0 (int ,int ,int) ;
 int FUNC_1 (int ,int ,int) ;
 int FUNC_2 (int ,int ,int) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;

uint32_t
FUNC_5(struct cfi_softc *VAR_0, u_int VAR_1)
{
 uint32_t VAR_2;
 uint16_t VAR_3;

 VAR_1 &= ~(VAR_0->sc_width - 1);
 switch (VAR_0->sc_width) {
 case 1:
  VAR_2 = FUNC_0(VAR_0->sc_tag, VAR_0->sc_handle, VAR_1);
  break;
 case 2:
  VAR_3 = FUNC_1(VAR_0->sc_tag, VAR_0->sc_handle, VAR_1);



  VAR_2 = FUNC_3(VAR_3);

  break;
 case 4:
  VAR_2 = FUNC_2(VAR_0->sc_tag, VAR_0->sc_handle, VAR_1);

  VAR_2 = FUNC_4(VAR_2);

  break;
 default:
  VAR_2 = ~0;
  break;
 }
 return (VAR_2);
}
