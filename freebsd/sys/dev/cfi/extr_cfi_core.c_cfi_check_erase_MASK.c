
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
typedef int u_int ;
struct cfi_softc {scalar_t__ sc_width; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct cfi_softc*,int) ;

__attribute__((used)) static bool
FUNC_1(struct cfi_softc *VAR_2, u_int VAR_3, u_int VAR_4)
{
 bool VAR_5;
 int VAR_6;
 uint32_t VAR_7;

 VAR_5 = VAR_0;
 for (VAR_6 = 0; VAR_6 < VAR_4; VAR_6 += VAR_2->sc_width) {
  VAR_7 = FUNC_0(VAR_2, VAR_3 + VAR_6);
  switch (VAR_2->sc_width) {
  case 1:
   if (VAR_7 != 0xff)
    goto out;
   continue;
  case 2:
   if (VAR_7 != 0xffff)
    goto out;
   continue;
  case 4:
   if (VAR_7 != 0xffffffff)
    goto out;
   continue;
  }
 }
 VAR_5 = VAR_1;

out:
 return (VAR_5);
}
