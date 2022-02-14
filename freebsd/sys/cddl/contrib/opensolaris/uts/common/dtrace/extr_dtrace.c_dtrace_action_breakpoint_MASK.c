
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {char* dtpv_name; } ;
typedef TYPE_1__ dtrace_provider_t ;
struct TYPE_6__ {char* dtpr_mod; char* dtpr_func; char* dtpr_name; TYPE_1__* dtpr_provider; } ;
typedef TYPE_2__ dtrace_probe_t ;
struct TYPE_7__ {TYPE_2__* dte_probe; } ;
typedef TYPE_3__ dtrace_ecb_t ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (char*) ;
 scalar_t__ VAR_3 ;
 int FUNC_2 (int ,char*) ;

__attribute__((used)) static void
FUNC_3(dtrace_ecb_t *VAR_4)
{
 dtrace_probe_t *VAR_5 = VAR_4->dte_probe;
 dtrace_provider_t *VAR_6 = VAR_5->dtpr_provider;
 char VAR_7[VAR_0 + 80], *VAR_8;
 char *VAR_9 = "dtrace: breakpoint action at probe ";
 char *VAR_10 = " (ecb ";
 uintptr_t VAR_11 = (0xf << (sizeof (uintptr_t) * VAR_2 / 4));
 uintptr_t VAR_12 = (uintptr_t)VAR_4;
 int VAR_13 = (sizeof (uintptr_t) * VAR_2) - 4, VAR_14 = 0;

 if (VAR_3)
  return;




 FUNC_0(VAR_5 != ((void*)0));
 while (*VAR_9 != '\0')
  VAR_7[VAR_14++] = *VAR_9++;

 for (VAR_8 = VAR_6->dtpv_name; *VAR_8 != '\0'; VAR_8++)
  VAR_7[VAR_14++] = *VAR_8;
 VAR_7[VAR_14++] = ':';

 for (VAR_8 = VAR_5->dtpr_mod; *VAR_8 != '\0'; VAR_8++)
  VAR_7[VAR_14++] = *VAR_8;
 VAR_7[VAR_14++] = ':';

 for (VAR_8 = VAR_5->dtpr_func; *VAR_8 != '\0'; VAR_8++)
  VAR_7[VAR_14++] = *VAR_8;
 VAR_7[VAR_14++] = ':';

 for (VAR_8 = VAR_5->dtpr_name; *VAR_8 != '\0'; VAR_8++)
  VAR_7[VAR_14++] = *VAR_8;

 while (*VAR_10 != '\0')
  VAR_7[VAR_14++] = *VAR_10++;

 while (VAR_13 >= 0) {
  VAR_11 = (uintptr_t)0xf << VAR_13;

  if (VAR_12 >= ((uintptr_t)1 << VAR_13))
   VAR_7[VAR_14++] = "0123456789abcdef"[(VAR_12 & VAR_11) >> VAR_13];
  VAR_13 -= 4;
 }

 VAR_7[VAR_14++] = ')';
 VAR_7[VAR_14] = '\0';




 FUNC_2(VAR_1, "breakpoint action");

}
