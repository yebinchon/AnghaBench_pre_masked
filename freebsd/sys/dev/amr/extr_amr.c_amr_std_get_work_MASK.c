
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int8_t ;
struct amr_softc {scalar_t__ amr_mailbox; } ;
struct amr_mailbox {int dummy; } ;


 int FUNC_0 (struct amr_softc*) ;
 int FUNC_1 (struct amr_softc*) ;
 int VAR_0 ;
 int FUNC_2 (struct amr_softc*,int) ;
 int FUNC_3 (void*,struct amr_mailbox*,int) ;
 int FUNC_4 (int) ;

__attribute__((used)) static int
FUNC_5(struct amr_softc *VAR_1, struct amr_mailbox *VAR_2)
{
    int VAR_3;
    u_int8_t VAR_4;

    FUNC_4(3);

    VAR_3 = 0;


    VAR_4 = FUNC_1(VAR_1);
    if ((VAR_4 & VAR_0) != 0) {
 FUNC_2(VAR_1, VAR_4);


 FUNC_3((void *)(uintptr_t)(volatile void *)VAR_1->amr_mailbox, VAR_2, sizeof(*VAR_2));

 FUNC_0(VAR_1);
 VAR_3 = 1;
    }

    return(VAR_3);
}
