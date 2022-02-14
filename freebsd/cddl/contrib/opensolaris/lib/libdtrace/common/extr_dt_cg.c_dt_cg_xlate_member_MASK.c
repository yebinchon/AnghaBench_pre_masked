
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_8__ ;
typedef struct TYPE_15__ TYPE_5__ ;
typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


typedef size_t ulong_t ;
typedef int uint32_t ;
struct TYPE_12__ {int dtxl_dreg; scalar_t__ dtxl_sreg; int * dtxl_drp; int * dtxl_dlp; TYPE_5__* dtxl_idp; } ;
typedef TYPE_2__ dt_xlmemb_t ;
struct TYPE_13__ {TYPE_1__* dx_ident; } ;
typedef TYPE_3__ dt_xlator_t ;
typedef int dt_regset_t ;
struct TYPE_14__ {TYPE_8__* dn_membexpr; } ;
typedef TYPE_4__ dt_node_t ;
typedef int dt_irlist_t ;
struct TYPE_15__ {TYPE_3__* di_data; } ;
typedef TYPE_5__ dt_ident_t ;
typedef int ctf_id_t ;
struct TYPE_16__ {int dn_reg; int dn_type; int dn_ctfp; } ;
struct TYPE_11__ {scalar_t__ di_id; int di_flags; } ;


 int FUNC_0 (int ,int) ;
 int FUNC_1 (int,int,int) ;
 int VAR_0 ;
 int FUNC_2 (int ,int ,int,int) ;
 int FUNC_3 (int ,int ,int ,int) ;
 int FUNC_4 (int ,int,int) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 size_t VAR_13 ;
 size_t FUNC_5 (int ,int ) ;
 int FUNC_6 (TYPE_8__*,int *,int *) ;
 int FUNC_7 (int ,int ) ;
 int FUNC_8 (int *,int,size_t) ;
 int FUNC_9 (int *,int ) ;
 scalar_t__ FUNC_10 (TYPE_8__*) ;
 scalar_t__ FUNC_11 (TYPE_8__*) ;
 int FUNC_12 (int *) ;
 int FUNC_13 (int *,int) ;
 TYPE_4__* FUNC_14 (TYPE_3__*,char const*) ;
 int FUNC_15 (int ,char*,size_t) ;

__attribute__((used)) static int
FUNC_16(const char *VAR_14, ctf_id_t VAR_15, ulong_t VAR_16, void *VAR_17)
{
 dt_xlmemb_t *VAR_18 = VAR_17;
 dt_ident_t *VAR_19 = VAR_18->dtxl_idp;
 dt_irlist_t *VAR_20 = VAR_18->dtxl_dlp;
 dt_regset_t *VAR_21 = VAR_18->dtxl_drp;

 dt_node_t *VAR_22;
 dt_xlator_t *VAR_23;

 int VAR_24, VAR_25;
 uint32_t VAR_26;
 size_t VAR_27;


 VAR_23 = VAR_19->di_data;
 VAR_22 = FUNC_14(VAR_23, VAR_14);


 if (VAR_22 == ((void*)0))
  return (0);

 VAR_23->dx_ident->di_flags |= VAR_10;
 VAR_23->dx_ident->di_id = VAR_18->dtxl_sreg;

 FUNC_6(VAR_22->dn_membexpr, VAR_20, VAR_21);

 VAR_23->dx_ident->di_flags &= ~VAR_10;
 VAR_23->dx_ident->di_id = 0;

 VAR_25 = VAR_22->dn_membexpr->dn_reg;


 VAR_24 = FUNC_12(VAR_21);

 FUNC_8(VAR_20, VAR_24, VAR_16 / VAR_13);
 VAR_26 = FUNC_2(VAR_1, VAR_18->dtxl_dreg, VAR_24, VAR_24);
 FUNC_9(VAR_20, FUNC_7(VAR_11, VAR_26));

 VAR_27 = FUNC_5(VAR_22->dn_membexpr->dn_ctfp,
     VAR_22->dn_membexpr->dn_type);
 if (FUNC_10(VAR_22->dn_membexpr)) {



  switch (VAR_27) {
  case 1:
   VAR_26 = FUNC_4(VAR_3, VAR_25, VAR_24);
   break;
  case 2:
   VAR_26 = FUNC_4(VAR_4, VAR_25, VAR_24);
   break;
  case 4:
   VAR_26 = FUNC_4(VAR_5, VAR_25, VAR_24);
   break;
  case 8:
   VAR_26 = FUNC_4(VAR_6, VAR_25, VAR_24);
   break;
  default:
   FUNC_15(VAR_12, "internal error -- unexpected "
       "size: %lu\n", (ulong_t)VAR_27);
  }

  FUNC_9(VAR_20, FUNC_7(VAR_11, VAR_26));

 } else if (FUNC_11(VAR_22->dn_membexpr)) {
  int VAR_28;




  VAR_28 = FUNC_12(VAR_21);
  FUNC_8(VAR_20, VAR_28, VAR_27);
  VAR_26 = FUNC_1(VAR_25, VAR_28, VAR_24);
  FUNC_9(VAR_20, FUNC_7(VAR_11, VAR_26));
  FUNC_13(VAR_21, VAR_28);
 } else {
  int VAR_29;




  VAR_29 = FUNC_12(VAR_21);
  FUNC_8(VAR_20, VAR_29, VAR_27);
  FUNC_9(VAR_20,
      FUNC_7(VAR_11, VAR_0));
  VAR_26 = FUNC_3(VAR_2, VAR_9,
      VAR_7, VAR_25);
  FUNC_9(VAR_20, FUNC_7(VAR_11, VAR_26));
  VAR_26 = FUNC_3(VAR_2, VAR_9,
      VAR_7, VAR_24);
  FUNC_9(VAR_20, FUNC_7(VAR_11, VAR_26));
  VAR_26 = FUNC_3(VAR_2, VAR_9,
      VAR_7, VAR_29);
  FUNC_9(VAR_20, FUNC_7(VAR_11, VAR_26));
  VAR_26 = FUNC_0(VAR_8, VAR_29);
  FUNC_9(VAR_20, FUNC_7(VAR_11, VAR_26));
  FUNC_13(VAR_21, VAR_29);
 }

 FUNC_13(VAR_21, VAR_24);
 FUNC_13(VAR_21, VAR_25);

 return (0);
}
