
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct ipw_softc {int dummy; } ;


 int FUNC_0 (struct ipw_softc*,int ) ;
 int FUNC_1 (struct ipw_softc*,int ,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_2 (struct ipw_softc*) ;
 int FUNC_3 (struct ipw_softc*) ;
 int FUNC_4 (struct ipw_softc*) ;
 int FUNC_5 (struct ipw_softc*) ;
 int FUNC_6 (struct ipw_softc*) ;
 int FUNC_7 (struct ipw_softc*) ;

__attribute__((used)) static void
FUNC_8(void *VAR_8)
{
 struct ipw_softc *VAR_9 = VAR_8;
 uint32_t VAR_10;

 FUNC_2(VAR_9);

 VAR_10 = FUNC_0(VAR_9, VAR_0);
 if (VAR_10 == 0 || VAR_10 == 0xffffffff)
  goto done;


 FUNC_1(VAR_9, VAR_1, 0);


 FUNC_1(VAR_9, VAR_0, VAR_10);

 if (VAR_10 & (VAR_2 | VAR_5)) {
  FUNC_4(VAR_9);
  goto done;
 }

 if (VAR_10 & VAR_3)
  FUNC_7(VAR_9);

 if (VAR_10 & VAR_6)
  FUNC_5(VAR_9);

 if (VAR_10 & VAR_7)
  FUNC_6(VAR_9);


 FUNC_1(VAR_9, VAR_1, VAR_4);
done:
 FUNC_3(VAR_9);
}
