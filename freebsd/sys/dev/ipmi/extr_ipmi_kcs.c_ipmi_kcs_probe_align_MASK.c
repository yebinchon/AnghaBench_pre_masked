
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ipmi_softc {int ipmi_io_spacing; int ipmi_dev; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (struct ipmi_softc*,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_2 (int) ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_3 (struct ipmi_softc*,int ,int ) ;
 int FUNC_4 (int ,char*,int) ;
 int FUNC_5 (char*) ;

int
FUNC_6(struct ipmi_softc *VAR_8)
{
 int VAR_9, VAR_10;

 VAR_8->ipmi_io_spacing = 1;
retry:





 VAR_10 = FUNC_1(VAR_8, VAR_1);
 while (VAR_10 & VAR_4) {
  FUNC_0(100);
  VAR_10 = FUNC_1(VAR_8, VAR_1);
 }

 FUNC_3(VAR_8, VAR_1, VAR_0);


 VAR_10 = FUNC_1(VAR_8, VAR_1);
 while (VAR_10 & VAR_4) {
  FUNC_0(100);
  VAR_10 = FUNC_1(VAR_8, VAR_1);
 }


 if (VAR_10 == 0) {



  VAR_8->ipmi_io_spacing <<= 1;
  if (VAR_8->ipmi_io_spacing > 4)
   return (0);
  goto retry;
 }







 if (VAR_10 & VAR_5)
  VAR_9 = FUNC_1(VAR_8, VAR_2);


 FUNC_3(VAR_8, VAR_2, 0);


 VAR_10 = FUNC_1(VAR_8, VAR_1);
 while (VAR_10 & VAR_4) {
  FUNC_0(100);
  VAR_10 = FUNC_1(VAR_8, VAR_1);
 }

 if (FUNC_2(VAR_10) == VAR_7) {

  while (!(VAR_10 & VAR_5)) {
   FUNC_0(100);
   VAR_10 = FUNC_1(VAR_8, VAR_1);
  }


  VAR_9 = FUNC_1(VAR_8, VAR_2);


  FUNC_3(VAR_8, VAR_2, VAR_3);


  VAR_10 = FUNC_1(VAR_8, VAR_1);
  while (VAR_10 & VAR_4) {
   FUNC_0(100);
   VAR_10 = FUNC_1(VAR_8, VAR_1);
  }
 }

 if (FUNC_2(VAR_10) == VAR_6) {

  while (!(VAR_10 & VAR_5)) {
   FUNC_0(100);
   VAR_10 = FUNC_1(VAR_8, VAR_1);
  }


  if (VAR_10 & VAR_5)
   VAR_9 = FUNC_1(VAR_8, VAR_2);
 } else
  FUNC_4(VAR_8->ipmi_dev, "KCS probe: end state %x\n",
      FUNC_2(VAR_10));

 return (1);
}
