
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nge_softc {int nge_flags; int nge_dev; } ;
typedef int device_t ;


 int FUNC_0 (struct nge_softc*,int,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 struct nge_softc* FUNC_1 (int ) ;
 int FUNC_2 (int ,char*,int) ;
 int FUNC_3 (int ,int *,int,int,int) ;
 int VAR_6 ;

__attribute__((used)) static int
FUNC_4(device_t VAR_7, int VAR_8, int VAR_9, int VAR_10)
{
 struct nge_softc *VAR_11;

 VAR_11 = FUNC_1(VAR_7);
 if ((VAR_11->nge_flags & VAR_0) != 0) {

  if (VAR_8 != 0)
   return (0);
  switch (VAR_9) {
  case 132:
   VAR_9 = VAR_4;
   break;
  case 131:
   return (0);
  case 135:
   VAR_9 = VAR_1;
   break;
  case 133:
   VAR_9 = VAR_3;
   break;
  case 134:
   VAR_9 = VAR_2;
   break;
  case 130:
   VAR_9 = VAR_5;
   break;
  case 129:
  case 128:
   return (0);
  default:
   FUNC_2(VAR_11->nge_dev,
       "bad phy register write : %d\n", VAR_9);
   return (0);
  }
  FUNC_0(VAR_11, VAR_9, VAR_10);
  return (0);
 }

 FUNC_3(VAR_7, &VAR_6, VAR_8, VAR_9, VAR_10);

 return (0);
}
