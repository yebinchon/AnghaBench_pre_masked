
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int vf_valid; } ;
struct hc_sp_status_block_data {TYPE_1__ p_func; int state; } ;
struct bxe_softc {int dummy; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (struct bxe_softc*) ;
 int FUNC_3 (struct bxe_softc*,scalar_t__,int ,int ) ;
 int FUNC_4 (struct bxe_softc*,struct hc_sp_status_block_data*) ;
 int FUNC_5 (struct hc_sp_status_block_data*,int ,int) ;

__attribute__((used)) static void
FUNC_6(struct bxe_softc *VAR_5)
{
    struct hc_sp_status_block_data VAR_6;

    FUNC_5(&VAR_6, 0, sizeof(struct hc_sp_status_block_data));

    VAR_6.state = VAR_4;
    VAR_6.p_func.vf_valid = VAR_3;

    FUNC_4(VAR_5, &VAR_6);

    FUNC_3(VAR_5,
             (VAR_0 +
              FUNC_0(FUNC_2(VAR_5))),
              0, VAR_1);
    FUNC_3(VAR_5,
             (VAR_0 +
              FUNC_1(FUNC_2(VAR_5))),
              0, VAR_2);
}
