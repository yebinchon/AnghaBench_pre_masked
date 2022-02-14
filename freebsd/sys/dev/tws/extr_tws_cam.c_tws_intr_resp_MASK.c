
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u_int64_t ;
typedef size_t u_int16_t ;
struct TYPE_3__ {int reqs_errored; int reqs_out; } ;
struct tws_softc {TYPE_2__* reqs; TYPE_1__ stats; } ;
struct TYPE_4__ {int (* cb ) (TYPE_2__*) ;} ;


 size_t VAR_0 ;
 int FUNC_0 (struct tws_softc*,char*,int ,size_t) ;
 int FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (struct tws_softc*,int ) ;
 scalar_t__ FUNC_3 (struct tws_softc*,size_t*,int *) ;

__attribute__((used)) static void
FUNC_4(struct tws_softc *VAR_1)
{
    u_int16_t VAR_2;
    u_int64_t VAR_3;

    while ( FUNC_3(VAR_1, &VAR_2, &VAR_3) ) {
        VAR_1->stats.reqs_out++;
        if ( VAR_2 == VAR_0 ) {
            FUNC_0(VAR_1, "invalid req_id", VAR_3, VAR_2);
            VAR_1->stats.reqs_errored++;
            FUNC_2(VAR_1, VAR_3);
            continue;
        }
        VAR_1->reqs[VAR_2].cb(&VAR_1->reqs[VAR_2]);
    }

}
