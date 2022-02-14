
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef scalar_t__ uint32_t ;
struct vmbus_txbr {scalar_t__ txbr_dsize; int * txbr_data; } ;


 scalar_t__ FUNC_0 (scalar_t__,scalar_t__,scalar_t__) ;
 int FUNC_1 (int *,int const*,scalar_t__) ;

__attribute__((used)) static __inline uint32_t
FUNC_2(const struct vmbus_txbr *VAR_0, uint32_t VAR_1,
    const void *VAR_2, uint32_t VAR_3)
{
 const uint8_t *VAR_4 = VAR_2;
 uint8_t *VAR_5 = VAR_0->txbr_data;
 uint32_t VAR_6 = VAR_0->txbr_dsize;

 if (VAR_3 > VAR_6 - VAR_1) {
  uint32_t VAR_7 = VAR_6 - VAR_1;


  FUNC_1(VAR_5 + VAR_1, VAR_4, VAR_7);
  FUNC_1(VAR_5, VAR_4 + VAR_7, VAR_3 - VAR_7);
 } else {
  FUNC_1(VAR_5 + VAR_1, VAR_4, VAR_3);
 }
 return FUNC_0(VAR_1, VAR_3, VAR_6);
}
