
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct ipw_softc {int dummy; } ;


 int FUNC_0 (struct ipw_softc*,int ) ;
 int FUNC_1 (struct ipw_softc*,int ,int) ;
 int FUNC_2 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_3 (struct ipw_softc*) ;

__attribute__((used)) static int
FUNC_4(struct ipw_softc *VAR_6)
{
 uint32_t VAR_7;
 int VAR_8;

 FUNC_3(VAR_6);


 VAR_7 = FUNC_0(VAR_6, VAR_1);
 FUNC_1(VAR_6, VAR_1, VAR_7 | VAR_4);


 for (VAR_8 = 0; VAR_8 < 1000; VAR_8++) {
  if (FUNC_0(VAR_6, VAR_1) & VAR_3)
   break;
  FUNC_2(200);
 }
 if (VAR_8 == 1000)
  return VAR_0;

 VAR_7 = FUNC_0(VAR_6, VAR_2);
 FUNC_1(VAR_6, VAR_2, VAR_7 | VAR_5);

 FUNC_2(10);

 VAR_7 = FUNC_0(VAR_6, VAR_1);
 FUNC_1(VAR_6, VAR_1, VAR_7 | VAR_4);

 return 0;
}
