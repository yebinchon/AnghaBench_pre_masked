
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iicbb_softc {int dummy; } ;
typedef int device_t ;


 int FUNC_0 (int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (struct iicbb_softc*,int ,int,int) ;
 int VAR_0 ;
 int VAR_1 ;
 struct iicbb_softc* FUNC_5 (int ) ;
 int FUNC_6 (char*,char) ;

__attribute__((used)) static int
FUNC_7(device_t VAR_2, int VAR_3)
{
 struct iicbb_softc *VAR_4 = FUNC_5(VAR_2);
 int VAR_5;
 int VAR_6 = 0;

 FUNC_4(VAR_4,VAR_2,0,1);
 FUNC_4(VAR_4,VAR_2,1,1);


 if (!FUNC_2(VAR_2))
  return (VAR_1);

 do {
  VAR_5 = FUNC_3(VAR_2);
  if (!VAR_5)
   break;
  FUNC_0(1);
  VAR_6++;
 } while (VAR_6 < VAR_3);

 FUNC_4(VAR_4,VAR_2,0,1);
 FUNC_1(FUNC_6("%c ",VAR_5?'-':'+'));

 return (VAR_5 ? VAR_0 : 0);
}
