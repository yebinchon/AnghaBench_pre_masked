
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hpt_iop_hba {scalar_t__ ctlcfg_dmat; int ctlcfg_dmamap; int ctlcfg_ptr; } ;


 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (scalar_t__,int ) ;
 int FUNC_2 (scalar_t__,int ,int ) ;

__attribute__((used)) static int FUNC_3(struct hpt_iop_hba *VAR_0)
{
 if (VAR_0->ctlcfg_dmat) {
  FUNC_1(VAR_0->ctlcfg_dmat, VAR_0->ctlcfg_dmamap);
  FUNC_2(VAR_0->ctlcfg_dmat,
     VAR_0->ctlcfg_ptr, VAR_0->ctlcfg_dmamap);
  FUNC_0(VAR_0->ctlcfg_dmat);
 }

 return 0;
}
