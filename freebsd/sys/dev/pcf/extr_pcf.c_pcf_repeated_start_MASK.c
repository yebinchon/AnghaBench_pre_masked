
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u_char ;
struct pcf_softc {int dummy; } ;
typedef int device_t ;


 int VAR_0 ;
 struct pcf_softc* FUNC_0 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (struct pcf_softc*) ;
 int FUNC_2 (struct pcf_softc*) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_3 (int ,char*,unsigned int) ;
 scalar_t__ FUNC_4 (struct pcf_softc*,int) ;
 int FUNC_5 (struct pcf_softc*,scalar_t__) ;
 int FUNC_6 (struct pcf_softc*,int) ;
 int FUNC_7 (struct pcf_softc*) ;
 int FUNC_8 (struct pcf_softc*) ;
 int FUNC_9 (char*) ;

int
FUNC_10(device_t VAR_5, u_char VAR_6, int VAR_7)
{
 struct pcf_softc *VAR_8 = FUNC_0(VAR_5);
 int VAR_9 = 0;

 FUNC_1(VAR_8);





 FUNC_6(VAR_8, VAR_1|VAR_3|VAR_4|VAR_0);



 FUNC_5(VAR_8, VAR_6);


 if ((VAR_9 = FUNC_8(VAR_8)))
  goto error;


 if (FUNC_4(VAR_8, VAR_7)) {
  VAR_9 = VAR_2;



  goto error;
 }

 FUNC_2(VAR_8);
 return (0);

error:
 FUNC_7(VAR_8);
 FUNC_2(VAR_8);
 return (VAR_9);
}
