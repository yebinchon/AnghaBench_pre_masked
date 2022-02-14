
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


typedef int dtrace_provider_t ;
typedef scalar_t__ dtrace_provider_id_t ;
struct TYPE_7__ {int dtpr_id; int dtpr_aframes; int * dtpr_provider; void* dtpr_arg; void* dtpr_name; void* dtpr_func; void* dtpr_mod; scalar_t__ dtpr_gen; } ;
typedef TYPE_1__ dtrace_probe_t ;
typedef int dtrace_id_t ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 (int *) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (TYPE_1__**,TYPE_1__**,size_t) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_4 (int ,TYPE_1__*) ;
 int VAR_7 ;
 int FUNC_5 () ;
 int VAR_8 ;
 int VAR_9 ;
 TYPE_1__** VAR_10 ;
 int * VAR_11 ;
 void* FUNC_6 (char const*) ;
 int FUNC_7 () ;
 int FUNC_8 (TYPE_1__**,size_t) ;
 void* FUNC_9 (size_t,int ) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int *) ;
 scalar_t__ FUNC_12 (int ,int,int) ;

dtrace_id_t
FUNC_13(dtrace_provider_id_t VAR_12, const char *VAR_13,
    const char *VAR_14, const char *VAR_15, int VAR_16, void *VAR_17)
{
 dtrace_probe_t *VAR_18, **VAR_19;
 dtrace_provider_t *VAR_20 = (dtrace_provider_t *)VAR_12;
 dtrace_id_t VAR_21;

 if (VAR_20 == VAR_11) {
  FUNC_0(FUNC_1(&VAR_7));
 } else {
  FUNC_10(&VAR_7);
 }





 VAR_21 = FUNC_2(VAR_3);

 VAR_18 = FUNC_9(sizeof (dtrace_probe_t), VAR_0);

 VAR_18->dtpr_id = VAR_21;
 VAR_18->dtpr_gen = VAR_9++;
 VAR_18->dtpr_mod = FUNC_6(VAR_13);
 VAR_18->dtpr_func = FUNC_6(VAR_14);
 VAR_18->dtpr_name = FUNC_6(VAR_15);
 VAR_18->dtpr_arg = VAR_17;
 VAR_18->dtpr_aframes = VAR_16;
 VAR_18->dtpr_provider = VAR_20;

 FUNC_4(VAR_5, VAR_18);
 FUNC_4(VAR_4, VAR_18);
 FUNC_4(VAR_6, VAR_18);

 if (VAR_21 - 1 >= VAR_8) {
  size_t VAR_22 = VAR_8 * sizeof (dtrace_probe_t *);
  size_t VAR_23 = VAR_22 << 1;

  if (VAR_23 == 0) {
   FUNC_0(VAR_22 == 0);
   FUNC_0(VAR_10 == ((void*)0));
   VAR_23 = sizeof (dtrace_probe_t *);
  }

  VAR_19 = FUNC_9(VAR_23, VAR_0);

  if (VAR_10 == ((void*)0)) {
   FUNC_0(VAR_22 == 0);
   VAR_10 = VAR_19;
   VAR_8 = 1;
  } else {
   dtrace_probe_t **VAR_24 = VAR_10;

   FUNC_3(VAR_24, VAR_19, VAR_22);
   FUNC_5();
   VAR_10 = VAR_19;

   FUNC_7();





   FUNC_8(VAR_24, VAR_22);
   VAR_8 <<= 1;
  }

  FUNC_0(VAR_21 - 1 < VAR_8);
 }

 FUNC_0(VAR_10[VAR_21 - 1] == ((void*)0));
 VAR_10[VAR_21 - 1] = VAR_18;

 if (VAR_20 != VAR_11)
  FUNC_11(&VAR_7);

 return (VAR_21);
}
