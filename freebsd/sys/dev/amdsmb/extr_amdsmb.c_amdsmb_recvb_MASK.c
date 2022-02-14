
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
 int VAR_5 ;
 int FUNC_3 (struct amdsmb_softc*,int ,char*) ;
 int FUNC_4 (struct amdsmb_softc*,int ,int) ;
 int FUNC_5 (struct amdsmb_softc*) ;
 scalar_t__ FUNC_6 (int ) ;
 int FUNC_7 (char*,int,char,int) ;

__attribute__((used)) static int
FUNC_8(device_t VAR_6, u_char VAR_7, char *VAR_8)
{
 struct amdsmb_softc *VAR_9 = (struct amdsmb_softc *)FUNC_6(VAR_6);
 int VAR_10;

 FUNC_1(VAR_9);
 FUNC_4(VAR_9, VAR_0, VAR_7);
 FUNC_4(VAR_9, VAR_3, VAR_5 | VAR_4);

 if ((VAR_10 = FUNC_5(VAR_9)) == VAR_2)
  FUNC_3(VAR_9, VAR_1, VAR_8);

 FUNC_0(FUNC_7("amdsmb: RECVB from 0x%x, byte=0x%x, error=0x%x\n",
     VAR_7, *VAR_8, VAR_10));
 FUNC_2(VAR_9);

 return (VAR_10);
}
