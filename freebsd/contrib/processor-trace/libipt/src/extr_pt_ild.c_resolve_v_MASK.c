
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef enum pt_exec_mode { ____Placeholder_pt_exec_mode } pt_exec_mode ;
typedef int bytes ;


 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static inline int FUNC_0(uint8_t *VAR_2, enum pt_exec_mode VAR_3)
{
 static const uint8_t VAR_4[] = { 2, 4, 8 };
 unsigned int VAR_5;

 if (!VAR_2)
  return -VAR_1;

 VAR_5 = (unsigned int) VAR_3 - 1;
 if (sizeof(VAR_4) <= VAR_5)
  return -VAR_0;

 *VAR_2 = VAR_4[VAR_5];
 return 0;
}
