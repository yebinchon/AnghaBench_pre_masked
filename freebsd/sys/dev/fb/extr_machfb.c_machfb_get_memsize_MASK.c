
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct machfb_softc {int sc_flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,int) ;
 int FUNC_1 (struct machfb_softc*,int ) ;

__attribute__((used)) static int
FUNC_2(struct machfb_softc *VAR_2)
{
 int VAR_3, VAR_4;
 const int VAR_5[] = {
  512, 1024, 2048, 4096, 6144, 8192, 12288, 16384
 };

 VAR_3 = FUNC_1(VAR_2, VAR_1);



 if (VAR_2->sc_flags & VAR_0) {
  VAR_3 &= 0x0000000f;
  if (VAR_3 < 8)
   VAR_4 = (VAR_3 + 1) * 512;
  else if (VAR_3 < 12)
   VAR_4 = (VAR_3 - 3) * 1024;
  else
   VAR_4 = (VAR_3 - 7) * 2048;
 } else
  VAR_4 = VAR_5[VAR_3 & 0x07];

 return (VAR_4);
}
