
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ u_int ;
struct TYPE_5__ {scalar_t__ ks_ndata; int ks_sysctl_root; int ks_sysctl_ctx; TYPE_2__* ks_data; } ;
typedef TYPE_1__ kstat_t ;
struct TYPE_6__ {scalar_t__ data_type; int desc; int name; } ;
typedef TYPE_2__ kstat_named_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int,char*) ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int *,int ,int ,int ,int,TYPE_2__*,int,int ,char*,int ) ;
 int FUNC_2 (int ) ;
 int VAR_4 ;

void
FUNC_3(kstat_t *VAR_5)
{
 kstat_named_t *VAR_6;
 u_int VAR_7;

 VAR_6 = VAR_5->ks_data;
 for (VAR_7 = 0; VAR_7 < VAR_5->ks_ndata; VAR_7++, VAR_6++) {
  FUNC_0(VAR_6->data_type == VAR_2,
      ("data_type=%d", VAR_6->data_type));
  FUNC_1(&VAR_5->ks_sysctl_ctx,
      FUNC_2(VAR_5->ks_sysctl_root), VAR_3, VAR_6->name,
      VAR_1 | VAR_0, VAR_6, sizeof(*VAR_6),
      VAR_4, "QU", VAR_6->desc);
 }
}
