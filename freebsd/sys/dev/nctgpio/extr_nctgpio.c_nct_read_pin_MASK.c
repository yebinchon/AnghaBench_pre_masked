
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
 int VAR_0 ;
 int FUNC_1 (struct nct_softc*,int ,int) ;
 scalar_t__ FUNC_2 (struct nct_softc*,int) ;

__attribute__((used)) static bool
FUNC_3(struct nct_softc *VAR_1, uint32_t VAR_2)
{
 uint8_t VAR_3;
 uint8_t VAR_4;
 bool VAR_5;

 if (FUNC_2(VAR_1, VAR_2))
  return (FUNC_1(VAR_1, VAR_0, VAR_2));

 VAR_4 = VAR_2 >> 3;
 VAR_3 = VAR_2 & 7;
 if (FUNC_0(VAR_1->cache.out_known[VAR_4], VAR_3))
  return (FUNC_0(VAR_1->cache.out[VAR_4], VAR_3));

 VAR_5 = FUNC_1(VAR_1, VAR_0, VAR_2);
 VAR_1->cache.out_known[VAR_4] |= 1 << VAR_3;
 if (VAR_5)
  VAR_1->cache.out[VAR_4] |= 1 << VAR_3;
 else
  VAR_1->cache.out[VAR_4] &= ~(1 << VAR_3);
 return (VAR_5);
}
