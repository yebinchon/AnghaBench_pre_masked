
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ag_char_map_mask_t ;


 int* VAR_0 ;

__attribute__((used)) static inline int
FUNC_0(char VAR_1, ag_char_map_mask_t VAR_2)
{
    unsigned int VAR_3 = (unsigned char)VAR_1;
    return ((VAR_3 < 128) && ((VAR_0[VAR_3] & VAR_2) != 0));
}
