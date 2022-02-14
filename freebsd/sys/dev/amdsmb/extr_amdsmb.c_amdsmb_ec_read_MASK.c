
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_char ;
struct amdsmb_softc {int dummy; } ;


 int FUNC_0 (struct amdsmb_softc*,int ) ;
 int FUNC_1 (struct amdsmb_softc*,int ,int ) ;
 int FUNC_2 (struct amdsmb_softc*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_3 (struct amdsmb_softc*) ;
 scalar_t__ FUNC_4 (struct amdsmb_softc*) ;

__attribute__((used)) static int
FUNC_5(struct amdsmb_softc *VAR_3, u_char VAR_4, u_char *VAR_5)
{

 FUNC_2(VAR_3);
 if (FUNC_4(VAR_3))
  return (1);
 FUNC_1(VAR_3, VAR_0, VAR_1);

 if (FUNC_4(VAR_3))
  return (1);
 FUNC_1(VAR_3, VAR_2, VAR_4);

 if (FUNC_3(VAR_3))
  return (1);
 *VAR_5 = FUNC_0(VAR_3, VAR_2);

 return (0);
}
