
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mly_softc {int dummy; } ;
struct mly_event {int dummy; } ;
struct mly_command {scalar_t__ mc_status; scalar_t__ mc_data; struct mly_softc* mc_sc; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct mly_event*,int ) ;
 int FUNC_2 (struct mly_softc*) ;
 int FUNC_3 (struct mly_softc*,struct mly_event*) ;
 int FUNC_4 (struct mly_command*) ;

__attribute__((used)) static void
FUNC_5(struct mly_command *VAR_2)
{
    struct mly_softc *VAR_3 = VAR_2->mc_sc;
    struct mly_event *VAR_4 = (struct mly_event *)VAR_2->mc_data;

    FUNC_0(1);




    if (VAR_2->mc_status == VAR_1) {
 FUNC_3(VAR_3, VAR_4);
 FUNC_1(VAR_4, VAR_0);
    }
    FUNC_4(VAR_2);




    FUNC_2(VAR_3);
}
