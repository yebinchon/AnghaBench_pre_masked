
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct mpt_softc {int dummy; } ;
typedef enum DB_STATE_BITS { ____Placeholder_DB_STATE_BITS } DB_STATE_BITS ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int ) ;
 int VAR_3 ;
 int FUNC_2 (struct mpt_softc*) ;

__attribute__((used)) static int
FUNC_3(struct mpt_softc *VAR_4, enum DB_STATE_BITS VAR_5)
{
 int VAR_6;

 for (VAR_6 = 0; VAR_6 < VAR_1; VAR_6++) {
  uint32_t VAR_7 = FUNC_2(VAR_4);
  if (FUNC_1(VAR_7) == VAR_5) {
   VAR_3 = VAR_6 > VAR_3 ? VAR_6 : VAR_3;
   return (VAR_2);
  }
  FUNC_0(100);
 }
 return (VAR_0);
}
