
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_short ;
struct amdpm_softc {int dummy; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (struct amdpm_softc*) ;
 int FUNC_2 (struct amdpm_softc*,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_3 (char*,int) ;

__attribute__((used)) static int
FUNC_4(struct amdpm_softc *VAR_2)
{
 u_short VAR_3;

 FUNC_1(VAR_2);
 VAR_3 = FUNC_2(VAR_2, VAR_0);

 FUNC_0(FUNC_3("amdpm: busy? STS=0x%x\n", VAR_3));

 return (~(VAR_3 & VAR_1));
}
