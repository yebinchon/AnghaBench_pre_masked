
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct sc_pcminfo {int dev; struct sc_info* sc; } ;
struct sc_info {int period; int lock; int ctrl_register; } ;
struct sc_chinfo {int buffer; struct sc_pcminfo* parent; } ;
struct hdspe_latency {int period; int n; } ;
typedef int kobj_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ,char*,int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct sc_info*) ;
 int FUNC_3 (struct sc_info*,int ,int ) ;
 struct hdspe_latency* VAR_5 ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ,int,int) ;

__attribute__((used)) static uint32_t
FUNC_8(kobj_t VAR_6, void *VAR_7, uint32_t VAR_8)
{
 struct hdspe_latency *VAR_9;
 struct sc_pcminfo *VAR_10;
 struct sc_chinfo *VAR_11;
 struct sc_info *VAR_12;
 int VAR_13;
 int VAR_14;

 VAR_11 = VAR_7;
 VAR_10 = VAR_11->parent;
 VAR_12 = VAR_10->sc;
 VAR_9 = ((void*)0);





 if (FUNC_2(VAR_12) == 1)
  goto end;

 if (VAR_8 > VAR_2)
  VAR_8 = VAR_2;
 else if (VAR_8 < VAR_3)
  VAR_8 = VAR_3;

 VAR_8 /= 4 ;


 for (VAR_14 = 0; VAR_5[VAR_14].period != 0; VAR_14++) {
  if (VAR_5[VAR_14].period == VAR_8) {
   VAR_9 = &VAR_5[VAR_14];
  }
 }


 if (VAR_9 == ((void*)0)) {
  for (VAR_14 = 0; VAR_5[VAR_14].period != 0; VAR_14++) {
   VAR_9 = &VAR_5[VAR_14];
   VAR_13 = VAR_9->period + ((VAR_5[VAR_14 + 1].period != 0) ?
       ((VAR_5[VAR_14 + 1].period - VAR_9->period) >> 1) : 0);
   if (VAR_8 < VAR_13)
    break;
  }
 }

 FUNC_4(VAR_12->lock);
 VAR_12->ctrl_register &= ~VAR_4;
 VAR_12->ctrl_register |= FUNC_1(VAR_9->n);
 FUNC_3(VAR_12, VAR_1, VAR_12->ctrl_register);
 VAR_12->period = VAR_9->period;
 FUNC_5(VAR_12->lock);





 FUNC_7(VAR_11->buffer, (VAR_0 * 2) / (VAR_12->period * 4),
     (VAR_12->period * 4));
end:

 return (FUNC_6(VAR_11->buffer));
}
