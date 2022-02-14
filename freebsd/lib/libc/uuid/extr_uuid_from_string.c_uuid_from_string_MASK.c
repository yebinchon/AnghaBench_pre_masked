
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int clock_seq_hi_and_reserved; int * node; int clock_seq_low; int time_hi_and_version; int time_mid; int time_low; } ;
typedef TYPE_1__ uuid_t ;
typedef int uint32_t ;


 int FUNC_0 (char const*,char*,int *,int *,int *,int*,int *,int *,int *,int *,int *,int *,int *) ;
 int FUNC_1 (char const*) ;
 int FUNC_2 (TYPE_1__*,int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

void
FUNC_3(const char *VAR_3, uuid_t *VAR_4, uint32_t *VAR_5)
{
 int VAR_6;


 if (VAR_3 == ((void*)0) || *VAR_3 == '\0') {
  FUNC_2(VAR_4, VAR_5);
  return;
 }


 if (VAR_5 != ((void*)0))
  *VAR_5 = VAR_1;


 if (FUNC_1(VAR_3) != 36)
  return;







 if (VAR_3[8] != '-')
  return;

 VAR_6 = FUNC_0(VAR_3,
     "%8x-%4hx-%4hx-%2hhx%2hhx-%2hhx%2hhx%2hhx%2hhx%2hhx%2hhx",
     &VAR_4->time_low, &VAR_4->time_mid, &VAR_4->time_hi_and_version,
     &VAR_4->clock_seq_hi_and_reserved, &VAR_4->clock_seq_low, &VAR_4->node[0],
     &VAR_4->node[1], &VAR_4->node[2], &VAR_4->node[3], &VAR_4->node[4], &VAR_4->node[5]);


 if (VAR_6 != 11)
  return;


 VAR_6 = VAR_4->clock_seq_hi_and_reserved;
 if ((VAR_6 & 0x80) != 0x00 &&
     (VAR_6 & 0xc0) != 0x80 &&
     (VAR_6 & 0xe0) != 0xc0) {
  if (VAR_5 != ((void*)0))
   *VAR_5 = VAR_0;
 } else {
  if (VAR_5 != ((void*)0))
   *VAR_5 = VAR_2;
 }
}
