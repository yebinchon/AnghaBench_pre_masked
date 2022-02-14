
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct p2p_data {TYPE_1__* cfg; } ;
struct p2p_channels {int dummy; } ;
struct TYPE_2__ {int cli_channels; int channels; } ;


 int FUNC_0 (int *,struct p2p_channels const*,int) ;
 int FUNC_1 (struct p2p_data*,char*,int *) ;
 int FUNC_2 (struct p2p_data*,char*) ;

void FUNC_3(struct p2p_data *VAR_0,
        const struct p2p_channels *VAR_1,
        const struct p2p_channels *VAR_2)
{
 FUNC_2(VAR_0, "Update channel list");
 FUNC_0(&VAR_0->cfg->channels, VAR_1, sizeof(struct p2p_channels));
 FUNC_1(VAR_0, "channels", &VAR_0->cfg->channels);
 FUNC_0(&VAR_0->cfg->cli_channels, VAR_2,
    sizeof(struct p2p_channels));
 FUNC_1(VAR_0, "cli_channels", &VAR_0->cfg->cli_channels);
}
