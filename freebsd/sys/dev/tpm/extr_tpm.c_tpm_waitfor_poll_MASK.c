
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int8_t ;
struct tpm_softc {int sc_stat; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*,int) ;
 int FUNC_1 (struct tpm_softc*) ;
 int FUNC_2 (void*,int,char*,int) ;

int
FUNC_3(struct tpm_softc *VAR_3, u_int8_t VAR_4, int VAR_5, void *VAR_6)
{
 int VAR_7;





 while (((VAR_3->sc_stat = FUNC_1(VAR_3)) & VAR_4) != VAR_4 && VAR_5--) {
  VAR_7 = FUNC_2(VAR_6, VAR_2 | VAR_1, "tpm_poll", 1);
  if (VAR_7 && VAR_7 != VAR_0) {



   return VAR_7;
  }
 }

 return 0;
}
