
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct elink_vars {int dummy; } ;
struct elink_phy {int dummy; } ;
struct elink_params {int shmem_base; int port; struct bxe_softc* sc; } ;
struct bxe_softc {int dummy; } ;
typedef int elink_status_t ;


 int FUNC_0 (struct bxe_softc*,char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_1 (struct bxe_softc*,int ,int ,int ) ;
 int FUNC_2 (struct bxe_softc*,struct elink_phy*,int ,int ,int) ;
 int FUNC_3 (struct bxe_softc*,int ) ;
 int FUNC_4 (struct bxe_softc*,int ,int ,int ) ;
 int FUNC_5 (struct bxe_softc*,struct elink_phy*,struct elink_params*) ;

__attribute__((used)) static elink_status_t FUNC_6(struct elink_phy *VAR_10,
      struct elink_params *VAR_11,
      struct elink_vars *VAR_12)
{
 struct bxe_softc *VAR_13 = VAR_11->sc;
 FUNC_0(VAR_13, "init 8705\n");

 FUNC_1(VAR_13, VAR_8,
         VAR_9, VAR_11->port);

 FUNC_3(VAR_13, VAR_11->port);
 FUNC_2(VAR_13, VAR_10, VAR_1, VAR_3, 0xa040);
 FUNC_5(VAR_13, VAR_10, VAR_11);

 FUNC_2(VAR_13, VAR_10,
    VAR_1, VAR_4, 0x8288);
 FUNC_2(VAR_13, VAR_10,
    VAR_1, VAR_5, 0x7fbf);
 FUNC_2(VAR_13, VAR_10,
    VAR_1, VAR_2, 0x0100);
 FUNC_2(VAR_13, VAR_10,
    VAR_6, VAR_7, 0x1);

 FUNC_4(VAR_13, VAR_11->port, VAR_11->shmem_base, 0);
 return VAR_0;
}
