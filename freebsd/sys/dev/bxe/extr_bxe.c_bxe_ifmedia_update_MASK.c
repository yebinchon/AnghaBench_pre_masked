
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ifnet {int dummy; } ;
struct ifmedia {int ifm_media; } ;
struct bxe_softc {struct ifmedia ifmedia; } ;


 int FUNC_0 (struct bxe_softc*,int ,char*,int) ;
 int VAR_0 ;
 int VAR_1 ;





 scalar_t__ VAR_2 ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (struct ifnet*) ;

__attribute__((used)) static int
FUNC_4(struct ifnet *VAR_3)
{
    struct bxe_softc *VAR_4 = (struct bxe_softc *)FUNC_3(VAR_3);
    struct ifmedia *VAR_5;

    VAR_5 = &VAR_4->ifmedia;


    if (FUNC_2(VAR_5->ifm_media) != VAR_2) {
        return (VAR_1);
    }

    switch (FUNC_1(VAR_5->ifm_media)) {
    case 128:
         break;
    case 132:
    case 131:
    case 130:
    case 129:
    default:

        FUNC_0(VAR_4, VAR_0, "Invalid media type (%d)\n",
              FUNC_1(VAR_5->ifm_media));
        return (VAR_1);
    }

    return (0);
}
