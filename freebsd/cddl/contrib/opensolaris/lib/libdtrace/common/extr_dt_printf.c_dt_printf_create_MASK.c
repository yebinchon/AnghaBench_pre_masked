
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_4__ ;
typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


typedef int uint_t ;
typedef int name ;
struct TYPE_13__ {int dtc_ctfmodel; } ;
struct TYPE_14__ {TYPE_1__ dt_conf; } ;
typedef TYPE_2__ dtrace_hdl_t ;
struct TYPE_15__ {char* pfv_format; scalar_t__ pfv_argc; TYPE_4__* pfv_argv; TYPE_2__* pfv_dtp; scalar_t__ pfv_flags; } ;
typedef TYPE_3__ dt_pfargv_t ;
struct TYPE_16__ {size_t pfd_preflen; char const* pfd_prefix; int pfd_flags; int pfd_prec; int pfd_width; struct TYPE_16__* pfd_next; int * pfd_conv; } ;
typedef TYPE_4__ dt_pfargd_t ;


 int VAR_0 ;
 int VAR_1 ;
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
 int FUNC_0 (TYPE_4__*,int) ;
 int * FUNC_1 (TYPE_2__*,char*) ;
 int FUNC_2 (TYPE_3__*) ;
 TYPE_3__* FUNC_3 (TYPE_2__*,int ) ;
 int FUNC_4 (TYPE_3__*) ;
 int FUNC_5 (char) ;
 void* FUNC_6 (int) ;
 char* FUNC_7 (char const*,char) ;
 char* FUNC_8 (char const*) ;
 size_t FUNC_9 (char const*) ;
 int FUNC_10 (char*,scalar_t__,...) ;

