
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_7__ ;
typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


typedef size_t dtrace_probespec_t ;
struct TYPE_11__ {int dtpd_id; } ;
typedef TYPE_1__ dtrace_probedesc_t ;
struct TYPE_12__ {int dt_macros; } ;
typedef TYPE_2__ dtrace_hdl_t ;
struct TYPE_13__ {int di_id; } ;
typedef TYPE_3__ dt_ident_t ;
struct TYPE_15__ {size_t dtps_len; size_t dtps_offset; } ;
struct TYPE_14__ {char* const* pcb_sargv; int * pcb_sflagv; } ;


 int VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 char* FUNC_0 (size_t) ;
 int FUNC_1 (char const*,char*,size_t) ;
 int FUNC_2 (TYPE_1__*,int) ;
 TYPE_3__* FUNC_3 (int ,char*) ;
 int FUNC_4 (TYPE_2__*,int ) ;
 TYPE_7__* VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ FUNC_5 (char const) ;
 size_t FUNC_6 (char*,int,char*,int) ;
 char* FUNC_7 (char const*,char) ;
 size_t FUNC_8 (char const*) ;
 int FUNC_9 (char*,char const*,size_t) ;
 long FUNC_10 (char const*,char**,int) ;
 TYPE_4__* VAR_10 ;

int
FUNC_11(dtrace_hdl_t *VAR_11, dtrace_probespec_t VAR_12,
    const char *VAR_13, int VAR_14, char *const VAR_15[], dtrace_probedesc_t *VAR_16)
{
 size_t VAR_17, VAR_18, VAR_19, VAR_20;
 const char *VAR_21, *VAR_22, *VAR_23, *VAR_24;

 char VAR_25[32];

 if (VAR_12 < VAR_2 || VAR_12 > VAR_1)
  return (FUNC_4(VAR_11, VAR_6));

 FUNC_2(VAR_16, sizeof (dtrace_probedesc_t));
 VAR_21 = VAR_13 + FUNC_8(VAR_13) - 1;

 do {
  for (VAR_18 = 0; VAR_21 >= VAR_13 && *VAR_21 != ':'; VAR_18++)
   VAR_21--;

  VAR_22 = VAR_21 + 1;
  VAR_19 = 0;
  VAR_24 = ((void*)0);
  VAR_20 = 0;

  if ((VAR_23 = FUNC_7(VAR_22, '$')) != ((void*)0) && VAR_23 < VAR_22 + VAR_18) {
   VAR_19 = (size_t)(VAR_22 + VAR_18 - VAR_23);
   VAR_18 = (size_t)(VAR_23 - VAR_22);






   if (VAR_19 > 2 && VAR_23[1] == '$') {
    VAR_19--;
    VAR_23++;
   }

   if (FUNC_5(VAR_23[1])) {
    long VAR_26;

    VAR_9 = 0;
    VAR_26 = FUNC_10(VAR_23 + 1, (char **)&VAR_24, 10);

    VAR_20 = VAR_19 - (VAR_24 - VAR_23);

    if (VAR_26 < 0 || VAR_26 >= VAR_14 || VAR_9 != 0)
     return (FUNC_4(VAR_11, VAR_4));

    VAR_23 = VAR_15[VAR_26];
    VAR_19 = FUNC_8(VAR_23);

    if (VAR_10 != ((void*)0) && VAR_10->pcb_sargv == VAR_15)
     VAR_10->pcb_sflagv[VAR_26] |= VAR_3;

   } else if (VAR_19 > 1) {
    char *VAR_27 = FUNC_0(VAR_19);
    dt_ident_t *VAR_28;

    (void) FUNC_9(VAR_27, VAR_23 + 1, VAR_19 - 1);
    VAR_27[VAR_19 - 1] = '\0';
    VAR_28 = FUNC_3(VAR_11->dt_macros, VAR_27);

    if (VAR_28 == ((void*)0))
     return (FUNC_4(VAR_11, VAR_4));

    VAR_23 = VAR_25;
    VAR_19 = FUNC_6(VAR_25, 32, "%d", VAR_28->di_id);

   } else
    return (FUNC_4(VAR_11, VAR_4));
  }

  if (VAR_12 == VAR_2)
   return (FUNC_4(VAR_11, VAR_5));

  if (VAR_18 + VAR_19 >= VAR_8[VAR_12].dtps_len)
   return (FUNC_4(VAR_11, VAR_7));

  VAR_17 = VAR_8[VAR_12--].dtps_offset;
  FUNC_1(VAR_22, (char *)VAR_16 + VAR_17, VAR_18);
  FUNC_1(VAR_23, (char *)VAR_16 + VAR_17 + VAR_18, VAR_19);
  FUNC_1(VAR_24, (char *)VAR_16 + VAR_17 + VAR_18 + VAR_19, VAR_20);
 } while (--VAR_21 >= VAR_13);

 VAR_16->dtpd_id = VAR_0;
 return (0);
}
