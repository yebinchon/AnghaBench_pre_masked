
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hn_softc {scalar_t__ hn_nvs_ver; int hn_caps; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (struct hn_softc*,int) ;
 int FUNC_1 (struct hn_softc*) ;
 int FUNC_2 (struct hn_softc*) ;
 int FUNC_3 (struct hn_softc*) ;
 int FUNC_4 (struct hn_softc*) ;
 int FUNC_5 (struct hn_softc*) ;
 int VAR_2 ;

int
FUNC_6(struct hn_softc *VAR_3, int VAR_4)
{
 int VAR_5;

 if (VAR_2 >= 10) {

  VAR_3->hn_caps |= VAR_0;
 }




 VAR_5 = FUNC_4(VAR_3);
 if (VAR_5)
  return (VAR_5);

 if (VAR_3->hn_nvs_ver >= VAR_1) {



  VAR_5 = FUNC_0(VAR_3, VAR_4);
  if (VAR_5)
   return (VAR_5);
 }




 VAR_5 = FUNC_5(VAR_3);
 if (VAR_5)
  return (VAR_5);




 VAR_5 = FUNC_2(VAR_3);
 if (VAR_5)
  return (VAR_5);




 VAR_5 = FUNC_1(VAR_3);
 if (VAR_5) {
  FUNC_3(VAR_3);
  return (VAR_5);
 }
 return (0);
}
