
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned long uint32_t ;
struct arge_softc {int dummy; } ;
 int FUNC_0 (struct arge_softc*,int ,char*,unsigned long,unsigned long) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 unsigned long* VAR_3 ;
 unsigned long FUNC_1 () ;
 int VAR_4 ;
 unsigned long* VAR_5 ;
 unsigned long* VAR_6 ;
 int FUNC_2 (unsigned long*) ;

__attribute__((used)) static int
FUNC_3(struct arge_softc *VAR_7, unsigned long VAR_8)
{
 unsigned long VAR_9, VAR_10;
 const uint32_t *VAR_11;
 int VAR_12;
 int VAR_13;





 VAR_9 = FUNC_1();





 if (VAR_9 == 0 || VAR_8 == 0)
  return (-VAR_1);




 switch (VAR_4) {
 case 136:
 case 135:
 case 134:
 case 133:
 case 132:
 case 131:
 case 130:
 case 129:
 case 128:
  VAR_11 = VAR_6;
  VAR_12 = FUNC_2(VAR_6);
  break;

 case 139:
 case 138:
 case 137:
  VAR_11 = VAR_5;
  VAR_12 = FUNC_2(VAR_5);
  break;

 default:
  VAR_11 = VAR_3;
  VAR_12 = FUNC_2(VAR_3);
 }
 for (VAR_13 = 0; VAR_13 < VAR_12; VAR_13++) {
  VAR_10 = VAR_9 / VAR_11[VAR_13];
  if (VAR_10 <= VAR_8) {
   return (VAR_13);
  }
 }

 FUNC_0(VAR_7, VAR_0,
     "No divider found; MDIO=%lu Hz; target=%lu Hz\n",
  VAR_9, VAR_8);
 return (-VAR_2);
}
