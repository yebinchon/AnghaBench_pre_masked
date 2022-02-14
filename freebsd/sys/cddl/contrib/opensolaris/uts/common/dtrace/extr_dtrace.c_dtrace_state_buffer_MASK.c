
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_3__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint64_t ;
typedef int processorid_t ;
struct TYPE_4__ {int* dts_options; scalar_t__ dts_activity; int dts_reserve; } ;
typedef TYPE_1__ dtrace_state_t ;
typedef int dtrace_optval_t ;
typedef int dtrace_buffer_t ;
struct TYPE_5__ {TYPE_1__* dta_state; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 size_t VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 size_t VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 size_t VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 scalar_t__ VAR_14 ;
 scalar_t__ VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int FUNC_1 (int *) ;
 int VAR_18 ;
 TYPE_3__ VAR_19 ;
 int FUNC_2 (int *,int,int,int,int*) ;
 int VAR_20 ;

__attribute__((used)) static int
FUNC_3(dtrace_state_t *VAR_21, dtrace_buffer_t *VAR_22, int VAR_23)
{
 dtrace_optval_t *VAR_24 = VAR_21->dts_options, VAR_25;
 processorid_t VAR_26 = 0;;
 int VAR_27 = 0, VAR_28, VAR_29, VAR_30 = 1;

 FUNC_0(FUNC_1(&VAR_20));
 FUNC_0(FUNC_1(&VAR_18));
 FUNC_0(VAR_23 < VAR_11);
 FUNC_0(VAR_21->dts_activity == VAR_15 ||
     (VAR_21 == VAR_19.dta_state &&
     VAR_21->dts_activity == VAR_14));

 if (VAR_24[VAR_23] == VAR_13 || VAR_24[VAR_23] == 0)
  return (0);

 if (VAR_24[VAR_10] != VAR_13)
  VAR_26 = VAR_24[VAR_10];

 if (VAR_23 == VAR_12)
  VAR_27 |= VAR_2;

 if (VAR_23 == VAR_9) {
  if (VAR_24[VAR_4] == VAR_6)
   VAR_27 |= VAR_3;

  if (VAR_24[VAR_4] == VAR_5)
   VAR_27 |= VAR_0;

  if (VAR_21 != VAR_19.dta_state ||
      VAR_21->dts_activity != VAR_14)
   VAR_27 |= VAR_1;
 }

 for (VAR_25 = VAR_24[VAR_23]; VAR_25 >= sizeof (uint64_t); VAR_25 /= VAR_30) {




  if (VAR_25 & (sizeof (uint64_t) - 1))
   VAR_25 -= VAR_25 & (sizeof (uint64_t) - 1);

  if (VAR_25 < VAR_21->dts_reserve) {






   return (VAR_16);
  }

  VAR_28 = FUNC_2(VAR_22, VAR_25, VAR_27, VAR_26, &VAR_29);

  if (VAR_28 != VAR_17) {
   VAR_24[VAR_23] = VAR_25;
   return (VAR_28);
  }

  if (VAR_24[VAR_7] == VAR_8)
   return (VAR_28);

  for (VAR_30 = 2; VAR_30 < VAR_29; VAR_30 <<= 1)
   continue;
 }

 return (VAR_17);
}
