
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_2__ {int metric_error; int metric_expense; int metric_delay; int metric_default; } ;
struct isis_tlv_ip_reach {TYPE_1__ isis_metric_block; int prefix; int mask; } ;
typedef int netdissect_options ;


 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (struct isis_tlv_ip_reach const) ;
 int FUNC_7 (int *,int ) ;
 int FUNC_8 (int ) ;

__attribute__((used)) static int
FUNC_9(netdissect_options *VAR_0,
                        const uint8_t *VAR_1, const char *VAR_2, int VAR_3)
{
 int VAR_4;
 const struct isis_tlv_ip_reach *VAR_5;

 VAR_5 = (const struct isis_tlv_ip_reach *)VAR_1;

 while (VAR_3 > 0) {
  if ((size_t)VAR_3 < sizeof(*VAR_5)) {
   FUNC_5((VAR_0, "short IPv4 Reachability (%d vs %lu)",
                               VAR_3,
                               (unsigned long)sizeof(*VAR_5)));
   return (0);
  }

  if (!FUNC_6(*VAR_5))
      return (0);

  VAR_4 = FUNC_8(FUNC_0(VAR_5->mask));

  if (VAR_4 == -1)
   FUNC_5((VAR_0, "%sIPv4 prefix: %s mask %s",
                               VAR_2,
          FUNC_7(VAR_0, (VAR_5->prefix)),
          FUNC_7(VAR_0, (VAR_5->mask))));
  else
   FUNC_5((VAR_0, "%sIPv4 prefix: %15s/%u",
                               VAR_2,
          FUNC_7(VAR_0, (VAR_5->prefix)),
          VAR_4));

  FUNC_5((VAR_0, ", Distribution: %s, Metric: %u, %s",
                       FUNC_3(VAR_5->isis_metric_block.metric_default) ? "down" : "up",
                       FUNC_4(VAR_5->isis_metric_block.metric_default),
                       FUNC_1(VAR_5->isis_metric_block.metric_default) ? "External" : "Internal"));

  if (!FUNC_2(VAR_5->isis_metric_block.metric_delay))
                    FUNC_5((VAR_0, "%s  Delay Metric: %u, %s",
                           VAR_2,
                           FUNC_4(VAR_5->isis_metric_block.metric_delay),
                           FUNC_1(VAR_5->isis_metric_block.metric_delay) ? "External" : "Internal"));

  if (!FUNC_2(VAR_5->isis_metric_block.metric_expense))
                    FUNC_5((VAR_0, "%s  Expense Metric: %u, %s",
                           VAR_2,
                           FUNC_4(VAR_5->isis_metric_block.metric_expense),
                           FUNC_1(VAR_5->isis_metric_block.metric_expense) ? "External" : "Internal"));

  if (!FUNC_2(VAR_5->isis_metric_block.metric_error))
                    FUNC_5((VAR_0, "%s  Error Metric: %u, %s",
                           VAR_2,
                           FUNC_4(VAR_5->isis_metric_block.metric_error),
                           FUNC_1(VAR_5->isis_metric_block.metric_error) ? "External" : "Internal"));

  VAR_3 -= sizeof(struct isis_tlv_ip_reach);
  VAR_5++;
 }
 return (1);
}
