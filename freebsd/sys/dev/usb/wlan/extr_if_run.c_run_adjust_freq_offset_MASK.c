
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct run_softc {int freq; } ;


 int FUNC_0 (int,int) ;
 int FUNC_1 (struct run_softc*,int,int) ;
 int FUNC_2 (struct run_softc*,int,int*) ;

__attribute__((used)) static void
FUNC_3(struct run_softc *VAR_0)
{
 uint8_t VAR_1, VAR_2;

 FUNC_2(VAR_0, 17, &VAR_1);
 VAR_2 = VAR_1;
 VAR_1 = (VAR_1 & ~0x7f) | (VAR_0->freq & 0x7f);
 VAR_1 = FUNC_0(VAR_1, 0x5f);

 if (VAR_2 != VAR_1)
  FUNC_1(VAR_0, 0x74, (VAR_2 << 8 ) | VAR_1);
}
