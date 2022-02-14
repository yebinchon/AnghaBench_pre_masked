
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint8_t ;
typedef int uint32_t ;
struct eth_classify_header {scalar_t__ rule_cnt; int echo; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static inline void FUNC_1(uint32_t VAR_2, int VAR_3,
    struct eth_classify_header *VAR_4, int VAR_5)
{
 VAR_4->echo = FUNC_0((VAR_2 & VAR_0) |
    (VAR_3 << VAR_1));
 VAR_4->rule_cnt = (uint8_t)VAR_5;
}
