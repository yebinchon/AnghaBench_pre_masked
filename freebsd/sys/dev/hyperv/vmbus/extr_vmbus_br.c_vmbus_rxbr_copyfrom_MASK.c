
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint32_t ;
struct vmbus_rxbr {int rxbr_dsize; int * rxbr_data; } ;


 int FUNC_0 (int,int,int) ;
 int FUNC_1 (int *,int const*,int) ;

__attribute__((used)) static __inline uint32_t
FUNC_2(const struct vmbus_rxbr *VAR_0, uint32_t VAR_1,
    void *VAR_2, int VAR_3)
{
 uint8_t *VAR_4 = VAR_2;
 const uint8_t *VAR_5 = VAR_0->rxbr_data;
 uint32_t VAR_6 = VAR_0->rxbr_dsize;

 if (VAR_3 > VAR_6 - VAR_1) {
  uint32_t VAR_7 = VAR_6 - VAR_1;


  FUNC_1(VAR_4, VAR_5 + VAR_1, VAR_7);
  FUNC_1(VAR_4 + VAR_7, VAR_5, VAR_3 - VAR_7);
 } else {
  FUNC_1(VAR_4, VAR_5 + VAR_1, VAR_3);
 }
 return FUNC_0(VAR_1, VAR_3, VAR_6);
}
