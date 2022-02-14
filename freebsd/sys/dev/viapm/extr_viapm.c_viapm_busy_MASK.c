
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_char ;
struct viapm_softc {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (char*,int) ;

__attribute__((used)) static int
FUNC_3(struct viapm_softc *VAR_2)
{
 u_char VAR_3;

 VAR_3 = FUNC_1(VAR_0);

 FUNC_0(FUNC_2("viapm: idle? STS=0x%x\n", VAR_3));

 return (VAR_3 & VAR_1);
}
