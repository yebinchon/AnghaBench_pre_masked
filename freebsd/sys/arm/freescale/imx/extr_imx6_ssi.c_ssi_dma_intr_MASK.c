
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct sdma_conf {scalar_t__ period; } ;
struct sc_pcminfo {struct sc_info* sc; struct sc_chinfo* chan; } ;
struct sc_info {int pos; struct sdma_conf* conf; } ;
struct sc_chinfo {int channel; scalar_t__ run; int buffer; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;

uint32_t
FUNC_2(void *VAR_0, int VAR_1)
{
 struct sc_pcminfo *VAR_2;
 struct sdma_conf *VAR_3;
 struct sc_chinfo *VAR_4;
 struct sc_info *VAR_5;
 int VAR_6;

 VAR_2 = VAR_0;
 VAR_4 = &VAR_2->chan[0];
 VAR_5 = VAR_2->sc;
 VAR_3 = VAR_5->conf;

 VAR_6 = FUNC_1(VAR_4->buffer);

 VAR_5->pos += VAR_3->period;
 if (VAR_5->pos >= VAR_6)
  VAR_5->pos -= VAR_6;

 if (VAR_4->run)
  FUNC_0(VAR_4->channel);

 return (0);
}
