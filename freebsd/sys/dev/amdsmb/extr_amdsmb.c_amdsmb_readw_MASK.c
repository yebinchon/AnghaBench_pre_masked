
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
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_3 (struct amdsmb_softc*,scalar_t__,int*) ;
 int FUNC_4 (struct amdsmb_softc*,int ,int) ;
 int FUNC_5 (struct amdsmb_softc*) ;
 scalar_t__ FUNC_6 (int ) ;
 int FUNC_7 (char*,int,char,unsigned short,int) ;

__attribute__((used)) static int
FUNC_8(device_t VAR_7, u_char VAR_8, char VAR_9, short *VAR_10)
{
 struct amdsmb_softc *VAR_11 = (struct amdsmb_softc *)FUNC_6(VAR_7);
 u_char VAR_12[2];
 int VAR_13;

 FUNC_1(VAR_11);
 FUNC_4(VAR_11, VAR_1, VAR_9);
 FUNC_4(VAR_11, VAR_0, VAR_8);
 FUNC_4(VAR_11, VAR_4, VAR_5 | VAR_6);

 if ((VAR_13 = FUNC_5(VAR_11)) == VAR_3) {
  FUNC_3(VAR_11, VAR_2 + 0, &VAR_12[0]);
  FUNC_3(VAR_11, VAR_2 + 1, &VAR_12[1]);
  *VAR_10 = VAR_12[0] | (VAR_12[1] << 8);
 }

 FUNC_0(FUNC_7("amdsmb: READW from 0x%x, cmd=0x%x, word=0x%x, "
     "error=0x%x\n", VAR_8, VAR_9, (unsigned short)*VAR_10, VAR_13));
 FUNC_2(VAR_11);

 return (VAR_13);
}
