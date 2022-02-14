
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u_int8_t ;
struct TYPE_2__ {char* dv_xname; } ;
struct tpm_softc {TYPE_1__ sc_dev; int sc_bahm; int sc_batm; } ;
struct timeval {scalar_t__ tv_usec; int tv_sec; } ;


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
 int FUNC_0 (int ,int ,int) ;
 int FUNC_1 (int ,int ,int,int ) ;
 int FUNC_2 (char*,char*,int,int ) ;
 int FUNC_3 (struct tpm_softc*,int,char*,int) ;
 int FUNC_4 (struct timeval*) ;

int
FUNC_5(struct tpm_softc *VAR_11, int VAR_12, int VAR_13)
{
 struct timeval VAR_14;
 u_int8_t VAR_15;
 int VAR_16;

 if (VAR_13 || VAR_12 == VAR_10)
  FUNC_1(VAR_11->sc_batm, VAR_11->sc_bahm, 1, VAR_4);
 else {
  VAR_14.tv_sec = VAR_9;
  VAR_14.tv_usec = 0;
  VAR_16 = FUNC_4(&VAR_14) / VAR_8;
  while(((VAR_15 = FUNC_0(VAR_11->sc_batm, VAR_11->sc_bahm, 1)) &
      VAR_6) && VAR_16--) {
   VAR_13 = FUNC_3(VAR_11, VAR_3 | VAR_2, "legacy_tpm_end",
       VAR_8);
   if (VAR_13 && VAR_13 != VAR_1)
    return VAR_13;
  }




  if (VAR_15 & VAR_6)
   return VAR_0;

  if (VAR_15 & VAR_7)
   return VAR_0;
 }

 return VAR_13;
}
