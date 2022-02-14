
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct snd_soc_dai {int dummy; } ;
struct snd_pcm_substream {scalar_t__ stream; } ;
struct fsi_priv {int dummy; } ;
struct TYPE_2__ {int clk; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct fsi_priv*,int ) ;
 struct fsi_priv* FUNC_2 (struct snd_pcm_substream*) ;
 int FUNC_3 (struct fsi_priv*,int) ;
 TYPE_1__* VAR_1 ;

__attribute__((used)) static void FUNC_4(struct snd_pcm_substream *VAR_2,
        struct snd_soc_dai *VAR_3)
{
 struct fsi_priv *VAR_4 = FUNC_2(VAR_2);
 int VAR_5 = VAR_2->stream == VAR_0;

 FUNC_3(VAR_4, VAR_5);
 FUNC_1(VAR_4, 0);

 FUNC_0(VAR_1->clk);
}
