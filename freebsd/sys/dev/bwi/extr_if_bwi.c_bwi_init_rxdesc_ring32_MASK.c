
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct bwi_softc {int dummy; } ;
struct bwi_desc32 {int dummy; } ;
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
 int FUNC_0 (struct bwi_softc*,int,int) ;
 int FUNC_1 (int,int ) ;
 int FUNC_2 (int ,int ) ;

__attribute__((used)) static void
FUNC_3(struct bwi_softc *VAR_9, uint32_t VAR_10,
         bus_addr_t VAR_11, int VAR_12, int VAR_13)
{
 uint32_t VAR_14, VAR_15, VAR_16;

 VAR_16 = FUNC_2(VAR_11, VAR_6);
 VAR_15 = FUNC_2(VAR_11, VAR_7);

 VAR_14 = FUNC_1(VAR_16, VAR_6) |
       FUNC_1(VAR_8,
         VAR_7);
 FUNC_0(VAR_9, VAR_10 + VAR_3, VAR_14);

 VAR_14 = FUNC_1(VAR_12, VAR_1) |
       FUNC_1(VAR_15, VAR_4) |
       VAR_5;
 FUNC_0(VAR_9, VAR_10 + VAR_0, VAR_14);

 FUNC_0(VAR_9, VAR_10 + VAR_2,
      (VAR_13 - 1) * sizeof(struct bwi_desc32));
}
