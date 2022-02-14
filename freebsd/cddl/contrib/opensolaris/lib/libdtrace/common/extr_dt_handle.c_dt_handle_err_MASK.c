
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_5__ ;
typedef struct TYPE_17__ TYPE_4__ ;
typedef struct TYPE_16__ TYPE_3__ ;
typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;


typedef int where ;
typedef int uint32_t ;
typedef int u_longlong_t ;
typedef int offinfo ;
struct TYPE_14__ {char const* dtpd_provider; char const* dtpd_name; char const* dtpd_mod; char const* dtpd_func; int dtpd_id; } ;
typedef TYPE_1__ dtrace_probedesc_t ;
struct TYPE_15__ {int dtpda_cpu; TYPE_1__* dtpda_pdesc; TYPE_5__* dtpda_edesc; } ;
typedef TYPE_2__ dtrace_probedata_t ;
struct TYPE_16__ {scalar_t__ (* dt_errhdlr ) (TYPE_4__*,int ) ;int dt_errarg; } ;
typedef TYPE_3__ dtrace_hdl_t ;
struct TYPE_17__ {int dteda_action; int dteda_offset; int dteda_fault; char* dteda_msg; scalar_t__ dteda_addr; int dteda_cpu; TYPE_1__* dteda_pdesc; TYPE_5__* dteda_edesc; } ;
typedef TYPE_4__ dtrace_errdata_t ;
struct TYPE_18__ {scalar_t__ dtepd_uarg; int dtepd_nrecs; } ;
typedef TYPE_5__ dtrace_eprobedesc_t ;
typedef int dtrace_epid_t ;





 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (int ,int) ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_1 (int) ;
 int FUNC_2 (int) ;
 scalar_t__ FUNC_3 (TYPE_3__*,int,TYPE_5__**,TYPE_1__**) ;
 int FUNC_4 (TYPE_3__*,int ) ;
 char* FUNC_5 (TYPE_3__*,int) ;
 int FUNC_6 (char*,int,char*,int,int,char const*,char const*,char const*,char const*,char*,char*,char*,char*) ;
 int FUNC_7 (char*,char*,...) ;
 scalar_t__ FUNC_8 (char const*,char*) ;
 int FUNC_9 (char const*) ;
 scalar_t__ FUNC_10 (TYPE_4__*,int ) ;
 int VAR_4 ;

__attribute__((used)) static int
FUNC_11(dtrace_hdl_t *VAR_5, dtrace_probedata_t *VAR_6)
{
 dtrace_eprobedesc_t *VAR_7 = VAR_6->dtpda_edesc, *VAR_8;
 dtrace_probedesc_t *VAR_9 = VAR_6->dtpda_pdesc, *VAR_10;
 dtrace_errdata_t VAR_11;
 dtrace_epid_t VAR_12;

 char VAR_13[30];
 char VAR_14[30];
 char VAR_15[30];
 const int VAR_16 = 80;
 const char *VAR_17;
 char *VAR_18;
 int VAR_19;

 FUNC_2(VAR_7->dtepd_uarg == VAR_1);

 if (VAR_7->dtepd_nrecs != 5 || FUNC_8(VAR_9->dtpd_provider, "dtrace") != 0 ||
     FUNC_8(VAR_9->dtpd_name, "ERROR") != 0)
  return (FUNC_4(VAR_5, VAR_2));





 VAR_12 = (uint32_t)FUNC_0(VAR_4, 0);

 if (FUNC_3(VAR_5, VAR_12, &VAR_8, &VAR_10) != 0)
  return (FUNC_4(VAR_5, VAR_2));

 VAR_11.dteda_edesc = VAR_8;
 VAR_11.dteda_pdesc = VAR_10;
 VAR_11.dteda_cpu = VAR_6->dtpda_cpu;
 VAR_11.dteda_action = (int)FUNC_0(VAR_4, 1);
 VAR_11.dteda_offset = (int)FUNC_0(VAR_4, 2);
 VAR_11.dteda_fault = (int)FUNC_0(VAR_4, 3);
 VAR_11.dteda_addr = FUNC_0(VAR_4, 4);

 VAR_17 = FUNC_5(VAR_5, VAR_11.dteda_fault);
 VAR_19 = sizeof (VAR_13) + sizeof (VAR_15) + FUNC_9(VAR_17) +
     FUNC_9(VAR_10->dtpd_provider) + FUNC_9(VAR_10->dtpd_mod) +
     FUNC_9(VAR_10->dtpd_name) + FUNC_9(VAR_10->dtpd_func) +
     VAR_16;

 VAR_18 = (char *)FUNC_1(VAR_19);

 if (VAR_11.dteda_action == 0) {
  (void) FUNC_7(VAR_13, "predicate");
 } else {
  (void) FUNC_7(VAR_13, "action #%d", VAR_11.dteda_action);
 }

 if (VAR_11.dteda_offset != -1) {
  (void) FUNC_7(VAR_15, " at DIF offset %d", VAR_11.dteda_offset);
 } else {
  VAR_15[0] = 0;
 }

 switch (VAR_11.dteda_fault) {
 case 130:
 case 129:
 case 128:
  (void) FUNC_7(VAR_14, " (0x%llx)",
      (u_longlong_t)VAR_11.dteda_addr);
  break;

 default:
  VAR_14[0] = 0;
 }

 (void) FUNC_6(VAR_18, VAR_19, "error on enabled probe ID %u "
     "(ID %u: %s:%s:%s:%s): %s%s in %s%s\n",
     VAR_12, VAR_10->dtpd_id, VAR_10->dtpd_provider,
     VAR_10->dtpd_mod, VAR_10->dtpd_func,
     VAR_10->dtpd_name, FUNC_5(VAR_5, VAR_11.dteda_fault),
     VAR_14, VAR_13, VAR_15);

 VAR_11.dteda_msg = VAR_18;

 if (VAR_5->dt_errhdlr == ((void*)0))
  return (FUNC_4(VAR_5, VAR_3));

 if ((*VAR_5->dt_errhdlr)(&VAR_11, VAR_5->dt_errarg) == VAR_0)
  return (FUNC_4(VAR_5, VAR_3));

 return (0);
}
