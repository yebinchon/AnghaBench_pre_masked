
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
 int FUNC_3 (int ,char*,int,int,...) ;
 scalar_t__ FUNC_4 (struct pcf_softc*,int) ;
 int FUNC_5 (struct pcf_softc*,int ) ;
 int FUNC_6 (struct pcf_softc*) ;

int
FUNC_7(device_t VAR_1, const char *VAR_2, int VAR_3, int *VAR_4, int VAR_5 )
{
 struct pcf_softc *VAR_6 = FUNC_0(VAR_1);
 int VAR_7, VAR_8 = 0;






 VAR_7 = 0;
 FUNC_1(VAR_6);
 while (VAR_3) {

  FUNC_5(VAR_6, *VAR_2++);


  if ((VAR_8 = FUNC_6(VAR_6)))
   goto error;


  if (FUNC_4(VAR_6, VAR_5)) {
   VAR_8 = VAR_0;
   goto error;
  }

  VAR_3 --;
  VAR_7 ++;
 }

error:
 *VAR_4 = VAR_7;
 FUNC_2(VAR_6);





 return (VAR_8);
}
