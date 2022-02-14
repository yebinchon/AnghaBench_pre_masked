
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int dtrace_hdl_t ;
struct TYPE_5__ {int dtdt_size; scalar_t__ dtdt_pad; int dtdt_flags; int dtdt_ckind; int dtdt_kind; } ;
typedef TYPE_1__ dtrace_diftype_t ;
struct TYPE_6__ {scalar_t__ dn_ctfp; scalar_t__ dn_type; int dn_flags; } ;
typedef TYPE_2__ dt_node_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (int *) ;
 int FUNC_2 (scalar_t__,int ) ;
 int FUNC_3 (scalar_t__,scalar_t__) ;
 int FUNC_4 (scalar_t__,scalar_t__) ;

void
FUNC_5(dtrace_hdl_t *VAR_7, const dt_node_t *VAR_8, dtrace_diftype_t *VAR_9)
{
 if (VAR_8->dn_ctfp == FUNC_0(VAR_7) &&
     VAR_8->dn_type == FUNC_1(VAR_7)) {
  VAR_9->dtdt_kind = VAR_4;
  VAR_9->dtdt_ckind = VAR_0;
 } else {
  VAR_9->dtdt_kind = VAR_3;
  VAR_9->dtdt_ckind = FUNC_2(VAR_8->dn_ctfp,
      FUNC_3(VAR_8->dn_ctfp, VAR_8->dn_type));
 }

 VAR_9->dtdt_flags = (VAR_8->dn_flags & VAR_5) ?
     (VAR_8->dn_flags & VAR_6) ? VAR_2 :
     VAR_1 : 0;
 VAR_9->dtdt_pad = 0;
 VAR_9->dtdt_size = FUNC_4(VAR_8->dn_ctfp, VAR_8->dn_type);
}
