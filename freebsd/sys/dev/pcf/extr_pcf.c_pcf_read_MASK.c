
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pcf_softc {int dummy; } ;
typedef int device_t ;


 struct pcf_softc* FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (struct pcf_softc*) ;
 int FUNC_2 (struct pcf_softc*) ;
 int FUNC_3 (int ,char*,int,...) ;
 int FUNC_4 (struct pcf_softc*) ;
 int FUNC_5 (struct pcf_softc*) ;
 int FUNC_6 (struct pcf_softc*,int ) ;
 int FUNC_7 (struct pcf_softc*) ;
 int FUNC_8 (struct pcf_softc*) ;

int
FUNC_9(device_t VAR_1, char *VAR_2, int VAR_3, int *VAR_4, int VAR_5,
  int VAR_6 )
{
 struct pcf_softc *VAR_7 = FUNC_0(VAR_1);
 int VAR_8, VAR_9 = 0;






 FUNC_1(VAR_7);

 if (VAR_3) {
  if (VAR_3 == 1 && VAR_5)

   FUNC_6(VAR_7, VAR_0);

  FUNC_4(VAR_7);
 }

 VAR_8 = 0;
 while (VAR_3) {




  if ((VAR_9 = FUNC_8(VAR_7))) {
   FUNC_7(VAR_7);
   goto error;
  }

  if (VAR_3 == 1 && VAR_5)


   FUNC_7(VAR_7);

  else if (VAR_3 == 2 && VAR_5)

   FUNC_6(VAR_7, VAR_0);


  *VAR_2++ = FUNC_5(VAR_7);

  VAR_3 --;
  VAR_8 ++;
 }

error:
 *VAR_4 = VAR_8;
 FUNC_2(VAR_7);






 return (VAR_9);
}
