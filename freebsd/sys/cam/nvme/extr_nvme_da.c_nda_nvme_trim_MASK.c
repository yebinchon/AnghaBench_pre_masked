
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct nvme_dsm_range {int dummy; } ;
struct nda_softc {int nsid; } ;
struct ccb_nvmeio {int cmd; } ;


 int VAR_0 ;
 int FUNC_0 (struct ccb_nvmeio*,int ,int ,int ,void*,int,int) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int *,int ,int) ;

__attribute__((used)) static void
FUNC_2(struct nda_softc *VAR_3, struct ccb_nvmeio *VAR_4,
    void *VAR_5, uint32_t VAR_6)
{
 FUNC_0(VAR_4,
     0,
     VAR_2,
     VAR_0,
     VAR_5,
     VAR_6 * sizeof(struct nvme_dsm_range),
     VAR_1 * 1000);
 FUNC_1(&VAR_4->cmd, VAR_3->nsid, VAR_6);
}
