
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct ssi_rate {int speed; } ;
struct sc_pcminfo {struct sc_info* sc; } ;
struct sc_info {struct ssi_rate* sr; } ;
struct sc_chinfo {struct sc_pcminfo* parent; } ;
typedef int kobj_t ;


 struct ssi_rate* VAR_0 ;
 int FUNC_0 (struct sc_info*) ;

__attribute__((used)) static uint32_t
FUNC_1(kobj_t VAR_1, void *VAR_2, uint32_t VAR_3)
{
 struct sc_pcminfo *VAR_4;
 struct sc_chinfo *VAR_5;
 struct ssi_rate *VAR_6;
 struct sc_info *VAR_7;
 int VAR_8;
 int VAR_9;

 VAR_5 = VAR_2;
 VAR_4 = VAR_5->parent;
 VAR_7 = VAR_4->sc;

 VAR_6 = ((void*)0);


 for (VAR_9 = 0; VAR_0[VAR_9].speed != 0; VAR_9++) {
  if (VAR_0[VAR_9].speed == VAR_3)
   VAR_6 = &VAR_0[VAR_9];
 }


 if (VAR_6 == ((void*)0)) {
  for (VAR_9 = 0; VAR_0[VAR_9].speed != 0; VAR_9++) {
   VAR_6 = &VAR_0[VAR_9];
   VAR_8 = VAR_6->speed + ((VAR_0[VAR_9 + 1].speed != 0) ?
       ((VAR_0[VAR_9 + 1].speed - VAR_6->speed) >> 1) : 0);
   if (VAR_3 < VAR_8)
    break;
  }
 }

 VAR_7->sr = VAR_6;

 FUNC_0(VAR_7);

 return (VAR_6->speed);
}
