
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct iwm_rx_packet {int len_n_flags; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;

__attribute__((used)) static inline uint32_t
FUNC_1(const struct iwm_rx_packet *VAR_1)
{

 return FUNC_0(VAR_1->len_n_flags) & VAR_0;
}
