
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct ipw_softc {int flags; int txold; int txfree; struct ipw_soft_bd* stbd_list; } ;
struct ipw_soft_bd {int dummy; } ;


 int FUNC_0 (struct ipw_softc*,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (struct ipw_softc*,struct ipw_soft_bd*) ;
 int FUNC_2 (struct ipw_softc*) ;

__attribute__((used)) static void
FUNC_3(struct ipw_softc *VAR_3)
{
 struct ipw_soft_bd *VAR_4;
 uint32_t VAR_5, VAR_6;

 if (!(VAR_3->flags & VAR_1))
  return;

 VAR_5 = FUNC_0(VAR_3, VAR_0);

 for (VAR_6 = (VAR_3->txold + 1) % VAR_2; VAR_6 != VAR_5; VAR_6 = (VAR_6 + 1) % VAR_2) {
  VAR_4 = &VAR_3->stbd_list[VAR_6];
  FUNC_1(VAR_3, VAR_4);
  VAR_3->txfree++;
 }


 VAR_3->txold = (VAR_5 == 0) ? VAR_2 - 1 : VAR_5 - 1;

 FUNC_2(VAR_3);
}
