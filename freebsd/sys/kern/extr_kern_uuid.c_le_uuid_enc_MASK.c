
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_char ;
struct uuid {int * node; int clock_seq_low; int clock_seq_hi_and_reserved; int time_hi_and_version; int time_mid; int time_low; } ;


 int VAR_0 ;
 int FUNC_0 (int *,int ) ;
 int FUNC_1 (int *,int ) ;

void
FUNC_2(void *VAR_1, struct uuid const *VAR_2)
{
 u_char *VAR_3;
 int VAR_4;

 VAR_3 = VAR_1;
 FUNC_1(VAR_3, VAR_2->time_low);
 FUNC_0(VAR_3 + 4, VAR_2->time_mid);
 FUNC_0(VAR_3 + 6, VAR_2->time_hi_and_version);
 VAR_3[8] = VAR_2->clock_seq_hi_and_reserved;
 VAR_3[9] = VAR_2->clock_seq_low;
 for (VAR_4 = 0; VAR_4 < VAR_0; VAR_4++)
  VAR_3[10 + VAR_4] = VAR_2->node[VAR_4];
}
