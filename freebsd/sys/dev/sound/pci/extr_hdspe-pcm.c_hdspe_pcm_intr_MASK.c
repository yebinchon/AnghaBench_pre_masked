
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct sc_pcminfo {int chnum; struct sc_chinfo* chan; struct sc_info* sc; } ;
struct sc_info {int lock; } ;
struct sc_chinfo {int channel; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static uint32_t
FUNC_3(struct sc_pcminfo *VAR_0)
{
 struct sc_chinfo *VAR_1;
 struct sc_info *VAR_2;
 int VAR_3;

 VAR_2 = VAR_0->sc;

 for (VAR_3 = 0; VAR_3 < VAR_0->chnum; VAR_3++) {
  VAR_1 = &VAR_0->chan[VAR_3];
  FUNC_2(VAR_2->lock);
  FUNC_0(VAR_1->channel);
  FUNC_1(VAR_2->lock);
 }

 return (0);
}
