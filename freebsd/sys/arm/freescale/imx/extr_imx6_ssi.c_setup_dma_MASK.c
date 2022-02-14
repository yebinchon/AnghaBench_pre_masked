
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sdma_conf {int word_length; int command; int num_bd; int period; int event; scalar_t__ daddr; int saddr; struct sc_pcminfo* ih_user; int ih; } ;
struct sc_pcminfo {struct sc_info* sc; struct sc_chinfo* chan; } ;
struct sc_info {int dev; int sdma_ev_tx; int * res; int buf_base_phys; struct sdma_conf* conf; } ;
struct sc_chinfo {int buffer; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (int ,char*) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int VAR_5 ;

__attribute__((used)) static int
FUNC_5(struct sc_pcminfo *VAR_6)
{
 struct sdma_conf *VAR_7;
 struct sc_chinfo *VAR_8;
 struct sc_info *VAR_9;
 int VAR_10;

 VAR_8 = &VAR_6->chan[0];
 VAR_9 = VAR_6->sc;
 VAR_7 = VAR_9->conf;

 VAR_7->ih = VAR_5;
 VAR_7->ih_user = VAR_6;
 VAR_7->saddr = VAR_9->buf_base_phys;
 VAR_7->daddr = FUNC_1(VAR_9->res[0]) + VAR_4;
 VAR_7->event = VAR_9->sdma_ev_tx;
 VAR_7->period = FUNC_3(VAR_8->buffer);
 VAR_7->num_bd = FUNC_2(VAR_8->buffer);
 VAR_10 = FUNC_4(VAR_8->buffer);

 if (VAR_10 & VAR_0) {
  VAR_7->word_length = 16;
  VAR_7->command = VAR_2;
 } else if (VAR_10 & VAR_1) {
  VAR_7->word_length = 24;
  VAR_7->command = VAR_3;
 } else {
  FUNC_0(VAR_9->dev, "Unknown format\n");
  return (-1);
 }

 return (0);
}
