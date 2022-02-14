
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint32_t ;
struct fman_kg_scheme_regs {int * kgse_gec; int kgse_mv; int kgse_ccbs; int kgse_dv1; int kgse_dv0; int kgse_spc; int kgse_ppc; int kgse_hc; int kgse_fqb; int kgse_bmcl; int kgse_bmch; int kgse_ekdv; int kgse_ekfc; int kgse_mode; } ;
struct fman_kg_regs {int * fmkg_indirect; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ,int,int ) ;
 int FUNC_1 (struct fman_kg_regs*,int ) ;
 int FUNC_2 (int ,int *) ;

int FUNC_3(struct fman_kg_regs *VAR_2,
    uint8_t VAR_3,
    uint8_t VAR_4,
    struct fman_kg_scheme_regs *VAR_5,
    bool VAR_6)
{
 struct fman_kg_scheme_regs *VAR_7;
 uint32_t VAR_8;
 int VAR_9, VAR_10;


 VAR_7 = (struct fman_kg_scheme_regs *)&(VAR_2->fmkg_indirect[0]);

 FUNC_2(VAR_5->kgse_mode, &VAR_7->kgse_mode);
 FUNC_2(VAR_5->kgse_ekfc, &VAR_7->kgse_ekfc);
 FUNC_2(VAR_5->kgse_ekdv, &VAR_7->kgse_ekdv);
 FUNC_2(VAR_5->kgse_bmch, &VAR_7->kgse_bmch);
 FUNC_2(VAR_5->kgse_bmcl, &VAR_7->kgse_bmcl);
 FUNC_2(VAR_5->kgse_fqb, &VAR_7->kgse_fqb);
 FUNC_2(VAR_5->kgse_hc, &VAR_7->kgse_hc);
 FUNC_2(VAR_5->kgse_ppc, &VAR_7->kgse_ppc);
 FUNC_2(VAR_5->kgse_spc, &VAR_7->kgse_spc);
 FUNC_2(VAR_5->kgse_dv0, &VAR_7->kgse_dv0);
 FUNC_2(VAR_5->kgse_dv1, &VAR_7->kgse_dv1);
 FUNC_2(VAR_5->kgse_ccbs, &VAR_7->kgse_ccbs);
 FUNC_2(VAR_5->kgse_mv, &VAR_7->kgse_mv);

 for (VAR_10 = 0 ; VAR_10 < VAR_0 ; VAR_10++)
  FUNC_2(VAR_5->kgse_gec[VAR_10], &VAR_7->kgse_gec[VAR_10]);


 VAR_8 = FUNC_0(VAR_3, VAR_4, VAR_6, VAR_1);
 VAR_9 = FUNC_1(VAR_2, VAR_8);
 return VAR_9;
}
