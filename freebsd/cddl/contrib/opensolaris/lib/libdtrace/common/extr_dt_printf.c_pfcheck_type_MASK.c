
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int dt_pfargv_t ;
struct TYPE_7__ {TYPE_1__* pfd_conv; } ;
typedef TYPE_2__ dt_pfargd_t ;
struct TYPE_8__ {int dn_type; int dn_ctfp; } ;
typedef TYPE_3__ dt_node_t ;
struct TYPE_6__ {int pfc_dtype; int pfc_dctfp; } ;


 int FUNC_0 (int ,int ,int ,int ) ;
 int FUNC_1 (int ,int ) ;

__attribute__((used)) static int
FUNC_2(dt_pfargv_t *VAR_0, dt_pfargd_t *VAR_1, dt_node_t *VAR_2)
{
 return (FUNC_0(VAR_2->dn_ctfp, FUNC_1(VAR_2->dn_ctfp,
     VAR_2->dn_type), VAR_1->pfd_conv->pfc_dctfp, VAR_1->pfd_conv->pfc_dtype));
}
