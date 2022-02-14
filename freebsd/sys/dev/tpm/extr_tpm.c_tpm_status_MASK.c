
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int8_t ;
struct tpm_softc {int sc_bh; int sc_bt; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ,int ) ;

u_int8_t
FUNC_1(struct tpm_softc *VAR_2)
{
 u_int8_t VAR_3;

 VAR_3 = FUNC_0(VAR_2->sc_bt, VAR_2->sc_bh, VAR_0) &
     VAR_1;

 return VAR_3;
}
