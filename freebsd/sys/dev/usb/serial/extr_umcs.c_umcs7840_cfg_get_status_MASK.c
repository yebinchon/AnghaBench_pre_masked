
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct umcs7840_softc {int dummy; } ;
struct ucom_softc {int sc_portno; struct umcs7840_softc* sc_parent; } ;


 int FUNC_0 (char*,int,int,int) ;
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
 int FUNC_1 (struct umcs7840_softc*,int,int ,int*) ;

__attribute__((used)) static void
FUNC_2(struct ucom_softc *VAR_10, uint8_t *VAR_11, uint8_t *VAR_12)
{
 struct umcs7840_softc *VAR_13 = VAR_10->sc_parent;
 uint8_t VAR_14 = VAR_10->sc_portno;
 uint8_t VAR_15 = 0;





 FUNC_1(VAR_13, VAR_14, VAR_4, VAR_11);
 FUNC_1(VAR_13, VAR_14, VAR_5, &VAR_15);

 if (VAR_15 & VAR_0)
  *VAR_12 |= VAR_6;

 if (VAR_15 & VAR_1)
  *VAR_12 |= VAR_7;

 if (VAR_15 & VAR_3)
  *VAR_12 |= VAR_9;

 if (VAR_15 & VAR_2)
  *VAR_12 |= VAR_8;

 FUNC_0("Port %d status: LSR=%02x MSR=%02x\n", VAR_10->sc_portno, *VAR_11, *VAR_12);
}
