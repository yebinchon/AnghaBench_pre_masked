
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_char ;
struct amdsmb_softc {int dummy; } ;
typedef int device_t ;


 int FUNC_0 (int ) ;
 int FUNC_1 (struct amdsmb_softc*) ;
 int FUNC_2 (struct amdsmb_softc*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_3 (struct amdsmb_softc*,int ,int) ;
 int FUNC_4 (struct amdsmb_softc*) ;
 scalar_t__ FUNC_5 (int ) ;
 int FUNC_6 (char*,int,char,int) ;

__attribute__((used)) static int
FUNC_7(device_t VAR_5, u_char VAR_6, char VAR_7)
{
 struct amdsmb_softc *VAR_8 = (struct amdsmb_softc *)FUNC_5(VAR_5);
 int VAR_9;

 FUNC_1(VAR_8);
 FUNC_3(VAR_8, VAR_1, VAR_7);
 FUNC_3(VAR_8, VAR_0, VAR_6);
 FUNC_3(VAR_8, VAR_2, VAR_4 | VAR_3);

 VAR_9 = FUNC_4(VAR_8);

 FUNC_0(FUNC_6("amdsmb: SENDB to 0x%x, byte=0x%x, error=0x%x\n",
    VAR_6, VAR_7, VAR_9));
 FUNC_2(VAR_8);

 return (VAR_9);
}
