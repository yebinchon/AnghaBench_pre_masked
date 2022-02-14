
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_char ;
struct pcf_softc {int pcf_addr; int pcf_slave_mode; } ;
typedef int device_t ;


 int VAR_0 ;
 struct pcf_softc* FUNC_0 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;




 int VAR_4 ;
 int FUNC_1 (struct pcf_softc*) ;
 int FUNC_2 (struct pcf_softc*) ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_3 (struct pcf_softc*,int) ;
 int FUNC_4 (struct pcf_softc*,int) ;

int
FUNC_5(device_t VAR_7, u_char VAR_8, u_char VAR_9, u_char *VAR_10)
{
 struct pcf_softc *VAR_11 = FUNC_0(VAR_7);

 FUNC_1(VAR_11);
 if (VAR_10)
  *VAR_10 = VAR_11->pcf_addr;


 if (!VAR_9)
  VAR_11->pcf_addr = VAR_4;
 else
  VAR_11->pcf_addr = VAR_9;

 FUNC_4(VAR_11, VAR_5);


 FUNC_3(VAR_11, VAR_11->pcf_addr >> 1);


 FUNC_4(VAR_11, VAR_5|VAR_2);


 switch (VAR_8) {
 case 129:
  FUNC_3(VAR_11, 0x1b);
  break;

 case 131:
  FUNC_3(VAR_11, 0x19);
  break;

 case 128:
 case 130:
 default:
  FUNC_3(VAR_11, 0x18);
  break;
 }


 FUNC_4(VAR_11, VAR_5|VAR_3|VAR_1|VAR_0);

 VAR_11->pcf_slave_mode = VAR_6;
 FUNC_2(VAR_11);

 return (0);
}
