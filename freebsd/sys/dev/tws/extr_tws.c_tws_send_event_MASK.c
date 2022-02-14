
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int8_t ;
struct tws_softc {int tws_state; int tws_dev; int tws_prev_state; int gen_lock; } ;


 int VAR_0 ;
 int VAR_1 ;


 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;



 int FUNC_0 (struct tws_softc*,char*,int ,int) ;
 int VAR_5 ;

 int FUNC_1 (int ,char*,int ,...) ;
 int FUNC_2 (int *,int ) ;

void
FUNC_3(struct tws_softc *VAR_6, u_int8_t VAR_7)
{
    FUNC_2(&VAR_6->gen_lock, VAR_0);
    FUNC_0(VAR_6, "received event ", 0, VAR_7);
    switch (VAR_7) {

        case 132:
            VAR_6->tws_state = VAR_1;
            break;

        case 133:
            if (VAR_6->tws_state != VAR_1) {
                FUNC_1(VAR_6->tws_dev, "invalid state transition %d => TWS_ONLINE\n", VAR_6->tws_state);
            } else {
                VAR_6->tws_state = VAR_3;
            }
            break;

        case 130:

            if (VAR_6->tws_state != VAR_4) {
                VAR_6->tws_prev_state = VAR_6->tws_state;
                VAR_6->tws_state = VAR_4;
            }
            break;

        case 131:
            if (VAR_6->tws_state != VAR_4) {
                FUNC_1(VAR_6->tws_dev, "invalid state transition %d => %d (previous state)\n", VAR_6->tws_state, VAR_6->tws_prev_state);
            } else {
                VAR_6->tws_state = VAR_6->tws_prev_state;
            }
            break;

        case 129:
            if (VAR_6->tws_state != VAR_3) {
                FUNC_1(VAR_6->tws_dev, "invalid state transition %d => TWS_OFFLINE\n", VAR_6->tws_state);
            } else {
                VAR_6->tws_state = VAR_2;
            }
            break;

        case 128:
            if ((VAR_6->tws_state != VAR_3) && (VAR_6->tws_state != VAR_2)) {
                FUNC_1(VAR_6->tws_dev, "invalid state transition %d => TWS_UNINIT\n", VAR_6->tws_state);
            } else {
                VAR_6->tws_state = VAR_5;
            }
            break;
    }

}
