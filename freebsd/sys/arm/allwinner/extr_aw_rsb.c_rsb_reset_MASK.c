
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_char ;
struct rsb_softc {int dummy; } ;
typedef int device_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct rsb_softc*) ;
 int FUNC_1 (struct rsb_softc*,int ) ;
 int VAR_3 ;
 int FUNC_2 (struct rsb_softc*) ;
 int FUNC_3 (struct rsb_softc*,int ,int) ;
 int VAR_4 ;
 struct rsb_softc* FUNC_4 (int ) ;
 int FUNC_5 (int ,char*) ;

__attribute__((used)) static int
FUNC_6(device_t VAR_5, u_char VAR_6, u_char VAR_7, u_char *VAR_8)
{
 struct rsb_softc *VAR_9;
 int VAR_10;

 VAR_9 = FUNC_4(VAR_5);

 FUNC_0(VAR_9);


 FUNC_3(VAR_9, VAR_2, VAR_4);
 for (VAR_10 = VAR_3; VAR_10 > 0; VAR_10--)
  if ((FUNC_1(VAR_9, VAR_2) & VAR_4) == 0)
   break;

 FUNC_2(VAR_9);

 if (VAR_10 == 0) {
  FUNC_5(VAR_5, "soft reset timeout\n");
  return (VAR_0);
 }

 return (VAR_1);
}
