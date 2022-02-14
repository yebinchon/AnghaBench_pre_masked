
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int dtrace_hdl_t ;
struct TYPE_3__ {int dtada_minbin; int dtada_maxbin; } ;
typedef TYPE_1__ dtrace_aggdata_t ;
typedef scalar_t__ dtrace_actkind_t ;
typedef int FILE ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int *,int *,char*,...) ;

__attribute__((used)) static int
FUNC_4(dtrace_hdl_t *VAR_4, FILE *VAR_5, int VAR_6,
    const dtrace_aggdata_t *VAR_7, dtrace_actkind_t VAR_8)
{
 int VAR_9 = VAR_7->dtada_minbin, VAR_10 = VAR_7->dtada_maxbin;
 int VAR_11, VAR_12, VAR_13;

 FUNC_1(VAR_8 == VAR_1 || VAR_8 == VAR_0);

 if (VAR_8 == VAR_1) {
  if (VAR_9 != 0 && VAR_9 != VAR_3)
   VAR_9--;

  if (VAR_10 < VAR_2 - 1)
   VAR_10++;

  VAR_11 = FUNC_2(FUNC_0(VAR_9));
  VAR_12 = FUNC_2(FUNC_0(VAR_10));
 } else {
  VAR_12 = 8;
  VAR_11 = VAR_12 - 1;
  VAR_10++;
 }

 if (FUNC_3(VAR_4, VAR_5, "\n%*s %*s .",
     VAR_6, VAR_6 > 0 ? "key" : "", VAR_11, "min") < 0)
  return (-1);

 for (VAR_13 = VAR_9; VAR_13 <= VAR_10; VAR_13++) {
  if (FUNC_3(VAR_4, VAR_5, "-") < 0)
   return (-1);
 }

 return (FUNC_3(VAR_4, VAR_5, ". %*s | count\n", -VAR_12, "max"));
}
