
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_5__ ;
typedef struct TYPE_17__ TYPE_4__ ;
typedef struct TYPE_16__ TYPE_3__ ;
typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;


typedef int uint_t ;
typedef int n2 ;
typedef int n1 ;
struct TYPE_15__ {int dx_dst_base; int * dx_dst_ctfp; } ;
typedef TYPE_2__ dt_xlator_t ;
struct TYPE_16__ {int dn_flags; TYPE_1__* dn_ident; int dn_type; int * dn_ctfp; } ;
typedef TYPE_3__ dt_node_t ;
struct TYPE_17__ {TYPE_3__* din_root; } ;
typedef TYPE_4__ dt_idnode_t ;
struct TYPE_18__ {TYPE_2__* di_data; } ;
typedef TYPE_5__ dt_ident_t ;
typedef int ctf_id_t ;
typedef int ctf_file_t ;
struct TYPE_14__ {int di_flags; int di_name; TYPE_4__* di_iarg; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int *,int ,int *,int ) ;
 scalar_t__ FUNC_2 (int *,int ) ;
 int FUNC_3 (int *,int ) ;
 int FUNC_4 (int *,int ) ;
 int FUNC_5 (TYPE_3__*,int ,char*,int ,int ,int ) ;
 scalar_t__ FUNC_6 (TYPE_3__*,TYPE_3__*) ;
 TYPE_5__* FUNC_7 (TYPE_3__*,int ) ;
 int FUNC_8 (TYPE_3__*,char*,int) ;
 int FUNC_9 (int *,int ,char*,int) ;

__attribute__((used)) static dt_node_t *
FUNC_10(dt_node_t *VAR_7, uint_t VAR_8)
{
 dt_idnode_t *VAR_9 = VAR_7->dn_ident->di_iarg;
 dt_ident_t *VAR_10;

 char VAR_11[VAR_5];
 char VAR_12[VAR_5];

 FUNC_0(VAR_7->dn_ident->di_flags & VAR_3);
 FUNC_0(VAR_9->din_root->dn_flags & VAR_4);






 if ((VAR_10 = FUNC_7(VAR_9->din_root, VAR_2)) != ((void*)0) ||
     (VAR_10 = FUNC_7(VAR_9->din_root, VAR_1)) != ((void*)0)) {

  ctf_file_t *VAR_13 = VAR_7->dn_ctfp;
  ctf_id_t VAR_14 = FUNC_4(VAR_13, VAR_7->dn_type);

  dt_xlator_t *VAR_15 = VAR_10->di_data;
  ctf_file_t *VAR_16 = VAR_15->dx_dst_ctfp;
  ctf_id_t VAR_17 = VAR_15->dx_dst_base;

  if (FUNC_2(VAR_13, VAR_14) == VAR_0) {
   VAR_14 = FUNC_3(VAR_13, VAR_14);
   VAR_14 = FUNC_4(VAR_13, VAR_14);
  }

  if (FUNC_1(VAR_13, VAR_14, VAR_16, VAR_17) == 0) {
   FUNC_5(VAR_7, VAR_6,
       "inline %s definition uses incompatible types: "
       "\"%s\" = \"%s\"\n", VAR_7->dn_ident->di_name,
       FUNC_9(VAR_13, VAR_14, VAR_11, sizeof (VAR_11)),
       FUNC_9(VAR_16, VAR_17, VAR_12, sizeof (VAR_12)));
  }

 } else if (FUNC_6(VAR_7, VAR_9->din_root) == 0) {
  FUNC_5(VAR_7, VAR_6,
      "inline %s definition uses incompatible types: "
      "\"%s\" = \"%s\"\n", VAR_7->dn_ident->di_name,
      FUNC_8(VAR_7, VAR_11, sizeof (VAR_11)),
      FUNC_8(VAR_9->din_root, VAR_12, sizeof (VAR_12)));
 }

 return (VAR_7);
}
