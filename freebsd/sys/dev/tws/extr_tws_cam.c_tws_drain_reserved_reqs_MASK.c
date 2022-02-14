
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tws_softc {struct tws_request* reqs; } ;
struct tws_request {scalar_t__ state; void* error_code; int data; int timeout; } ;


 int VAR_0 ;
 void* VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 size_t VAR_4 ;
 size_t VAR_5 ;
 size_t VAR_6 ;
 int FUNC_0 (struct tws_softc*,char*,int ,int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (struct tws_softc*,struct tws_request*) ;

__attribute__((used)) static void
FUNC_4(struct tws_softc *VAR_7)
{
    struct tws_request *VAR_8;

    VAR_8 = &VAR_7->reqs[VAR_4];
    if ( VAR_8->state != VAR_3 ) {
        FUNC_0(VAR_7, "reset aen req", 0, 0);
 FUNC_1(&VAR_8->timeout);
        FUNC_3(VAR_7, VAR_8);
        FUNC_2(VAR_8->data, VAR_0);
        VAR_8->state = VAR_3;
        VAR_8->error_code = VAR_1;
    }

    VAR_8 = &VAR_7->reqs[VAR_6];
    if ( VAR_8->state == VAR_2 ) {
        FUNC_0(VAR_7, "reset passthru req", 0, 0);
        VAR_8->error_code = VAR_1;
    }

    VAR_8 = &VAR_7->reqs[VAR_5];
    if ( VAR_8->state != VAR_3 ) {
        FUNC_0(VAR_7, "reset setparam req", 0, 0);
 FUNC_1(&VAR_8->timeout);
        FUNC_3(VAR_7, VAR_8);
        FUNC_2(VAR_8->data, VAR_0);
        VAR_8->state = VAR_3;
        VAR_8->error_code = VAR_1;
    }
}
