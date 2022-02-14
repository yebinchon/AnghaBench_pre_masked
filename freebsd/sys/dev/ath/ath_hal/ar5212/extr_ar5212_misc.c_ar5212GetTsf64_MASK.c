
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
typedef scalar_t__ uint32_t ;
struct ath_hal {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct ath_hal*,int ) ;

uint64_t
FUNC_1(struct ath_hal *VAR_2)
{
 uint32_t VAR_3, VAR_4, VAR_5;


 VAR_3 = FUNC_0(VAR_2, VAR_0);
 VAR_5 = FUNC_0(VAR_2, VAR_1);
 VAR_4 = FUNC_0(VAR_2, VAR_0);
 if (VAR_4 < VAR_3) {
  VAR_5++;
 }
 return (((uint64_t) VAR_5) << 32) | ((uint64_t) VAR_4);
}
