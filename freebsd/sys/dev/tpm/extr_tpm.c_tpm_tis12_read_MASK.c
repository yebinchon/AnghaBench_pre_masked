
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int8_t ;
struct tpm_softc {int sc_bh; int sc_bt; int sc_read; } ;


 int FUNC_0 (int,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int ,int ,int ) ;
 int FUNC_2 (char*,size_t,...) ;
 int FUNC_3 (struct tpm_softc*) ;
 int FUNC_4 (struct tpm_softc*,int,int ,int ) ;

int
FUNC_5(struct tpm_softc *VAR_5, void *VAR_6, int VAR_7, size_t *VAR_8,
    int VAR_9)
{
 u_int8_t *VAR_10 = VAR_6;
 size_t VAR_11;
 int VAR_12, VAR_13, VAR_14;




 VAR_11 = 0;
 while (VAR_7 > 0) {
  if ((VAR_12 = FUNC_4(VAR_5, VAR_3 | VAR_4,
      VAR_2, VAR_5->sc_read)))
   return VAR_12;

  VAR_14 = FUNC_3(VAR_5);
  VAR_13 = FUNC_0(VAR_7, VAR_14);



  for (; VAR_13--; VAR_7--) {
   *VAR_10++ = FUNC_1(VAR_5->sc_bt, VAR_5->sc_bh, VAR_0);
   VAR_11++;
  }

  if ((VAR_9 & VAR_1) == 0 && VAR_11 >= 6)
   break;
 }




 if (VAR_8)
  *VAR_8 = VAR_11;

 return 0;
}