dt_pfargv_t *
FUNC_11(dtrace_hdl_t *VAR_12, const char *VAR_13)
{
 dt_pfargd_t *VAR_14, *VAR_15 = ((void*)0);
 dt_pfargv_t *VAR_16;
 const char *VAR_17, *VAR_18;
 char *VAR_19;

 if ((VAR_16 = FUNC_6(sizeof (dt_pfargv_t))) == ((void*)0) ||
     (VAR_19 = FUNC_8(VAR_13)) == ((void*)0)) {
  FUNC_4(VAR_16);
  return (FUNC_3(VAR_12, VAR_11));
 }

 VAR_16->pfv_format = VAR_19;
 VAR_16->pfv_argv = ((void*)0);
 VAR_16->pfv_argc = 0;
 VAR_16->pfv_flags = 0;
 VAR_16->pfv_dtp = VAR_12;

 for (VAR_18 = VAR_19; (VAR_17 = FUNC_7(VAR_18, '%')) != ((void*)0); VAR_18 = *VAR_17 ? VAR_17 + 1 : VAR_17) {
  uint_t VAR_20 = 0;
  int VAR_21 = 0;
  int VAR_22 = 0;

  char VAR_23[8];
  char VAR_24;
  int VAR_25;

  if ((VAR_14 = FUNC_6(sizeof (dt_pfargd_t))) == ((void*)0)) {
   FUNC_2(VAR_16);
   return (FUNC_3(VAR_12, VAR_11));
  }

  if (VAR_16->pfv_argv != ((void*)0))
   VAR_15->pfd_next = VAR_14;
  else
   VAR_16->pfv_argv = VAR_14;

  FUNC_0(VAR_14, sizeof (dt_pfargd_t));
  VAR_16->pfv_argc++;
  VAR_15 = VAR_14;

  if (VAR_17 > VAR_18) {
   VAR_14->pfd_preflen = (size_t)(VAR_17 - VAR_18);
   VAR_14->pfd_prefix = VAR_18;
  }

  fmt_switch:
  switch (VAR_24 = *++VAR_17) {
  case '0': case '1': case '2': case '3': case '4':
  case '5': case '6': case '7': case '8': case '9':
   if (VAR_22 == 0 && VAR_21 == 0 && VAR_24 == '0') {
    VAR_14->pfd_flags |= VAR_9;
    VAR_14->pfd_flags &= ~VAR_6;
    goto fmt_switch;
   }

   for (VAR_25 = 0; FUNC_5(VAR_24); VAR_24 = *++VAR_17)
    VAR_25 = VAR_25 * 10 + VAR_24 - '0';

   if (VAR_22)
    VAR_14->pfd_prec = VAR_25;
   else
    VAR_14->pfd_width = VAR_25;

   VAR_17--;
   VAR_21++;
   goto fmt_switch;

  case '#':
   VAR_14->pfd_flags |= VAR_2;
   goto fmt_switch;

  case '*':
   VAR_25 = VAR_22 ? VAR_3 : VAR_4;

   if (VAR_14->pfd_flags & VAR_25) {
    FUNC_10("format conversion #%u has more than "
        "one '*' specified for the output %s\n",
        VAR_16->pfv_argc, VAR_25 ? "precision" : "width");

    FUNC_2(VAR_16);
    return (FUNC_3(VAR_12, VAR_10));
   }

   VAR_14->pfd_flags |= VAR_25;
   goto fmt_switch;

  case '+':
   VAR_14->pfd_flags |= VAR_8;
   goto fmt_switch;

  case '-':
   VAR_14->pfd_flags |= VAR_6;
   VAR_14->pfd_flags &= ~VAR_9;
   goto fmt_switch;

  case '.':
   if (VAR_22++ != 0) {
    FUNC_10("format conversion #%u has more than "
        "one '.' specified\n", VAR_16->pfv_argc);

    FUNC_2(VAR_16);
    return (FUNC_3(VAR_12, VAR_10));
   }
   VAR_21 = 0;
   goto fmt_switch;

  case '?':
   if (VAR_12->dt_conf.dtc_ctfmodel == VAR_0)
    VAR_14->pfd_width = 16;
   else
    VAR_14->pfd_width = 8;
   goto fmt_switch;

  case '@':
   VAR_14->pfd_flags |= VAR_1;
   goto fmt_switch;

  case '\'':
   VAR_14->pfd_flags |= VAR_5;
   goto fmt_switch;

  case ' ':
   VAR_14->pfd_flags |= VAR_7;
   goto fmt_switch;

  case '$':
   FUNC_10("format conversion #%u uses unsupported "
       "positional format (%%n$)\n", VAR_16->pfv_argc);

   FUNC_2(VAR_16);
   return (FUNC_3(VAR_12, VAR_10));

  case '%':
   if (VAR_17[-1] == '%')
    goto default_lbl;

   FUNC_10("format conversion #%u cannot be combined "
       "with other format flags: %%%%\n", VAR_16->pfv_argc);

   FUNC_2(VAR_16);
   return (FUNC_3(VAR_12, VAR_10));

  case '\0':
   FUNC_10("format conversion #%u name expected before "
       "end of format string\n", VAR_16->pfv_argc);

   FUNC_2(VAR_16);
   return (FUNC_3(VAR_12, VAR_10));

  case 'h':
  case 'l':
  case 'L':
  case 'w':
   if (VAR_20 < sizeof (VAR_23) - 2)
    VAR_23[VAR_20++] = VAR_24;
   goto fmt_switch;

  default_lbl:
  default:
   VAR_23[VAR_20++] = VAR_24;
   VAR_23[VAR_20] = '\0';
  }

  VAR_14->pfd_conv = FUNC_1(VAR_12, VAR_23);

  if (VAR_14->pfd_conv == ((void*)0)) {
   FUNC_10("format conversion #%u is undefined: %%%s\n",
       VAR_16->pfv_argc, VAR_23);
   FUNC_2(VAR_16);
   return (FUNC_3(VAR_12, VAR_10));
  }
 }

 if (*VAR_18 != '\0' || *VAR_19 == '\0') {
  if ((VAR_14 = FUNC_6(sizeof (dt_pfargd_t))) == ((void*)0)) {
   FUNC_2(VAR_16);
   return (FUNC_3(VAR_12, VAR_11));
  }

  if (VAR_16->pfv_argv != ((void*)0))
   VAR_15->pfd_next = VAR_14;
  else
   VAR_16->pfv_argv = VAR_14;

  FUNC_0(VAR_14, sizeof (dt_pfargd_t));
  VAR_16->pfv_argc++;

  VAR_14->pfd_prefix = VAR_18;
  VAR_14->pfd_preflen = FUNC_9(VAR_18);
 }

 return (VAR_16);
}
