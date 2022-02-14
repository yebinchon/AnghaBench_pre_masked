
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct bytgpio_softc {char* sc_bank_prefix; } ;
typedef int device_t ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct bytgpio_softc*,int ) ;
 struct bytgpio_softc* FUNC_1 (int ) ;
 int FUNC_2 (char*,int,char*,char*,int ) ;

__attribute__((used)) static int
FUNC_3(device_t VAR_2, uint32_t VAR_3, char *VAR_4)
{
 struct bytgpio_softc *VAR_5;

 VAR_5 = FUNC_1(VAR_2);
 if (FUNC_0(VAR_5, VAR_3) != 0)
  return (VAR_0);


 FUNC_2(VAR_4, VAR_1, "%s%u", VAR_5->sc_bank_prefix, VAR_3);
 VAR_4[VAR_1 - 1] = '\0';

 return (0);
}
