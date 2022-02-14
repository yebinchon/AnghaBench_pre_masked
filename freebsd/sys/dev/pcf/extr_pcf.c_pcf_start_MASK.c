
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u_char ;
struct pcf_softc {int pcf_started; } ;
typedef int device_t ;


 int VAR_0 ;
 struct pcf_softc* FUNC_0 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (struct pcf_softc*) ;
 int FUNC_2 (struct pcf_softc*) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_3 (int ,char*,unsigned int) ;
 int VAR_6 ;
 int FUNC_4 (struct pcf_softc*) ;
 scalar_t__ FUNC_5 (struct pcf_softc*,int) ;
 int FUNC_6 (struct pcf_softc*,scalar_t__) ;
 int FUNC_7 (struct pcf_softc*,int) ;
 int FUNC_8 (struct pcf_softc*) ;
 int FUNC_9 (struct pcf_softc*) ;
 int FUNC_10 (char*) ;

int
FUNC_11(device_t VAR_7, u_char VAR_8, int VAR_9)
{
 struct pcf_softc *VAR_10 = FUNC_0(VAR_7);
 int VAR_11 = 0;

 FUNC_1(VAR_10);



 if ((FUNC_4(VAR_10) & VAR_6) == 0) {



  FUNC_2(VAR_10);
  return (VAR_2);
 }



 FUNC_6(VAR_10, VAR_8);


 FUNC_7(VAR_10, VAR_4|VAR_1|VAR_5|VAR_0);

 VAR_10->pcf_started = 1;


 if ((VAR_11 = FUNC_9(VAR_10)))
  goto error;


 if (FUNC_5(VAR_10, VAR_9)) {
  VAR_11 = VAR_3;



  goto error;
 }

 FUNC_2(VAR_10);
 return (0);

error:
 FUNC_8(VAR_10);
 FUNC_2(VAR_10);
 return (VAR_11);
}
