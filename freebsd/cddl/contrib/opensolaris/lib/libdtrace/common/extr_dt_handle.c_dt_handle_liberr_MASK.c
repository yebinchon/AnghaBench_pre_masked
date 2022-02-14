
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_5__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_11__ {char const* dtpd_provider; char const* dtpd_mod; char const* dtpd_name; char const* dtpd_func; int dtpd_id; } ;
typedef TYPE_2__ dtrace_probedesc_t ;
struct TYPE_12__ {TYPE_1__* dtpda_edesc; int dtpda_cpu; TYPE_2__* dtpda_pdesc; } ;
typedef TYPE_3__ dtrace_probedata_t ;
struct TYPE_13__ {scalar_t__ (* dt_errhdlr ) (TYPE_5__*,int ) ;int dt_errarg; } ;
typedef TYPE_4__ dtrace_hdl_t ;
struct TYPE_14__ {int dteda_action; int dteda_offset; char* dteda_msg; scalar_t__ dteda_addr; int dteda_fault; int dteda_cpu; TYPE_2__* dteda_pdesc; TYPE_1__* dteda_edesc; } ;
typedef TYPE_5__ dtrace_errdata_t ;
struct TYPE_10__ {int dtepd_epid; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 char* FUNC_0 (int) ;
 int FUNC_1 (TYPE_4__*,int ) ;
 int FUNC_2 (char*,int,char*,int,int,char const*,char const*,char const*,char const*,char const*) ;
 int const FUNC_3 (char const*) ;
 scalar_t__ FUNC_4 (TYPE_5__*,int ) ;

int
FUNC_5(dtrace_hdl_t *VAR_3, const dtrace_probedata_t *VAR_4,
    const char *VAR_5)
{
 dtrace_probedesc_t *VAR_6 = VAR_4->dtpda_pdesc;
 dtrace_errdata_t VAR_7;
 const int VAR_8 = 80;
 char *VAR_9;
 int VAR_10;

 VAR_7.dteda_edesc = VAR_4->dtpda_edesc;
 VAR_7.dteda_pdesc = VAR_6;
 VAR_7.dteda_cpu = VAR_4->dtpda_cpu;
 VAR_7.dteda_action = -1;
 VAR_7.dteda_offset = -1;
 VAR_7.dteda_fault = VAR_0;
 VAR_7.dteda_addr = 0;

 VAR_10 = FUNC_3(VAR_5) +
     FUNC_3(VAR_6->dtpd_provider) + FUNC_3(VAR_6->dtpd_mod) +
     FUNC_3(VAR_6->dtpd_name) + FUNC_3(VAR_6->dtpd_func) +
     VAR_8;

 VAR_9 = FUNC_0(VAR_10);

 (void) FUNC_2(VAR_9, VAR_10, "error on enabled probe ID %u "
     "(ID %u: %s:%s:%s:%s): %s\n",
     VAR_4->dtpda_edesc->dtepd_epid,
     VAR_6->dtpd_id, VAR_6->dtpd_provider,
     VAR_6->dtpd_mod, VAR_6->dtpd_func,
     VAR_6->dtpd_name, VAR_5);

 VAR_7.dteda_msg = VAR_9;

 if (VAR_3->dt_errhdlr == ((void*)0))
  return (FUNC_1(VAR_3, VAR_2));

 if ((*VAR_3->dt_errhdlr)(&VAR_7, VAR_3->dt_errarg) == VAR_1)
  return (FUNC_1(VAR_3, VAR_2));

 return (0);
}
