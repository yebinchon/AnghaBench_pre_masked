
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct amdsmb_softc {int smbus; } ;


 int FUNC_0 (struct amdsmb_softc*,int ) ;
 int FUNC_1 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (int ,char*) ;

__attribute__((used)) static int
FUNC_3(struct amdsmb_softc *VAR_2)
{
 int VAR_3 = 500;

 while (VAR_3-- && FUNC_0(VAR_2, VAR_0) & VAR_1)
  FUNC_1(1);
 if (VAR_3 == 0) {
  FUNC_2(VAR_2->smbus, "timeout waiting for IBF to clear\n");
  return (1);
 }
 return (0);
}
