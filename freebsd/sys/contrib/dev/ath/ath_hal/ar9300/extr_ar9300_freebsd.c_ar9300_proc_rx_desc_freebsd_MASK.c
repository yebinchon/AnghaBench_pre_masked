
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
typedef int uint32_t ;
struct ath_rx_status {int dummy; } ;
struct ath_hal {int dummy; } ;
struct ath_desc {int dummy; } ;
typedef int HAL_STATUS ;


 int FUNC_0 (struct ath_hal*,struct ath_desc*,int ,struct ath_desc*,struct ath_rx_status*,void*) ;

HAL_STATUS
FUNC_1(struct ath_hal *VAR_0, struct ath_desc *VAR_1,
    uint32_t VAR_2, struct ath_desc *VAR_3, uint64_t VAR_4,
    struct ath_rx_status *VAR_5)
{

 return (FUNC_0(VAR_0, VAR_1, 0, VAR_3, VAR_5,
     (void *) VAR_1));
}
