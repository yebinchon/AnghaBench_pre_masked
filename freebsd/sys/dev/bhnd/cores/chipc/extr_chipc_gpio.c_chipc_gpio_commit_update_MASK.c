
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct chipc_gpio_update {int ctrl; int outen; int out; int timeroutmask; int pullup; int pulldown; } ;
struct chipc_gpio_softc {int dummy; } ;


 int FUNC_0 (struct chipc_gpio_softc*,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (struct chipc_gpio_softc*,int ,int *) ;

__attribute__((used)) static int
FUNC_2(struct chipc_gpio_softc *VAR_7,
    struct chipc_gpio_update *VAR_8)
{
 FUNC_0(VAR_7, VAR_6);


 FUNC_1(VAR_7, VAR_3, &VAR_8->pulldown);
 FUNC_1(VAR_7, VAR_4, &VAR_8->pullup);


 FUNC_1(VAR_7, VAR_5,
     &VAR_8->timeroutmask);
 FUNC_1(VAR_7, VAR_1, &VAR_8->out);


 FUNC_1(VAR_7, VAR_2, &VAR_8->outen);
 FUNC_1(VAR_7, VAR_0, &VAR_8->ctrl);

 return (0);
}
