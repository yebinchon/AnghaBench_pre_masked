
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct vmbus_txbr {int txbr_dsize; int txbr_windex; int txbr_rindex; } ;


 int FUNC_0 (int ,int ,int ) ;

__attribute__((used)) static __inline uint32_t
FUNC_1(const struct vmbus_txbr *VAR_0)
{
 uint32_t VAR_1, VAR_2;


 VAR_1 = VAR_0->txbr_rindex;
 VAR_2 = VAR_0->txbr_windex;

 return FUNC_0(VAR_1, VAR_2, VAR_0->txbr_dsize);
}
