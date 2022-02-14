
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_24__ TYPE_6__ ;
typedef struct TYPE_23__ TYPE_5__ ;
typedef struct TYPE_22__ TYPE_4__ ;
typedef struct TYPE_21__ TYPE_3__ ;
typedef struct TYPE_20__ TYPE_2__ ;
typedef struct TYPE_19__ TYPE_1__ ;


typedef int vname ;
typedef int uint_t ;
typedef int uint64_t ;
typedef int n ;
struct TYPE_19__ {int dtt_type; int dtt_ctfp; } ;
typedef TYPE_1__ dtrace_typeinfo_t ;
typedef scalar_t__ dtrace_actkind_t ;
struct TYPE_20__ {scalar_t__ (* pfc_check ) (TYPE_3__*,TYPE_4__*,TYPE_5__*) ;int pfc_tstr; int pfc_name; int pfc_ofmt; int * pfc_print; } ;
typedef TYPE_2__ dt_pfconv_t ;
struct TYPE_21__ {char* pfv_format; int pfv_flags; int pfv_argc; TYPE_4__* pfv_argv; } ;
typedef TYPE_3__ dt_pfargv_t ;
struct TYPE_22__ {int pfd_flags; int pfd_fmt; TYPE_2__* pfd_conv; struct TYPE_22__* pfd_next; } ;
typedef TYPE_4__ dt_pfargd_t ;
struct TYPE_23__ {struct TYPE_23__* dn_list; } ;
typedef TYPE_5__ dt_node_t ;
struct TYPE_24__ {char* di_name; } ;
typedef TYPE_6__ dt_ident_t ;
typedef int aggnode ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int FUNC_0 (TYPE_5__*,int) ;
 scalar_t__ FUNC_1 (TYPE_5__*) ;
 int FUNC_2 (TYPE_5__*,int ,int ,int ) ;
 int FUNC_3 (TYPE_5__*,char*,int) ;
 int FUNC_4 (TYPE_5__*) ;
 scalar_t__ FUNC_5 (char const*,TYPE_1__*) ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int FUNC_6 (char*,int,char*,int) ;
 int FUNC_7 (int ,int ) ;
 int FUNC_8 (int ,char*) ;
 int FUNC_9 (char*,char*,int) ;
 scalar_t__ FUNC_10 (TYPE_3__*,TYPE_4__*,TYPE_5__*) ;
 int FUNC_11 (int ,char*,char const*,...) ;

