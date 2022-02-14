
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_char ;
struct uuid {int clock_seq_hi_and_reserved; int clock_seq_low; int* node; void* time_hi_and_version; void* time_mid; int time_low; } ;


 int VAR_0 ;
 void* FUNC_0 (int const*) ;
 int FUNC_1 (int const*) ;

void
FUNC_2(void const *VAR_1, struct uuid *VAR_2)
{
 u_char const *VAR_3;
 int VAR_4;

 VAR_3 = VAR_1;
 VAR_2->time_low = FUNC_1(VAR_3);
 VAR_2->time_mid = FUNC_0(VAR_3 + 4);
 VAR_2->time_hi_and_version = FUNC_0(VAR_3 + 6);
 VAR_2->clock_seq_hi_and_reserved = VAR_3[8];
 VAR_2->clock_seq_low = VAR_3[9];
 for (VAR_4 = 0; VAR_4 < VAR_0; VAR_4++)
  VAR_2->node[VAR_4] = VAR_3[10 + VAR_4];
}
