
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
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_3 (struct amdsmb_softc*,scalar_t__,int) ;
 int FUNC_4 (struct amdsmb_softc*) ;
 scalar_t__ FUNC_5 (int ) ;
 int FUNC_6 (char*,int,int,char,int) ;

__attribute__((used)) static int
FUNC_7(device_t VAR_8, u_char VAR_9, char VAR_10, u_char VAR_11, char *VAR_12)
{
 struct amdsmb_softc *VAR_13 = (struct amdsmb_softc *)FUNC_5(VAR_8);
 u_char VAR_14;
 int VAR_15;

 if (VAR_11 < 1 || VAR_11 > 32)
  return (VAR_4);

 FUNC_1(VAR_13);
 FUNC_3(VAR_13, VAR_2, VAR_10);
 FUNC_3(VAR_13, VAR_1, VAR_11);
 for (VAR_14 = 0; VAR_14 < VAR_11; VAR_14++)
  FUNC_3(VAR_13, VAR_3 + VAR_14, VAR_12[VAR_14]);
 FUNC_3(VAR_13, VAR_0, VAR_9);
 FUNC_3(VAR_13, VAR_5, VAR_7 | VAR_6);

 VAR_15 = FUNC_4(VAR_13);

 FUNC_0(FUNC_6("amdsmb: WRITEBLK to 0x%x, count=0x%x, cmd=0x%x, "
     "error=0x%x", VAR_9, VAR_11, VAR_10, VAR_15));
 FUNC_2(VAR_13);

 return (VAR_15);
}
