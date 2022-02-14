
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ifreq {int dummy; } ;
struct ifnet {struct adapter* if_softc; } ;
struct adapter {int media; } ;
typedef scalar_t__ caddr_t ;


 int VAR_0 ;
 int FUNC_0 (struct ifnet*,unsigned long,scalar_t__) ;
 int FUNC_1 (struct ifnet*,struct ifreq*,int *,unsigned long) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int VAR_1 ;

__attribute__((used)) static int
FUNC_4(struct ifnet *VAR_2, unsigned long VAR_3, caddr_t VAR_4)
{
 int VAR_5 = 0;
 struct adapter *VAR_6;
 struct ifreq *VAR_7 = (struct ifreq *)VAR_4;

 switch (VAR_3) {
 case 128:
 case 130:
 case 135:
 case 134:
 case 131:
  break;
 case 129:
 case 133:
 case 132:
  FUNC_2(&VAR_1);
  VAR_6 = VAR_2->if_softc;
  if (VAR_6 == ((void*)0))
   VAR_5 = VAR_0;
  else
   VAR_5 = FUNC_1(VAR_2, VAR_7, &VAR_6->media, VAR_3);
  FUNC_3(&VAR_1);
  break;
 default:
  VAR_5 = FUNC_0(VAR_2, VAR_3, VAR_4);
 }

 return (VAR_5);
}
