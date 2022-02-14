
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int const u8 ;
struct tfrc_rx_hist {int const loss_start; } ;


 int const VAR_0 ;

__attribute__((used)) static inline u8 FUNC_0(const struct tfrc_rx_hist *VAR_1, const u8 VAR_2)
{
 return (VAR_1->loss_start + VAR_2) & VAR_0;
}
