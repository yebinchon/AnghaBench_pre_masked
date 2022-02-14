
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ecore_mcast_ramrod_params {int mcast_list_len; int mcast_list; } ;
struct ecore_mcast_list_elem {int * mac; int link; } ;
struct bxe_softc {int ifp; } ;
typedef int if_t ;


 int FUNC_0 (struct bxe_softc*,int ,char*,int ,int ,int ,int ,int ,int ,int) ;
 int FUNC_1 (struct bxe_softc*,char*) ;
 int VAR_0 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,int *) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_4 (struct ecore_mcast_list_elem*,int) ;
 int FUNC_5 (int ,int ,struct ecore_mcast_list_elem*) ;
 int FUNC_6 (int ) ;
 struct ecore_mcast_list_elem* FUNC_7 (int,int ,int) ;

__attribute__((used)) static int
FUNC_8(struct bxe_softc *VAR_5,
                         struct ecore_mcast_ramrod_params *VAR_6)
{
    if_t VAR_7 = VAR_5->ifp;
    int VAR_8;
    struct ecore_mcast_list_elem *VAR_9;

    FUNC_2(&VAR_6->mcast_list);
    VAR_6->mcast_list_len = 0;


    VAR_8 = FUNC_6(VAR_7);

    if (!VAR_8) {
        return (0);
    }

    VAR_9 = FUNC_7(sizeof(*VAR_9) * VAR_8, VAR_1,
                    (VAR_2 | VAR_3));
    if (!VAR_9) {
        FUNC_1(VAR_5, "Failed to allocate temp mcast list\n");
        return (-1);
    }
    FUNC_4(VAR_9, (sizeof(*VAR_9) * VAR_8));
    FUNC_5(VAR_7, VAR_4, VAR_9);

    for (int VAR_10 = 0; VAR_10 < VAR_8; VAR_10 ++) {
        FUNC_3(&VAR_9[VAR_10].link, &VAR_6->mcast_list);
        FUNC_0(VAR_5, VAR_0,
              "Setting MCAST %02X:%02X:%02X:%02X:%02X:%02X and mc_count %d\n",
              VAR_9[VAR_10].mac[0], VAR_9[VAR_10].mac[1], VAR_9[VAR_10].mac[2],
              VAR_9[VAR_10].mac[3], VAR_9[VAR_10].mac[4], VAR_9[VAR_10].mac[5],
              VAR_8);
    }

    VAR_6->mcast_list_len = VAR_8;

    return (0);
}
