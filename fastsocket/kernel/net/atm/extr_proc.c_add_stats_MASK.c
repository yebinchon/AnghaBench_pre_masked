
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct seq_file {int dummy; } ;
struct k_atm_aal_stats {int rx_drop; int rx_err; int rx; int tx_err; int tx; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (struct seq_file*,char*,char const*,int ,int ,int ,int ,int ) ;

__attribute__((used)) static void FUNC_2(struct seq_file *VAR_0, const char *VAR_1,
  const struct k_atm_aal_stats *VAR_2)
{
 FUNC_1(VAR_0, "%s ( %d %d %d %d %d )", VAR_1,
     FUNC_0(&VAR_2->tx),FUNC_0(&VAR_2->tx_err),
     FUNC_0(&VAR_2->rx),FUNC_0(&VAR_2->rx_err),
     FUNC_0(&VAR_2->rx_drop));
}
