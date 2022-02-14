
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sndcard_func {uintptr_t func; int * varinfo; } ;
struct emu_sc_info {uintptr_t is_emu10k1; uintptr_t mch_disabled; uintptr_t mch_rec; } ;
struct emu_pcminfo {uintptr_t route; } ;
typedef int device_t ;







 int VAR_0 ;
 int VAR_1 ;
 struct sndcard_func* FUNC_0 (int ) ;
 struct emu_sc_info* FUNC_1 (int ) ;

__attribute__((used)) static int
FUNC_2(device_t VAR_2, device_t VAR_3, int VAR_4, uintptr_t * VAR_5)
{
 struct sndcard_func *VAR_6 = FUNC_0(VAR_3);
 struct emu_sc_info *VAR_7 = FUNC_1(VAR_2);

 if (VAR_6==((void*)0))
  return (VAR_1);
 if (VAR_7 == ((void*)0))
  return (VAR_1);

 switch (VAR_4) {
 case 132:
  *VAR_5 = VAR_6->func;
  break;
 case 128:
  if (VAR_6->varinfo == ((void*)0))
   return (VAR_1);
  *VAR_5 = ((struct emu_pcminfo *)VAR_6->varinfo)->route;
  break;
 case 131:
  *VAR_5 = VAR_7->is_emu10k1;
  break;
 case 130:
  *VAR_5 = VAR_7->mch_disabled;
  break;
 case 129:
  *VAR_5 = VAR_7->mch_rec;
  break;
 default:
  return (VAR_0);
 }

 return (0);
}
