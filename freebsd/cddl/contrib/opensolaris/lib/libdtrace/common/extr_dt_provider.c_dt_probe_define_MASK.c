
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_20__ TYPE_5__ ;
typedef struct TYPE_19__ TYPE_4__ ;
typedef struct TYPE_18__ TYPE_3__ ;
typedef struct TYPE_17__ TYPE_2__ ;
typedef struct TYPE_16__ TYPE_1__ ;


typedef int uint_t ;
struct TYPE_18__ {int pi_noffs; int pi_maxoffs; int pi_nenoffs; int pi_maxenoffs; struct TYPE_18__* pi_offs; struct TYPE_18__* pi_enoffs; struct TYPE_18__* pi_fname; struct TYPE_18__* pi_next; struct TYPE_18__* pi_rname; } ;
typedef TYPE_3__ uint32_t ;
typedef int dtrace_hdl_t ;
struct TYPE_16__ {int dtvd_name; } ;
struct TYPE_19__ {TYPE_1__ pv_desc; int * pv_hdl; } ;
typedef TYPE_4__ dt_provider_t ;
struct TYPE_20__ {TYPE_2__* pr_ident; TYPE_3__* pr_inst; } ;
typedef TYPE_5__ dt_probe_t ;
typedef TYPE_3__ dt_probe_instance_t ;
struct TYPE_17__ {int di_name; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (TYPE_3__*,TYPE_3__*,int) ;
 TYPE_3__* FUNC_2 (int *,int) ;
 int FUNC_3 (char*,char*,int ,int ,char const*,TYPE_3__,char const*) ;
 int FUNC_4 (int *,TYPE_3__*) ;
 int FUNC_5 (int *,int ) ;
 void* FUNC_6 (int *,int) ;
 scalar_t__ FUNC_7 (TYPE_3__*,char const*) ;
 void* FUNC_8 (char const*) ;

int
FUNC_9(dt_provider_t *VAR_1, dt_probe_t *VAR_2,
    const char *VAR_3, const char *VAR_4, uint32_t VAR_5, int VAR_6)
{
 dtrace_hdl_t *VAR_7 = VAR_1->pv_hdl;
 dt_probe_instance_t *VAR_8;
 uint32_t **VAR_9;
 uint_t *VAR_10, *VAR_11;

 FUNC_0(VAR_3 != ((void*)0));

 for (VAR_8 = VAR_2->pr_inst; VAR_8 != ((void*)0); VAR_8 = VAR_8->pi_next) {
  if (FUNC_7(VAR_8->pi_fname, VAR_3) == 0 &&
      FUNC_7(VAR_8->pi_rname, VAR_4) == 0)
   break;
 }

 if (VAR_8 == ((void*)0)) {
  if ((VAR_8 = FUNC_6(VAR_7, sizeof (*VAR_8))) == ((void*)0))
   return (-1);

  if ((VAR_8->pi_offs = FUNC_6(VAR_7, sizeof (uint32_t))) == ((void*)0))
   goto nomem;

  if ((VAR_8->pi_enoffs = FUNC_6(VAR_7,
      sizeof (uint32_t))) == ((void*)0))
   goto nomem;

  if ((VAR_8->pi_fname = FUNC_8(VAR_3)) == ((void*)0))
   goto nomem;

  if ((VAR_8->pi_rname = FUNC_8(VAR_4)) == ((void*)0))
   goto nomem;

  VAR_8->pi_noffs = 0;
  VAR_8->pi_maxoffs = 1;
  VAR_8->pi_nenoffs = 0;
  VAR_8->pi_maxenoffs = 1;

  VAR_8->pi_next = VAR_2->pr_inst;

  VAR_2->pr_inst = VAR_8;
 }

 if (VAR_6) {
  VAR_9 = &VAR_8->pi_enoffs;
  VAR_10 = &VAR_8->pi_nenoffs;
  VAR_11 = &VAR_8->pi_maxenoffs;
 } else {
  VAR_9 = &VAR_8->pi_offs;
  VAR_10 = &VAR_8->pi_noffs;
  VAR_11 = &VAR_8->pi_maxoffs;
 }

 if (*VAR_10 == *VAR_11) {
  uint_t VAR_12 = *VAR_11 * 2;
  uint32_t *VAR_13 = FUNC_2(VAR_7, sizeof (uint32_t) * VAR_12);

  if (VAR_13 == ((void*)0))
   return (-1);

  FUNC_1(*VAR_9, VAR_13, sizeof (uint32_t) * *VAR_11);

  FUNC_4(VAR_7, *VAR_9);
  *VAR_11 = VAR_12;
  *VAR_9 = VAR_13;
 }

 FUNC_3("defined probe %s %s:%s %s() +0x%x (%s)\n",
     VAR_6 ? "(is-enabled)" : "",
     VAR_1->pv_desc.dtvd_name, VAR_2->pr_ident->di_name, VAR_3, VAR_5,
     VAR_4);

 FUNC_0(*VAR_10 < *VAR_11);
 (*VAR_9)[(*VAR_10)++] = VAR_5;

 return (0);

nomem:
 FUNC_4(VAR_7, VAR_8->pi_fname);
 FUNC_4(VAR_7, VAR_8->pi_enoffs);
 FUNC_4(VAR_7, VAR_8->pi_offs);
 FUNC_4(VAR_7, VAR_8);
 return (FUNC_5(VAR_7, VAR_0));
}
