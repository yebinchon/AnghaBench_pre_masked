
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int vdev_t ;
typedef int uint64_t ;
struct TYPE_2__ {scalar_t__ mcca_error; int mcca_txg; } ;
typedef TYPE_1__ metaslab_claim_cb_arg_t ;


 scalar_t__ FUNC_0 (int *,int ,int ,int ) ;

__attribute__((used)) static void
FUNC_1(uint64_t VAR_0, vdev_t *VAR_1, uint64_t VAR_2,
    uint64_t VAR_3, void *VAR_4)
{
 metaslab_claim_cb_arg_t *VAR_5 = VAR_4;

 if (VAR_5->mcca_error == 0) {
  VAR_5->mcca_error = FUNC_0(VAR_1, VAR_2,
      VAR_3, VAR_5->mcca_txg);
 }
}
