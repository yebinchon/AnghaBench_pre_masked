
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint32_t ;
struct cpsw_softc {int dummy; } ;


 int FUNC_0 (scalar_t__*) ;
 scalar_t__ FUNC_1 (scalar_t__*) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (struct cpsw_softc*,int,scalar_t__*) ;
 int FUNC_3 (struct cpsw_softc*,int,scalar_t__*) ;

__attribute__((used)) static void
FUNC_4(struct cpsw_softc *VAR_3)
{
 int VAR_4;
 uint32_t VAR_5[3];


 for (VAR_4 = 10; VAR_4 < VAR_2; VAR_4++) {
  FUNC_2(VAR_3, VAR_4, VAR_5);
  if ((FUNC_1(VAR_5) == VAR_0 ||
      FUNC_1(VAR_5) == VAR_1) &&
      FUNC_0(VAR_5) == 1) {
   VAR_5[0] = VAR_5[1] = VAR_5[2] = 0;
   FUNC_3(VAR_3, VAR_4, VAR_5);
  }
 }
}
