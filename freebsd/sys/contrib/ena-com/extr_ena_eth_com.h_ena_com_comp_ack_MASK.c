
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u16 ;
struct ena_com_io_sq {int next_to_comp; } ;



__attribute__((used)) static inline void FUNC_0(struct ena_com_io_sq *VAR_0, u16 VAR_1)
{
 VAR_0->next_to_comp += VAR_1;
}
