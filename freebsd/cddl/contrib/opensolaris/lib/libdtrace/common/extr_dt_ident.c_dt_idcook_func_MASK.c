
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_8__ ;
typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


struct TYPE_12__ {int dtt_type; int dtt_ctfp; } ;
typedef TYPE_1__ dtrace_typeinfo_t ;
typedef int dtrace_hdl_t ;
typedef int dt_node_t ;
struct TYPE_13__ {int dis_varargs; int dis_optargs; int dis_argc; TYPE_8__* dis_args; scalar_t__ dis_auxinfo; } ;
typedef TYPE_2__ dt_idsig_t ;
struct TYPE_14__ {char* di_iarg; scalar_t__ di_kind; int di_name; int di_type; int di_ctfp; TYPE_2__* di_data; } ;
typedef TYPE_3__ dt_ident_t ;
struct TYPE_16__ {int dn_type; int * dn_ctfp; } ;
struct TYPE_15__ {int pcb_jmpbuf; int * pcb_hdl; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 char* FUNC_2 (int) ;
 int FUNC_3 (int ) ;
 TYPE_8__* FUNC_4 (int,int) ;
 int FUNC_5 (int *,TYPE_3__*,int,int *,char*,char*) ;
 int FUNC_6 (TYPE_8__*,int ,int ,int ) ;
 int FUNC_7 (char*,TYPE_1__*) ;
 int FUNC_8 (int *,int ) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (TYPE_2__*) ;
 scalar_t__ FUNC_11 (char) ;
 int FUNC_12 (int ,int ) ;
 TYPE_2__* FUNC_13 (int) ;
 char* FUNC_14 (char*,char) ;
 scalar_t__ FUNC_15 (char*,char*) ;
 int FUNC_16 (char*,char*) ;
 int FUNC_17 (char*) ;
 char* FUNC_18 (char*,char) ;
 int FUNC_19 (int ,char*,int,...) ;
 TYPE_4__* VAR_5 ;

__attribute__((used)) static void
FUNC_20(dt_node_t *VAR_6, dt_ident_t *VAR_7, int VAR_8, dt_node_t *VAR_9)
{
 if (VAR_7->di_data == ((void*)0)) {
  dtrace_hdl_t *VAR_10 = VAR_5->pcb_hdl;
  dtrace_typeinfo_t VAR_11;
  dt_idsig_t *VAR_12;
  char *VAR_13, *VAR_14, *VAR_15;
  int VAR_16 = 0;

  FUNC_3(VAR_7->di_iarg != ((void*)0));
  VAR_13 = FUNC_2(FUNC_17(VAR_7->di_iarg) + 1);
  (void) FUNC_16(VAR_13, VAR_7->di_iarg);

  if ((VAR_15 = FUNC_18(VAR_13, ')')) != ((void*)0))
   *VAR_15 = '\0';

  if ((VAR_14 = FUNC_14(VAR_13, '(')) != ((void*)0))
   *VAR_14++ = '\0';

  if (VAR_14 == ((void*)0) || VAR_15 == ((void*)0)) {
   FUNC_19(VAR_3, "internal error: malformed entry "
       "for built-in function %s\n", VAR_7->di_name);
  }

  for (VAR_15 = VAR_14; *VAR_15 != '\0'; VAR_15++) {
   if (!FUNC_11(*VAR_15)) {
    VAR_16++;
    break;
   }
  }

  for (VAR_15 = FUNC_14(VAR_15, ','); VAR_15++ != ((void*)0); VAR_16++)
   VAR_15 = FUNC_14(VAR_15, ',');






  if ((VAR_12 = VAR_7->di_data = FUNC_13(sizeof (dt_idsig_t))) == ((void*)0))
   FUNC_12(VAR_5->pcb_jmpbuf, VAR_4);

  VAR_12->dis_varargs = -1;
  VAR_12->dis_optargs = -1;
  VAR_12->dis_argc = VAR_16;
  VAR_12->dis_args = ((void*)0);
  VAR_12->dis_auxinfo = 0;

  if (VAR_16 != 0 && (VAR_12->dis_args = FUNC_4(VAR_16,
      sizeof (dt_node_t))) == ((void*)0)) {
   VAR_7->di_data = ((void*)0);
   FUNC_10(VAR_12);
   FUNC_12(VAR_5->pcb_jmpbuf, VAR_4);
  }

  if (FUNC_7(VAR_13, &VAR_11) == -1) {
   FUNC_19(VAR_3, "failed to resolve type of %s (%s):"
       " %s\n", VAR_7->di_name, VAR_13,
       FUNC_8(VAR_10, FUNC_9(VAR_10)));
  }

  if (VAR_7->di_kind == VAR_2) {
   VAR_7->di_ctfp = FUNC_0(VAR_10);
   VAR_7->di_type = FUNC_1(VAR_10);
  } else {
   VAR_7->di_ctfp = VAR_11.dtt_ctfp;
   VAR_7->di_type = VAR_11.dtt_type;
  }
  for (VAR_16 = 0; VAR_16 < VAR_12->dis_argc; VAR_16++, VAR_14 = VAR_15) {
   while (FUNC_11(*VAR_14))
    VAR_14++;

   if ((VAR_15 = FUNC_14(VAR_14, ',')) == ((void*)0))
    VAR_15 = VAR_14 + FUNC_17(VAR_14);
   else
    *VAR_15++ = '\0';

   if (FUNC_15(VAR_14, "@") == 0 || FUNC_15(VAR_14, "...") == 0) {
    VAR_12->dis_args[VAR_16].dn_ctfp = ((void*)0);
    VAR_12->dis_args[VAR_16].dn_type = VAR_1;
    if (*VAR_14 == '.')
     VAR_12->dis_varargs = VAR_16;
    continue;
   }

   if (*VAR_14 == '[' && VAR_14[FUNC_17(VAR_14) - 1] == ']') {
    if (VAR_12->dis_varargs != -1) {
     FUNC_19(VAR_3, "optional arg#%d "
         "may not follow variable arg#%d\n",
         VAR_16 + 1, VAR_12->dis_varargs + 1);
    }

    if (VAR_12->dis_optargs == -1)
     VAR_12->dis_optargs = VAR_16;

    VAR_14[FUNC_17(VAR_14) - 1] = '\0';
    VAR_14++;
   } else if (VAR_12->dis_optargs != -1) {
    FUNC_19(VAR_3, "required arg#%d may not "
        "follow optional arg#%d\n", VAR_16 + 1,
        VAR_12->dis_optargs + 1);
   }

   if (FUNC_7(VAR_14, &VAR_11) == -1) {
    FUNC_19(VAR_3, "failed to resolve type of "
        "%s arg#%d (%s): %s\n", VAR_7->di_name, VAR_16 + 1,
        VAR_14, FUNC_8(VAR_10, FUNC_9(VAR_10)));
   }

   FUNC_6(&VAR_12->dis_args[VAR_16],
       VAR_11.dtt_ctfp, VAR_11.dtt_type, VAR_0);
  }
 }

 FUNC_5(VAR_6, VAR_7, VAR_8, VAR_9, "", "( )");
}
