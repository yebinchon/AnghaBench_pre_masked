
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct bwi_softc {int dummy; } ;
struct bwi_desc32 {void* ctrl; void* addr; } ;
typedef int bus_addr_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (int,int ) ;
 int FUNC_1 (int ,int ) ;
 void* FUNC_2 (int) ;

__attribute__((used)) static __inline void
FUNC_3(struct bwi_softc *VAR_9, struct bwi_desc32 *VAR_10,
   int VAR_11, int VAR_12, bus_addr_t VAR_13, int VAR_14,
   int VAR_15)
{
 struct bwi_desc32 *VAR_16 = &VAR_10[VAR_12];
 uint32_t VAR_17, VAR_18, VAR_19, VAR_20;

 VAR_20 = FUNC_1(VAR_13, VAR_0);
 VAR_19 = FUNC_1(VAR_13, VAR_1);

 VAR_18 = FUNC_0(VAR_20, VAR_0) |
        FUNC_0(VAR_2, VAR_1);

 VAR_17 = FUNC_0(VAR_14, VAR_4) |
        FUNC_0(VAR_19, VAR_3);
 if (VAR_12 == VAR_11 - 1)
  VAR_17 |= VAR_5;
 if (VAR_15) {

  VAR_17 |= VAR_7 |
   VAR_6 |
   VAR_8;
 }

 VAR_16->addr = FUNC_2(VAR_18);
 VAR_16->ctrl = FUNC_2(VAR_17);
}
