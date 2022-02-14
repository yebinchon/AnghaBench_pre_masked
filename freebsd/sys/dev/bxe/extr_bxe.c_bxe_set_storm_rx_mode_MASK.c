
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct bxe_softc {TYPE_1__* fp; int rx_mode; } ;
struct TYPE_2__ {int cl_id; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct bxe_softc*,int ,unsigned long*,unsigned long*) ;
 int FUNC_1 (int ,unsigned long*) ;
 int FUNC_2 (struct bxe_softc*,int ,unsigned long,unsigned long,unsigned long,unsigned long) ;

__attribute__((used)) static int
FUNC_3(struct bxe_softc *VAR_2)
{
    unsigned long VAR_3 = 0, VAR_4 = 0;
    unsigned long VAR_5 = 0, VAR_6 = 0;
    int VAR_7;

    VAR_7 = FUNC_0(VAR_2, VAR_2->rx_mode, &VAR_5,
                               &VAR_6);
    if (VAR_7) {
        return (VAR_7);
    }

    FUNC_1(VAR_0, &VAR_4);
    FUNC_1(VAR_1, &VAR_4);


    return (FUNC_2(VAR_2, VAR_2->fp[0].cl_id, VAR_3,
                              VAR_5, VAR_6,
                              VAR_4));
}
