
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bwn_softc {int sc_dev; } ;


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
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_0 (int ,char*,int) ;

__attribute__((used)) static int
FUNC_1(struct bwn_softc *VAR_12, int VAR_13)
{

 switch (VAR_13) {

 case 12:
  return (VAR_10);
 case 18:
  return (VAR_11);
 case 24:
  return (VAR_4);
 case 36:
  return (VAR_5);
 case 48:
  return (VAR_6);
 case 72:
  return (VAR_7);
 case 96:
  return (VAR_8);
 case 108:
  return (VAR_9);

 case 2:
  return (VAR_1);
 case 4:
  return (VAR_2);
 case 11:
  return (VAR_3);
 case 22:
  return (VAR_0);
 }

 FUNC_0(VAR_12->sc_dev, "unsupported rate %d\n", VAR_13);
 return (VAR_1);
}
