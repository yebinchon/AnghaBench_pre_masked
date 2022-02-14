
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_4__ {scalar_t__ pmf; } ;
struct TYPE_5__ {int udp_rss_v4; int udp_rss_v6; scalar_t__* ind_table; } ;
struct bxe_softc {TYPE_1__ port; TYPE_2__ rss_conf_obj; scalar_t__ udp_rss; TYPE_3__* fp; } ;
struct TYPE_6__ {scalar_t__ cl_id; } ;


 int FUNC_0 (struct bxe_softc*) ;
 int FUNC_1 (struct bxe_softc*) ;
 int FUNC_2 (struct bxe_softc*,int) ;

__attribute__((used)) static int
FUNC_3(struct bxe_softc *VAR_0)
{
    uint8_t VAR_1 = FUNC_0(VAR_0);
    int VAR_2;





    for (VAR_2 = 0; VAR_2 < sizeof(VAR_0->rss_conf_obj.ind_table); VAR_2++) {
        VAR_0->rss_conf_obj.ind_table[VAR_2] =
            (VAR_0->fp->cl_id + (VAR_2 % VAR_1));
    }

    if (VAR_0->udp_rss) {
        VAR_0->rss_conf_obj.udp_rss_v4 = VAR_0->rss_conf_obj.udp_rss_v6 = 1;
    }
    return (FUNC_2(VAR_0, VAR_0->port.pmf || !FUNC_1(VAR_0)));
}
