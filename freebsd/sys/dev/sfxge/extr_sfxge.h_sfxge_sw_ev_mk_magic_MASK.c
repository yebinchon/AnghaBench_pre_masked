
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned int uint16_t ;
typedef enum sfxge_sw_ev { ____Placeholder_sfxge_sw_ev } sfxge_sw_ev ;


 int FUNC_0 (int,char*) ;
 unsigned int VAR_0 ;
 unsigned int FUNC_1 (int) ;

__attribute__((used)) static inline uint16_t
FUNC_2(enum sfxge_sw_ev VAR_1, unsigned int VAR_2)
{
 FUNC_0((VAR_2 & VAR_0) == VAR_2,
     ("(label & SFXGE_MAGIC_DMAQ_LABEL_MASK) != label"));
 return FUNC_1(VAR_1) | VAR_2;
}
