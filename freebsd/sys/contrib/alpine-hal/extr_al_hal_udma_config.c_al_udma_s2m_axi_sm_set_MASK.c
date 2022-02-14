
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct al_udma_axi_submaster {int id; int cache_type; int burst; int used_ext; int bus_size; int qos; int prot; int max_beats; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_0 (int*) ;
 int FUNC_1 (int*,int) ;

__attribute__((used)) static int FUNC_2(struct al_udma_axi_submaster *VAR_13,
          uint32_t *VAR_14, uint32_t *VAR_15,
          uint32_t *VAR_16)
{
 uint32_t VAR_17;
 VAR_17 = FUNC_0(VAR_14);
 VAR_17 &= ~VAR_4;
 VAR_17 |= VAR_13->id & VAR_4;
 VAR_17 &= ~VAR_2;
 VAR_17 |= (VAR_13->cache_type <<
   VAR_3) &
  VAR_2;
 VAR_17 &= ~VAR_0;
 VAR_17 |= (VAR_13->burst << VAR_1) &
  VAR_0;
 FUNC_1(VAR_14, VAR_17);

 VAR_17 = FUNC_0(VAR_15);
 VAR_17 &= ~VAR_11;
 VAR_17 |= VAR_13->used_ext & VAR_11;
 VAR_17 &= ~VAR_9;
 VAR_17 |= (VAR_13->bus_size << VAR_10) &
  VAR_9;
 VAR_17 &= ~VAR_7;
 VAR_17 |= (VAR_13->qos << VAR_8) &
  VAR_7;
 VAR_17 &= ~VAR_5;
 VAR_17 |= (VAR_13->prot << VAR_6) &
  VAR_5;
 FUNC_1(VAR_15, VAR_17);

 VAR_17 = FUNC_0(VAR_16);
 VAR_17 &= ~VAR_12;
 VAR_17 |= VAR_13->max_beats &
   VAR_12;
 FUNC_1(VAR_16, VAR_17);

 return 0;
}
