
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t uint8_t ;
typedef int uint32_t ;
struct TYPE_2__ {int* out_known; int* out; } ;
struct nct_softc {TYPE_1__ cache; } ;


 int FUNC_0 (int,size_t) ;
 int FUNC_1 (int,char*) ;
 int VAR_0 ;
 int FUNC_2 (struct nct_softc*,int) ;
 int FUNC_3 (struct nct_softc*,int ,size_t,int) ;

__attribute__((used)) static void
FUNC_4(struct nct_softc *VAR_1, uint32_t VAR_2, bool VAR_3)
{
 uint8_t VAR_4;
 uint8_t VAR_5;

 FUNC_1(!FUNC_2(VAR_1, VAR_2), ("attempt to write input pin"));
 VAR_5 = VAR_2 >> 3;
 VAR_4 = VAR_2 & 7;
 if (FUNC_0(VAR_1->cache.out_known[VAR_5], VAR_4) &&
     FUNC_0(VAR_1->cache.out[VAR_5], VAR_4) == VAR_3) {

  return;
 }
 VAR_1->cache.out_known[VAR_5] |= 1 << VAR_4;
 if (VAR_3)
  VAR_1->cache.out[VAR_5] |= 1 << VAR_4;
 else
  VAR_1->cache.out[VAR_5] &= ~(1 << VAR_4);
 FUNC_3(VAR_1, VAR_0, VAR_5, VAR_1->cache.out[VAR_5]);
}
