
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_11__ {int dtp_argc; TYPE_1__* dtp_argv; } ;
typedef TYPE_2__ dtrace_probeinfo_t ;
struct TYPE_12__ {char* dtpd_provider; char* dtpd_mod; char* dtpd_func; char* dtpd_name; int dtpd_id; } ;
typedef TYPE_3__ dtrace_probedesc_t ;
typedef int dtrace_hdl_t ;
struct TYPE_13__ {int dtargd_id; int dtargd_ndx; char* dtargd_native; char* dtargd_xlate; } ;
typedef TYPE_4__ dtrace_argdesc_t ;
typedef int buf ;
struct TYPE_10__ {scalar_t__ dtt_type; int dtt_ctfp; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (TYPE_4__*,int) ;
 char* FUNC_1 (int ,scalar_t__,char*,int) ;
 scalar_t__ FUNC_2 (int *,TYPE_3__ const*,TYPE_2__*) ;
 int FUNC_3 (int ) ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 int FUNC_4 (int ,int ,TYPE_4__*) ;
 int FUNC_5 (char*,...) ;
 int VAR_8 ;

__attribute__((used)) static int
FUNC_6(dtrace_hdl_t *VAR_9, const dtrace_probedesc_t *VAR_10, void *VAR_11)
{
 dtrace_probeinfo_t VAR_12;
 dtrace_argdesc_t VAR_13;
 char VAR_14[VAR_0];
 int VAR_15;

 (void) FUNC_5("\r%6d", ++VAR_3);
 (void) FUNC_3(VAR_8);

 if (FUNC_2(VAR_9, VAR_10, &VAR_12) != 0) {
  (void) FUNC_5(" failed to get probe info for "
      "%s:%s:%s:%s [%d]\n", VAR_10->dtpd_provider, VAR_10->dtpd_mod,
      VAR_10->dtpd_func, VAR_10->dtpd_name, VAR_10->dtpd_id);
  VAR_5++;
  return (0);
 }

 for (VAR_15 = 0; VAR_15 < VAR_12.dtp_argc; VAR_15++) {
  if (VAR_12.dtp_argv[VAR_15].dtt_type == VAR_1) {
   FUNC_0(&VAR_13, sizeof (dtrace_argdesc_t));
   VAR_13.dtargd_id = VAR_10->dtpd_id;
   VAR_13.dtargd_ndx = VAR_15;
   (void) FUNC_4(VAR_6, VAR_2, &VAR_13);

   (void) FUNC_5(" failed to get types for args[%d] "
       "of %s:%s:%s:%s [%d]: <%s> -> <%s>\n", VAR_15,
       VAR_10->dtpd_provider, VAR_10->dtpd_mod, VAR_10->dtpd_func,
       VAR_10->dtpd_name, VAR_10->dtpd_id,
       VAR_13.dtargd_native, VAR_13.dtargd_xlate);

   VAR_5++;

   if (VAR_4)
    return (-1);

  } else if (VAR_7) {
   (void) FUNC_5("%d args[%d] : %s\n", VAR_10->dtpd_id, VAR_15,
       FUNC_1(VAR_12.dtp_argv[VAR_15].dtt_ctfp,
       VAR_12.dtp_argv[VAR_15].dtt_type, VAR_14, sizeof (VAR_14)));
  }
 }

 return (0);
}
