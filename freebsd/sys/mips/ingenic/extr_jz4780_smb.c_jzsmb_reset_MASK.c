
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_char ;
struct jzsmb_softc {int dummy; } ;
typedef int device_t ;


 int FUNC_0 (struct jzsmb_softc*) ;
 int FUNC_1 (struct jzsmb_softc*) ;
 struct jzsmb_softc* FUNC_2 (int ) ;
 int FUNC_3 (int ,int ) ;

__attribute__((used)) static int
FUNC_4(device_t VAR_0, u_char VAR_1, u_char VAR_2, u_char *VAR_3)
{
 struct jzsmb_softc *VAR_4;
 int VAR_5;

 VAR_4 = FUNC_2(VAR_0);

 FUNC_0(VAR_4);
 VAR_5 = FUNC_3(VAR_0, VAR_2);
 FUNC_1(VAR_4);

 return (VAR_5);
}
