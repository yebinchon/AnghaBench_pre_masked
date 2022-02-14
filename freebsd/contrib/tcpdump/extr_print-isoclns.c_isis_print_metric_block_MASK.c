
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct isis_metric_block {int metric_error; int metric_expense; int metric_delay; int metric_default; } ;
typedef int netdissect_options ;


 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static int
FUNC_4(netdissect_options *VAR_0,
                        const struct isis_metric_block *VAR_1)
{
    FUNC_3((VAR_0, ", Default Metric: %d, %s",
           FUNC_2(VAR_1->metric_default),
           FUNC_0(VAR_1->metric_default) ? "External" : "Internal"));
    if (!FUNC_1(VAR_1->metric_delay))
        FUNC_3((VAR_0, "\n\t\t  Delay Metric: %d, %s",
               FUNC_2(VAR_1->metric_delay),
               FUNC_0(VAR_1->metric_delay) ? "External" : "Internal"));
    if (!FUNC_1(VAR_1->metric_expense))
        FUNC_3((VAR_0, "\n\t\t  Expense Metric: %d, %s",
               FUNC_2(VAR_1->metric_expense),
               FUNC_0(VAR_1->metric_expense) ? "External" : "Internal"));
    if (!FUNC_1(VAR_1->metric_error))
        FUNC_3((VAR_0, "\n\t\t  Error Metric: %d, %s",
               FUNC_2(VAR_1->metric_error),
               FUNC_0(VAR_1->metric_error) ? "External" : "Internal"));

    return(1);
}
