
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
 int VAR_6 ;
 int FUNC_3 (struct amdsmb_softc*,int ,char*) ;
 int FUNC_4 (struct amdsmb_softc*,int ,int) ;
 int FUNC_5 (struct amdsmb_softc*) ;
 scalar_t__ FUNC_6 (int ) ;
 int FUNC_7 (char*,int,char,unsigned char,int) ;

__attribute__((used)) static int
FUNC_8(device_t VAR_7, u_char VAR_8, char VAR_9, char *VAR_10)
{
 struct amdsmb_softc *VAR_11 = (struct amdsmb_softc *)FUNC_6(VAR_7);
 int VAR_12;

 FUNC_1(VAR_11);
 FUNC_4(VAR_11, VAR_1, VAR_9);
 FUNC_4(VAR_11, VAR_0, VAR_8);
 FUNC_4(VAR_11, VAR_4, VAR_6 | VAR_5);

 if ((VAR_12 = FUNC_5(VAR_11)) == VAR_3)
  FUNC_3(VAR_11, VAR_2, VAR_10);

 FUNC_0(FUNC_7("amdsmb: READB from 0x%x, cmd=0x%x, byte=0x%x, "
     "error=0x%x\n", VAR_8, VAR_9, (unsigned char)*VAR_10, VAR_12));
 FUNC_2(VAR_11);

 return (VAR_12);
}
