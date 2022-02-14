
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_char ;
struct alpm_softc {int dummy; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (struct alpm_softc*,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (char*,int) ;

__attribute__((used)) static int
FUNC_3(struct alpm_softc *VAR_2)
{
 u_char VAR_3;

 VAR_3 = FUNC_1(VAR_2, VAR_1);

 FUNC_0(FUNC_2("alpm: idle? STS=0x%x\n", VAR_3));

 return (VAR_3 & VAR_0);
}
