
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nge_softc {int nge_flags; int nge_dev; } ;
typedef int device_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct nge_softc*,int) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 struct nge_softc* FUNC_1 (int ) ;
 int FUNC_2 (int ,char*,int) ;
 int FUNC_3 (int ,int *,int,int) ;
 int VAR_14 ;

__attribute__((used)) static int
FUNC_4(device_t VAR_15, int VAR_16, int VAR_17)
{
 struct nge_softc *VAR_18;
 int VAR_19;

 VAR_18 = FUNC_1(VAR_15);
 if ((VAR_18->nge_flags & VAR_5) != 0) {

  if (VAR_16 != 0)
   return (0);
  switch (VAR_17) {
  case 132:
   VAR_17 = VAR_11;
   break;
  case 131:

   VAR_19 = VAR_1 | VAR_2 | VAR_3;
   VAR_17 = FUNC_0(VAR_18, VAR_12);
   if ((VAR_17 & VAR_6) != 0)
    VAR_19 |= VAR_0;
   if ((VAR_17 & VAR_7) != 0)
    VAR_19 |= VAR_4;
   return (VAR_19);
  case 135:
   VAR_17 = VAR_8;
   break;
  case 133:
   VAR_17 = VAR_10;
   break;
  case 134:
   VAR_17 = VAR_9;
   break;
  case 130:
   VAR_17 = VAR_13;
   break;
  case 129:
  case 128:
   return (0);
  default:
   FUNC_2(VAR_18->nge_dev,
       "bad phy register read : %d\n", VAR_17);
   return (0);
  }
  return (FUNC_0(VAR_18, VAR_17));
 }

 return (FUNC_3(VAR_15, &VAR_14, VAR_16, VAR_17));
}
