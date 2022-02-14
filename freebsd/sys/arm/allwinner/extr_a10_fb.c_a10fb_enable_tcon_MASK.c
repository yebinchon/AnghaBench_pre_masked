
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct a10fb_softc {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct a10fb_softc*,int ) ;
 int FUNC_1 (struct a10fb_softc*,int ,int) ;

__attribute__((used)) static void
FUNC_2(struct a10fb_softc *VAR_5, int VAR_6)
{
 uint32_t VAR_7;


 VAR_7 = FUNC_0(VAR_5, VAR_4);
 if (VAR_6)
  VAR_7 |= VAR_0;
 else
  VAR_7 &= ~VAR_0;
 FUNC_1(VAR_5, VAR_4, VAR_7);


 VAR_7 = FUNC_0(VAR_5, VAR_3);
 if (VAR_6)
  VAR_7 &= ~(VAR_1 | VAR_2);
 else
  VAR_7 |= (VAR_1 | VAR_2);
 FUNC_1(VAR_5, VAR_3, VAR_7);
}
