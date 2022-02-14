
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int8_t ;
struct hifn_softc {int sc_drammodel; } ;
typedef int data ;


 scalar_t__ FUNC_0 (int*,int*,int) ;
 scalar_t__ FUNC_1 (struct hifn_softc*,int ,int*) ;
 scalar_t__ FUNC_2 (struct hifn_softc*,int ,int*) ;

__attribute__((used)) static int
FUNC_3(struct hifn_softc *VAR_0)
{
 u_int8_t VAR_1[8], VAR_2[8];
 int VAR_3;

 for (VAR_3 = 0; VAR_3 < sizeof(VAR_1); VAR_3++)
  VAR_1[VAR_3] = VAR_2[VAR_3] = 0x55;
 if (FUNC_2(VAR_0, 0, VAR_1))
  return (-1);
 if (FUNC_1(VAR_0, 0, VAR_1))
  return (-1);
 if (FUNC_0(VAR_1, VAR_2, sizeof(VAR_1)) != 0) {
  VAR_0->sc_drammodel = 1;
  return (0);
 }

 for (VAR_3 = 0; VAR_3 < sizeof(VAR_1); VAR_3++)
  VAR_1[VAR_3] = VAR_2[VAR_3] = 0xaa;
 if (FUNC_2(VAR_0, 0, VAR_1))
  return (-1);
 if (FUNC_1(VAR_0, 0, VAR_1))
  return (-1);
 if (FUNC_0(VAR_1, VAR_2, sizeof(VAR_1)) != 0) {
  VAR_0->sc_drammodel = 1;
  return (0);
 }

 return (0);
}
