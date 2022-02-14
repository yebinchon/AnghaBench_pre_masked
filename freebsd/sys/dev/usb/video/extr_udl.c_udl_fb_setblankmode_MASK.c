
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct udl_softc {scalar_t__ sc_fb_addr; } ;


 int VAR_0 ;




 int FUNC_0 (void*,int ,int const) ;
 int FUNC_1 (struct udl_softc*) ;
 int FUNC_2 (struct udl_softc*,int,int ) ;

__attribute__((used)) static int
FUNC_3(void *VAR_1, int VAR_2)
{
 struct udl_softc *VAR_3 = VAR_1;

 switch (VAR_2) {
 case 130:
  FUNC_2(VAR_3, 1, VAR_0);
  break;
 case 131:
  FUNC_2(VAR_3, 1, VAR_0);
  if (VAR_3->sc_fb_addr != 0) {
   const uint32_t VAR_4 = FUNC_1(VAR_3);

   FUNC_0((void *)VAR_3->sc_fb_addr, 0, VAR_4);
  }
  break;
 case 129:
 case 128:
  FUNC_2(VAR_3, 0, VAR_0);
  break;
 }
 return (0);
}
