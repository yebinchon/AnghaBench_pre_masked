
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int8_t ;
struct tpm_softc {int sc_bh; int sc_bt; int sc_bahm; int sc_batm; } ;
typedef int id ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ,int,int,int ,int *) ;
 int FUNC_1 (char*,...) ;
 int VAR_1 ;
 char FUNC_2 (int ,int ,scalar_t__) ;

int
FUNC_3(struct tpm_softc *VAR_2, int VAR_3, const char *VAR_4)
{
 char VAR_5[8];
 u_int8_t VAR_6, VAR_7;
 int VAR_8;

 if ((VAR_8 = FUNC_0(VAR_2->sc_batm, VAR_1, 2, 0, &VAR_2->sc_bahm))) {
  FUNC_1(": cannot map tpm registers (%d)\n", VAR_8);
  VAR_1 = 0;
  return 1;
 }

 for (VAR_8 = sizeof(VAR_5); VAR_8--; )
  VAR_5[VAR_8] = FUNC_2(VAR_2->sc_bt, VAR_2->sc_bh, VAR_0 + VAR_8);

 FUNC_1(": %.4s %d.%d @0x%x\n", &VAR_5[4], VAR_5[0], VAR_5[1], VAR_1);
 VAR_7 = VAR_1 & 0xff;
 VAR_6 = VAR_1 >> 16;
 VAR_1 = 0;

 return 0;
}
