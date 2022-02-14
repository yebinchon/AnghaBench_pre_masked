
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ecore_mcast_ramrod_params {int * mcast_obj; int * member_0; } ;
struct bxe_softc {int mcast_obj; } ;


 int FUNC_0 (struct bxe_softc*,char*,int) ;
 int FUNC_1 (struct bxe_softc*) ;
 int FUNC_2 (struct bxe_softc*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_3 (struct ecore_mcast_ramrod_params*) ;
 int FUNC_4 (struct bxe_softc*,struct ecore_mcast_ramrod_params*) ;
 int FUNC_5 (struct bxe_softc*,struct ecore_mcast_ramrod_params*,int ) ;

__attribute__((used)) static int
FUNC_6(struct bxe_softc *VAR_2)
{
    struct ecore_mcast_ramrod_params VAR_3 = { ((void*)0) };
    int VAR_4 = 0;

    VAR_3.mcast_obj = &VAR_2->mcast_obj;

    FUNC_1(VAR_2);


    VAR_4 = FUNC_5(VAR_2, &VAR_3, VAR_1);
    if (VAR_4 < 0) {
        FUNC_0(VAR_2, "Failed to clear multicast configuration: %d\n", VAR_4);

        FUNC_2(VAR_2);
        return (VAR_4);
    }


    VAR_4 = FUNC_4(VAR_2, &VAR_3);
    if (VAR_4) {
        FUNC_0(VAR_2, "Failed to create mcast MACs list (%d)\n", VAR_4);
        FUNC_2(VAR_2);
        return (VAR_4);
    }


    VAR_4 = FUNC_5(VAR_2, &VAR_3, VAR_0);
    if (VAR_4 < 0) {
        FUNC_0(VAR_2, "Failed to set new mcast config (%d)\n", VAR_4);
    }

    FUNC_3(&VAR_3);

    FUNC_2(VAR_2);

    return (VAR_4);
}
