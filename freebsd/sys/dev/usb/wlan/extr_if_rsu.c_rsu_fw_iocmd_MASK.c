
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct rsu_softc {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct rsu_softc*,int) ;
 scalar_t__ FUNC_1 (struct rsu_softc*,int ) ;
 int FUNC_2 (struct rsu_softc*,int ,int ) ;

__attribute__((used)) static int
FUNC_3(struct rsu_softc *VAR_2, uint32_t VAR_3)
{
 int VAR_4;

 FUNC_2(VAR_2, VAR_1, VAR_3);
 FUNC_0(VAR_2, 1);
 for (VAR_4 = 0; VAR_4 < 50; VAR_4++) {
  if (FUNC_1(VAR_2, VAR_1) == 0)
   return (0);
  FUNC_0(VAR_2, 1);
 }
 return (VAR_0);
}
