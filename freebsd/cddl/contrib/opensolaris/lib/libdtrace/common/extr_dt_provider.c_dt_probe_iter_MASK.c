
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int pr_name; } ;
typedef TYPE_1__ dt_probe_t ;
struct TYPE_10__ {int dtpd_id; int dtpd_name; } ;
struct TYPE_8__ {int (* pit_func ) (int ,TYPE_4__*,int ) ;int pit_arg; TYPE_4__ pit_desc; int pit_hdl; int pit_matches; int pit_pat; } ;
typedef TYPE_2__ dt_probe_iter_t ;
typedef int dt_idhash_t ;
struct TYPE_9__ {int di_id; TYPE_1__* di_data; } ;
typedef TYPE_3__ dt_ident_t ;


 int VAR_0 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ,int ,int ) ;
 int FUNC_2 (int ,TYPE_4__*,int ) ;

__attribute__((used)) static int
FUNC_3(dt_idhash_t *VAR_1, dt_ident_t *VAR_2, dt_probe_iter_t *VAR_3)
{
 const dt_probe_t *VAR_4 = VAR_2->di_data;

 if (!FUNC_0(VAR_4->pr_name, VAR_3->pit_pat))
  return (0);

 (void) FUNC_1(VAR_3->pit_desc.dtpd_name, VAR_4->pr_name, VAR_0);
 VAR_3->pit_desc.dtpd_id = VAR_2->di_id;
 VAR_3->pit_matches++;

 return (VAR_3->pit_func(VAR_3->pit_hdl, &VAR_3->pit_desc, VAR_3->pit_arg));
}
