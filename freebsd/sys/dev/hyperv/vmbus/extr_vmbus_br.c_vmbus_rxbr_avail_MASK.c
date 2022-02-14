
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint32_t ;
struct vmbus_rxbr {scalar_t__ rxbr_dsize; scalar_t__ rxbr_windex; scalar_t__ rxbr_rindex; } ;


 scalar_t__ FUNC_0 (scalar_t__,scalar_t__,scalar_t__) ;

__attribute__((used)) static __inline uint32_t
FUNC_1(const struct vmbus_rxbr *VAR_0)
{
 uint32_t VAR_1, VAR_2;


 VAR_1 = VAR_0->rxbr_rindex;
 VAR_2 = VAR_0->rxbr_windex;

 return (VAR_0->rxbr_dsize -
     FUNC_0(VAR_1, VAR_2, VAR_0->rxbr_dsize));
}
