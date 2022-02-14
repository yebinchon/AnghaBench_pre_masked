
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
 int FUNC_0 (int ,int ,int) ;
 int FUNC_1 (char*,char*,int,int ) ;
 int FUNC_2 (struct tpm_softc*,int,char*,int) ;
 int FUNC_3 (struct timeval*) ;

int
FUNC_4(struct tpm_softc *VAR_10, int VAR_11)
{
 struct timeval VAR_12;
 u_int8_t VAR_13, VAR_14;
 int VAR_15, VAR_16;

 VAR_13 = VAR_11 == VAR_9 ? VAR_6 : 0;
 VAR_12.tv_sec = VAR_8;
 VAR_12.tv_usec = 0;
 VAR_15 = FUNC_3(&VAR_12) / VAR_7;
 while (((VAR_14 = FUNC_0(VAR_10->sc_batm, VAR_10->sc_bahm, 1)) &
     (VAR_5|VAR_13)) != VAR_13 && VAR_15--) {
  VAR_16 = FUNC_2(VAR_10, VAR_3 | VAR_2, "legacy_tpm_start",
      VAR_7);
  if (VAR_16 && VAR_16 != VAR_1)
   return VAR_16;
 }




 if ((VAR_14 & (VAR_5|VAR_13)) != VAR_13)
  return VAR_0;

 return 0;
}
