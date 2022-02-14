
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_char ;
struct iicbb_softc {int dummy; } ;
typedef int device_t ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct iicbb_softc*,int ,int,int) ;
 int VAR_0 ;
 struct iicbb_softc* FUNC_3 (int ) ;
 int FUNC_4 (int ,int) ;
 int FUNC_5 (int ,int ,int) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (char*) ;

__attribute__((used)) static int
FUNC_8(device_t VAR_1, u_char VAR_2, int VAR_3)
{
 struct iicbb_softc *VAR_4 = FUNC_3(VAR_1);
 int VAR_5;

 FUNC_0(FUNC_7("<"));

 FUNC_2(VAR_4,VAR_1,1,1);


 if (!FUNC_1(VAR_1))
  return (VAR_0);

 FUNC_2(VAR_4,VAR_1,1,0);
 FUNC_2(VAR_4,VAR_1,0,0);


 FUNC_5(VAR_1, VAR_2, VAR_3);


 VAR_5 = FUNC_4(VAR_1, VAR_3);
 if (VAR_5 == 0)
  return (0);

 FUNC_6(VAR_1);
 return (VAR_5);
}
