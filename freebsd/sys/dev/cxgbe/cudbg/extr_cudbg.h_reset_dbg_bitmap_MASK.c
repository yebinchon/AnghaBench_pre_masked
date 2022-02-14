
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef enum CUDBG_DBG_ENTITY_TYPE { ____Placeholder_CUDBG_DBG_ENTITY_TYPE } CUDBG_DBG_ENTITY_TYPE ;



__attribute__((used)) static inline void FUNC_0(u8 *VAR_0, enum CUDBG_DBG_ENTITY_TYPE VAR_1)
{
 int VAR_2 = VAR_1 / 8;
 int VAR_3 = VAR_1 % 8;

 VAR_0[VAR_2] &= ~(1 << VAR_3);
}
