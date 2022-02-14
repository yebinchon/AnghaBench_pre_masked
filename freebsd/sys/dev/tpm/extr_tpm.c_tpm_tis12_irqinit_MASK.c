
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u_int32_t ;
struct tpm_softc {int sc_vector; int sc_capabilities; int sc_bh; int sc_bt; } ;
struct TYPE_2__ {int flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_0 (int ,int ,int ) ;
 int FUNC_1 (int ,int ,int ,int) ;
 int FUNC_2 (int ,int ,int ,int) ;
 TYPE_1__* VAR_11 ;

int
FUNC_3(struct tpm_softc *VAR_12, int VAR_13, int VAR_14)
{
 u_int32_t VAR_15;

 if ((VAR_13 == VAR_0) || (VAR_11[VAR_14].flags & VAR_1)) {
  VAR_12->sc_vector = VAR_0;
  return 0;
 }


 FUNC_2(VAR_12->sc_bt, VAR_12->sc_bh, VAR_3,
     FUNC_0(VAR_12->sc_bt, VAR_12->sc_bh, VAR_3) &
     ~VAR_2);
 FUNC_2(VAR_12->sc_bt, VAR_12->sc_bh, VAR_9,
     FUNC_0(VAR_12->sc_bt, VAR_12->sc_bh, VAR_9));


 FUNC_1(VAR_12->sc_bt, VAR_12->sc_bh, VAR_10, VAR_13);
 VAR_12->sc_vector = VAR_13;


 if (VAR_12->sc_capabilities & VAR_4)
  VAR_15 = VAR_6;
 else if (VAR_12->sc_capabilities & VAR_5)
  VAR_15 = VAR_7;
 else
  VAR_15 = VAR_8;
 FUNC_2(VAR_12->sc_bt, VAR_12->sc_bh, VAR_3, VAR_15);

 return 0;
}
