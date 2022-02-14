
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u_int32_t ;
struct safe_softc {int dummy; } ;


 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (struct safe_softc*,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (struct safe_softc*,int ,int) ;

__attribute__((used)) static void
FUNC_3(struct safe_softc *VAR_5)
{
 u_int32_t VAR_6, VAR_7;
 int VAR_8;

 FUNC_2(VAR_5, VAR_2, 0);

 FUNC_2(VAR_5, VAR_1, 0x834);
 FUNC_2(VAR_5, VAR_0, 0);
 VAR_8 = 0;
 VAR_6 = FUNC_1(VAR_5, VAR_4);
 do {
  VAR_7 = FUNC_1(VAR_5, VAR_4);
  if (VAR_7 != VAR_6) {
   VAR_6 = VAR_7;
   break;
  }
  FUNC_0(10);
 } while (++VAR_8 < VAR_3);


 VAR_8 = 0;
 do {
  VAR_7 = FUNC_1(VAR_5, VAR_4);
  if (VAR_7 != VAR_6)
   break;
  FUNC_0(10);
 } while (++VAR_8 < VAR_3);
}