void
FUNC_12(dt_pfargv_t *VAR_21, uint_t VAR_22,
    dt_ident_t *VAR_23, int VAR_24, dtrace_actkind_t VAR_25, dt_node_t *VAR_26)
{
 dt_pfargd_t *VAR_27 = VAR_21->pfv_argv;
 const char *VAR_28 = VAR_23->di_name;

 char VAR_29[VAR_7];
 dtrace_typeinfo_t VAR_30;
 const char *VAR_31;
 dt_node_t VAR_32;
 int VAR_33, VAR_34;

 if (VAR_21->pfv_format[0] == '\0') {
  FUNC_11(VAR_14,
      "%s( ) format string is empty\n", VAR_28);
 }

 VAR_21->pfv_flags = VAR_22;






 if (VAR_25 != VAR_1)
  VAR_31 = "int64_t";
 else
  VAR_31 = "uint64_t";

 if (FUNC_5(VAR_31, &VAR_30) != 0)
  FUNC_11(VAR_15, "failed to lookup agg type %s\n", VAR_31);

 FUNC_0(&VAR_32, sizeof (VAR_32));
 FUNC_2(&VAR_32, VAR_30.dtt_ctfp, VAR_30.dtt_type, VAR_0);

 for (VAR_33 = 0, VAR_34 = 0; VAR_33 < VAR_21->pfv_argc; VAR_33++, VAR_27 = VAR_27->pfd_next) {
  const dt_pfconv_t *VAR_35 = VAR_27->pfd_conv;
  const char *VAR_36[2];
  int VAR_37 = 0;

  char VAR_38[64];
  dt_node_t *VAR_39;

  if (VAR_35 == ((void*)0))
   continue;

  if (VAR_35->pfc_print == &VAR_18) {
   (void) FUNC_7(VAR_27->pfd_fmt, VAR_35->pfc_ofmt);
   continue;
  }

  if (VAR_27->pfd_flags & VAR_3)
   VAR_36[VAR_37++] = ".*";
  if (VAR_27->pfd_flags & VAR_4)
   VAR_36[VAR_37++] = "*";

  for (; VAR_37 != 0; VAR_37--) {
   if (VAR_26 == ((void*)0)) {
    FUNC_11(VAR_12,
        "%s( ) prototype mismatch: conversion "
        "#%d (%%%s) is missing a corresponding "
        "\"%s\" argument\n", VAR_28, VAR_33 + 1,
        VAR_35->pfc_name, VAR_36[VAR_37 - 1]);
   }

   if (FUNC_1(VAR_26) == 0) {
    FUNC_11(VAR_13,
        "%s( ) argument #%d is incompatible "
        "with conversion #%d prototype:\n"
        "\tconversion: %% %s %s\n"
        "\t prototype: int\n\t  argument: %s\n",
        VAR_28, VAR_34 + VAR_24 + 1, VAR_33 + 1,
        VAR_36[VAR_37 - 1], VAR_35->pfc_name,
        FUNC_3(VAR_26, VAR_29, sizeof (VAR_29)));
   }

   VAR_26 = VAR_26->dn_list;
   VAR_34++;
  }







  if (VAR_27->pfd_flags & VAR_2) {
   if (!(VAR_22 & VAR_5)) {
    FUNC_11(VAR_8,
        "%%@ conversion requires an aggregation"
        " and is not for use with %s( )\n", VAR_28);
   }
   (void) FUNC_9(VAR_38, "aggregating action",
       sizeof (VAR_38));
   VAR_39 = &VAR_32;
  } else if (VAR_26 == ((void*)0)) {
   FUNC_11(VAR_10,
       "%s( ) prototype mismatch: conversion #%d (%%"
       "%s) is missing a corresponding value argument\n",
       VAR_28, VAR_33 + 1, VAR_35->pfc_name);
  } else {
   (void) FUNC_6(VAR_38, sizeof (VAR_38),
       "argument #%d", VAR_34 + VAR_24 + 1);
   VAR_39 = VAR_26;
   VAR_26 = VAR_26->dn_list;
   VAR_34++;
  }







  if (VAR_35->pfc_print == &VAR_19 ||
      VAR_35->pfc_print == &VAR_20 ||
      VAR_35->pfc_print == &VAR_16) {
   if (FUNC_4(VAR_39) == sizeof (uint64_t))
    (void) FUNC_8(VAR_27->pfd_fmt, "ll");
  } else if (VAR_35->pfc_print == &VAR_17) {
   if (FUNC_4(VAR_39) == sizeof (long double))
    (void) FUNC_8(VAR_27->pfd_fmt, "L");
  }

  (void) FUNC_7(VAR_27->pfd_fmt, VAR_35->pfc_ofmt);







  if (VAR_35->pfc_check(VAR_21, VAR_27, VAR_39) == 0) {
   FUNC_11(VAR_11,
       "%s( ) %s is incompatible with "
       "conversion #%d prototype:\n\tconversion: %%%s\n"
       "\t prototype: %s\n\t  argument: %s\n", VAR_28,
       VAR_38, VAR_33 + 1, VAR_35->pfc_name, VAR_35->pfc_tstr,
       FUNC_3(VAR_39, VAR_29, sizeof (VAR_29)));
  }
 }

 if ((VAR_22 & VAR_6) && VAR_26 != ((void*)0)) {
  FUNC_11(VAR_9,
      "%s( ) prototype mismatch: only %d arguments "
      "required by this format string\n", VAR_28, VAR_34);
 }
}
