
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_25__ TYPE_7__ ;
typedef struct TYPE_24__ TYPE_6__ ;
typedef struct TYPE_23__ TYPE_5__ ;
typedef struct TYPE_22__ TYPE_4__ ;
typedef struct TYPE_21__ TYPE_3__ ;
typedef struct TYPE_20__ TYPE_2__ ;
typedef struct TYPE_19__ TYPE_1__ ;


typedef scalar_t__ uint_t ;
typedef scalar_t__ ssize_t ;
typedef int n ;
struct TYPE_20__ {scalar_t__ dtt_ctfp; scalar_t__ dtt_type; } ;
typedef TYPE_2__ dtrace_typeinfo_t ;
struct TYPE_21__ {scalar_t__ ds_ctfp; int ds_type; } ;
typedef TYPE_3__ dt_scope_t ;
struct TYPE_22__ {scalar_t__ dn_kind; scalar_t__ dn_value; } ;
typedef TYPE_4__ dt_node_t ;
struct TYPE_23__ {scalar_t__ dd_kind; int * dd_name; } ;
typedef TYPE_5__ dt_decl_t ;
typedef int ctf_id_t ;
struct TYPE_24__ {scalar_t__ cte_bits; scalar_t__ cte_offset; } ;
typedef TYPE_6__ ctf_encoding_t ;
struct TYPE_19__ {char* ds_ident; TYPE_5__* ds_decl; TYPE_3__* ds_next; } ;
struct TYPE_25__ {TYPE_1__ pcb_dstack; int pcb_hdl; int pcb_jmpbuf; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 scalar_t__ FUNC_2 (TYPE_6__) ;
 scalar_t__ FUNC_3 (scalar_t__,int ,int ,TYPE_6__*) ;
 scalar_t__ FUNC_4 (scalar_t__,int ,char*,scalar_t__) ;
 scalar_t__ FUNC_5 (scalar_t__,scalar_t__,scalar_t__) ;
 char* FUNC_6 (int ) ;
 int FUNC_7 (scalar_t__) ;
 scalar_t__ FUNC_8 (scalar_t__) ;
 scalar_t__ FUNC_9 (scalar_t__,int ,TYPE_6__*) ;
 scalar_t__ FUNC_10 (scalar_t__,int ) ;
 int FUNC_11 (scalar_t__,scalar_t__,char*,int) ;
 int FUNC_12 (scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_13 (scalar_t__,int ) ;
 scalar_t__ FUNC_14 (scalar_t__) ;
 int FUNC_15 (TYPE_5__*) ;
 int FUNC_16 () ;
 scalar_t__ FUNC_17 (TYPE_5__*,TYPE_2__*) ;
 TYPE_4__* FUNC_18 (TYPE_4__*,int ) ;
 int FUNC_19 (TYPE_4__*) ;
 scalar_t__ FUNC_20 (TYPE_4__*) ;
 char const* FUNC_21 (scalar_t__,scalar_t__,char*,int) ;
 int FUNC_22 (char*) ;
 int FUNC_23 (int ,int ) ;
 int * FUNC_24 (char*,char) ;
 int FUNC_25 (int ,char*,...) ;
 TYPE_7__* VAR_22 ;

void
FUNC_26(dt_node_t *VAR_23)
{
 dt_scope_t *VAR_24 = VAR_22->pcb_dstack.ds_next;
 dt_decl_t *VAR_25 = VAR_22->pcb_dstack.ds_decl;
 char *VAR_26 = VAR_22->pcb_dstack.ds_ident;

 const char *VAR_27 = VAR_26 ? VAR_26 : "(anon)";
 char VAR_28[VAR_9];

 dtrace_typeinfo_t VAR_29;
 ctf_encoding_t VAR_30;
 ctf_id_t VAR_31;
 uint_t VAR_32;
 ssize_t VAR_33;

 if (VAR_24 == ((void*)0))
  FUNC_23(VAR_22->pcb_jmpbuf, VAR_21);

 if (VAR_25 == ((void*)0))
  FUNC_23(VAR_22->pcb_jmpbuf, VAR_20);

 if (VAR_23 == ((void*)0) && VAR_26 == ((void*)0))
  FUNC_25(VAR_15, "member declaration requires a name\n");

 if (VAR_25->dd_kind == VAR_6 && VAR_25->dd_name == ((void*)0)) {
  VAR_25->dd_kind = VAR_3;
  (void) FUNC_15(VAR_25);
 }

 if (FUNC_17(VAR_25, &VAR_29) != 0)
  FUNC_23(VAR_22->pcb_jmpbuf, VAR_19);

 if (VAR_26 != ((void*)0) && FUNC_24(VAR_26, '`') != ((void*)0)) {
  FUNC_25(VAR_16, "D scoping operator may not be used "
      "in a member name (%s)\n", VAR_26);
 }

 if (VAR_29.dtt_ctfp == FUNC_0(VAR_22->pcb_hdl) &&
     VAR_29.dtt_type == FUNC_1(VAR_22->pcb_hdl)) {
  FUNC_25(VAR_13,
      "cannot have dynamic member: %s\n", VAR_26);
 }

 VAR_31 = FUNC_12(VAR_29.dtt_ctfp, VAR_29.dtt_type);
 VAR_32 = FUNC_10(VAR_29.dtt_ctfp, VAR_31);
 VAR_33 = FUNC_13(VAR_29.dtt_ctfp, VAR_31);

 if (VAR_32 == VAR_2 || ((VAR_32 == VAR_4 ||
     VAR_32 == VAR_5) && VAR_33 == 0)) {
  FUNC_25(VAR_14, "incomplete struct/union/enum %s: "
      "%s\n", FUNC_21(VAR_29.dtt_ctfp, VAR_29.dtt_type,
      VAR_28, sizeof (VAR_28)), VAR_26);
 }

 if (VAR_33 == 0)
  FUNC_25(VAR_17, "cannot have void member: %s\n", VAR_26);







 if (VAR_23 != ((void*)0)) {
  VAR_23 = FUNC_18(VAR_23, VAR_7);







  if (VAR_26 == ((void*)0) && VAR_23->dn_kind == VAR_8 &&
      VAR_23->dn_value == 0) {
   FUNC_19(VAR_23);
   goto done;
  }

  if (FUNC_20(VAR_23) == 0) {
   FUNC_25(VAR_10, "positive integral constant "
       "expression expected as bit-field size\n");
  }

  if (FUNC_10(VAR_29.dtt_ctfp, VAR_31) != VAR_3 ||
      FUNC_9(VAR_29.dtt_ctfp, VAR_31, &VAR_30) == VAR_1 ||
      FUNC_2(VAR_30)) {
   FUNC_25(VAR_12, "invalid type for "
       "bit-field: %s\n", VAR_27);
  }

  if (VAR_23->dn_value > VAR_30.cte_bits) {
   FUNC_25(VAR_11, "bit-field too big "
       "for type: %s\n", VAR_27);
  }

  VAR_30.cte_offset = 0;
  VAR_30.cte_bits = (uint_t)VAR_23->dn_value;

  VAR_29.dtt_type = FUNC_3(VAR_24->ds_ctfp,
      VAR_0, FUNC_11(VAR_29.dtt_ctfp,
      VAR_29.dtt_type, VAR_28, sizeof (VAR_28)), &VAR_30);

  if (VAR_29.dtt_type == VAR_1 ||
      FUNC_14(VAR_24->ds_ctfp) == VAR_1) {
   FUNC_25(VAR_18, "failed to create type for "
       "member '%s': %s\n", VAR_27,
       FUNC_6(FUNC_7(VAR_24->ds_ctfp)));
  }

  VAR_29.dtt_ctfp = VAR_24->ds_ctfp;
  FUNC_19(VAR_23);
 }







 if (VAR_29.dtt_ctfp != VAR_24->ds_ctfp &&
     VAR_29.dtt_ctfp != FUNC_8(VAR_24->ds_ctfp)) {

  VAR_29.dtt_type = FUNC_5(VAR_24->ds_ctfp,
      VAR_29.dtt_ctfp, VAR_29.dtt_type);
  VAR_29.dtt_ctfp = VAR_24->ds_ctfp;

  if (VAR_29.dtt_type == VAR_1 ||
      FUNC_14(VAR_29.dtt_ctfp) == VAR_1) {
   FUNC_25(VAR_18, "failed to copy type of '%s': %s\n",
       VAR_27, FUNC_6(FUNC_7(VAR_29.dtt_ctfp)));
  }
 }

 if (FUNC_4(VAR_24->ds_ctfp, VAR_24->ds_type,
     VAR_26, VAR_29.dtt_type) == VAR_1) {
  FUNC_25(VAR_18, "failed to define member '%s': %s\n",
      VAR_27, FUNC_6(FUNC_7(VAR_24->ds_ctfp)));
 }

done:
 FUNC_22(VAR_26);
 VAR_22->pcb_dstack.ds_ident = ((void*)0);
 FUNC_16();
}
