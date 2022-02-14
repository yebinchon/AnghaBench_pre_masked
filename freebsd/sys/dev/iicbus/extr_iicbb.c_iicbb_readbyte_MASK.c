
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned char u_char ;
struct iicbb_softc {int dummy; } ;
typedef int device_t ;


 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (struct iicbb_softc*,int ,int,int) ;
 struct iicbb_softc* FUNC_3 (int ) ;
 int FUNC_4 (int ,int) ;
 int FUNC_5 (int ,int) ;
 int FUNC_6 (char*,int,char) ;

__attribute__((used)) static u_char
FUNC_7(device_t VAR_0, int VAR_1, int VAR_2)
{
 struct iicbb_softc *VAR_3 = FUNC_3(VAR_0);
 int VAR_4;
 unsigned char VAR_5=0;

 FUNC_2(VAR_3,VAR_0,0,1);
 for (VAR_4=7; VAR_4>=0; VAR_4--)
 {
  FUNC_2(VAR_3,VAR_0,1,1);
  if (FUNC_1(VAR_0))
   VAR_5 |= (1<<VAR_4);
  FUNC_2(VAR_3,VAR_0,0,1);
 }
 if (VAR_1) {
  FUNC_4(VAR_0, VAR_2);
 } else {
  FUNC_5(VAR_0, VAR_2);
 }
 FUNC_0(FUNC_6("r%02x%c ",(int)VAR_5,VAR_1?'-':'+'));
 return (VAR_5);
}
