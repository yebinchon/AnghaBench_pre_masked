
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_7__ {int dtxl_dreg; int dtxl_sreg; int * dtxl_drp; int * dtxl_dlp; int * dtxl_idp; } ;
typedef TYPE_2__ dt_xlmemb_t ;
typedef int dt_regset_t ;
struct TYPE_8__ {TYPE_1__* dn_ident; int dn_reg; } ;
typedef TYPE_3__ dt_node_t ;
typedef int dt_irlist_t ;
typedef int dt_ident_t ;
struct TYPE_6__ {int di_type; int di_ctfp; } ;


 int FUNC_0 (int ,int) ;
 int VAR_0 ;
 int FUNC_1 (int ,int ,int ,int) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_2 (int ,int ,int ,TYPE_2__*) ;
 size_t FUNC_3 (int ,int ) ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 (int *,int,size_t) ;
 int VAR_6 ;
 int FUNC_6 (int *,int ) ;
 int FUNC_7 (int *) ;

__attribute__((used)) static int
FUNC_8(dt_node_t *VAR_7, dt_ident_t *VAR_8, dt_irlist_t *VAR_9,
    dt_regset_t *VAR_10)
{
 dt_xlmemb_t VAR_11;
 uint32_t VAR_12;
 int VAR_13;
 size_t VAR_14;

 VAR_13 = FUNC_7(VAR_10);
 VAR_14 = FUNC_3(VAR_7->dn_ident->di_ctfp, VAR_7->dn_ident->di_type);


 FUNC_5(VAR_9, VAR_13, VAR_14);

 FUNC_6(VAR_9, FUNC_4(VAR_5, VAR_0));

 VAR_12 = FUNC_1(VAR_1, VAR_4, VAR_2, VAR_13);
 FUNC_6(VAR_9, FUNC_4(VAR_5, VAR_12));

 VAR_12 = FUNC_0(VAR_3, VAR_13);
 FUNC_6(VAR_9, FUNC_4(VAR_5, VAR_12));


 VAR_11.dtxl_idp = VAR_8;
 VAR_11.dtxl_dlp = VAR_9;
 VAR_11.dtxl_drp = VAR_10;
 VAR_11.dtxl_sreg = VAR_7->dn_reg;
 VAR_11.dtxl_dreg = VAR_13;
 (void) FUNC_2(VAR_7->dn_ident->di_ctfp,
     VAR_7->dn_ident->di_type, VAR_6,
     &VAR_11);

 return (VAR_13);
}
