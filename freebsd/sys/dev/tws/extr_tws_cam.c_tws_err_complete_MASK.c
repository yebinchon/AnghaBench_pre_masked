
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u_int64_t ;
typedef int u_int32_t ;
typedef size_t u_int16_t ;
struct tws_softc {int obfl_q_overrun; int io_lock; int tws_dev; struct tws_request* reqs; } ;
struct tws_sense {struct tws_command_header* hdr; } ;
struct tws_request {size_t error_code; int type; } ;
struct TYPE_2__ {size_t request_id; int size_header; } ;
struct tws_command_header {TYPE_1__ header_desc; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 size_t VAR_4 ;



 int FUNC_0 (struct tws_softc*,char*,...) ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 struct tws_sense* FUNC_4 (struct tws_softc*,int) ;
 int FUNC_5 (struct tws_request*) ;
 int FUNC_6 (struct tws_request*,struct tws_command_header*) ;
 int FUNC_7 (struct tws_softc*,int ,int) ;
 int FUNC_8 (struct tws_request*,struct tws_command_header*) ;
 int FUNC_9 (struct tws_softc*,int ,int,int) ;

__attribute__((used)) static void
FUNC_10(struct tws_softc *VAR_5, u_int64_t VAR_6)
{
    struct tws_command_header *VAR_7;
    struct tws_sense *VAR_8;
    struct tws_request *VAR_9;
    u_int16_t VAR_10;
    u_int32_t VAR_11, VAR_12;

    if ( !VAR_6 ) {
        FUNC_0(VAR_5, "null mfa", 0, VAR_6);
        return;
    } else {

        VAR_8 = FUNC_4(VAR_5, VAR_6);
        if ( VAR_8 == ((void*)0) ) {
            FUNC_0(VAR_5, "found null req", 0, VAR_6);
            return;
        }
        VAR_7 = VAR_8->hdr;
        FUNC_0(VAR_5, "sen, hdr", VAR_8, VAR_7);
        VAR_10 = VAR_7->header_desc.request_id;
        VAR_9 = &VAR_5->reqs[VAR_10];
        FUNC_0(VAR_5, "req, id", VAR_9, VAR_10);
        if ( VAR_9->error_code != VAR_4 )
            FUNC_0(VAR_5, "submit failure?", 0, VAR_9->error_code);
    }

    switch (VAR_9->type) {
        case 129 :
            FUNC_6(VAR_9, VAR_7);
            break;
        case 130 :
            FUNC_5(VAR_9);
            break;
        case 128 :
            FUNC_8(VAR_9, VAR_7);
            break;

    }

    FUNC_2(&VAR_5->io_lock);
    VAR_7->header_desc.size_header = 128;
    VAR_11 = (u_int32_t)( VAR_6>>32);
    FUNC_9(VAR_5, VAR_1, VAR_11, 4);
    VAR_11 = (u_int32_t)(VAR_6);
    FUNC_9(VAR_5, VAR_2, VAR_11, 4);

    VAR_12 = FUNC_7(VAR_5, VAR_3, 4);
    if ( VAR_12 & VAR_0 ) {
        FUNC_1(VAR_5->tws_dev, "OBFL Overrun\n");
        VAR_5->obfl_q_overrun = 1;
    }
    FUNC_3(&VAR_5->io_lock);
}
