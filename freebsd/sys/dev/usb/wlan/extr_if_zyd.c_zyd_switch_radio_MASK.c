
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct zyd_rf {int (* switch_radio ) (struct zyd_rf*,int) ;} ;
struct zyd_softc {struct zyd_rf sc_rf; } ;


 int FUNC_0 (struct zyd_rf*,int) ;
 int FUNC_1 (struct zyd_softc*) ;
 int FUNC_2 (struct zyd_softc*) ;

__attribute__((used)) static int
FUNC_3(struct zyd_softc *VAR_0, int VAR_1)
{
 struct zyd_rf *VAR_2 = &VAR_0->sc_rf;
 int VAR_3;

 VAR_3 = FUNC_1(VAR_0);
 if (VAR_3 != 0)
  goto fail;
 VAR_3 = (*VAR_2->switch_radio)(VAR_2, VAR_1);
 if (VAR_3 != 0)
  goto fail;
 VAR_3 = FUNC_2(VAR_0);
fail:
 return (VAR_3);
}
