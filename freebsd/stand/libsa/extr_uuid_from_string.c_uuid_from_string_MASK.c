
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int clock_seq_hi_and_reserved; void** node; void* clock_seq_low; void* time_hi_and_version; void* time_mid; void* time_low; } ;
typedef TYPE_1__ uuid_t ;
typedef int uint32_t ;


 void* FUNC_0 (char const*,int,int*) ;
 int FUNC_1 (char const*) ;
 int FUNC_2 (TYPE_1__*,int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

void
FUNC_3(const char *VAR_3, uuid_t *VAR_4, uint32_t *VAR_5)
{
 int VAR_6 = 1;
 int VAR_7;

 if (VAR_3 == ((void*)0) || *VAR_3 == '\0') {
  FUNC_2(VAR_4, VAR_5);
  return;
 }

 if (VAR_5 != ((void*)0))
  *VAR_5 = VAR_1;
 if (FUNC_1(VAR_3) != 36)
  return;

 if (VAR_3[8] != '-' || VAR_3[13] != '-' || VAR_3[18] != '-' || VAR_3[23] != '-')
  return;

 VAR_4->time_low = FUNC_0(VAR_3 , 8, &VAR_6);
 VAR_4->time_mid = FUNC_0(VAR_3 + 9, 4, &VAR_6);
 VAR_4->time_hi_and_version = FUNC_0(VAR_3 + 14, 4, &VAR_6);

 VAR_4->clock_seq_hi_and_reserved = FUNC_0(VAR_3 + 19, 2, &VAR_6);
 VAR_4->clock_seq_low = FUNC_0(VAR_3 + 21, 2, &VAR_6);
 VAR_4->node[0] = FUNC_0(VAR_3 + 24, 2, &VAR_6);
 VAR_4->node[1] = FUNC_0(VAR_3 + 26, 2, &VAR_6);
 VAR_4->node[2] = FUNC_0(VAR_3 + 28, 2, &VAR_6);
 VAR_4->node[3] = FUNC_0(VAR_3 + 30, 2, &VAR_6);
 VAR_4->node[4] = FUNC_0(VAR_3 + 32, 2, &VAR_6);
 VAR_4->node[5] = FUNC_0(VAR_3 + 34, 2, &VAR_6);
 if (!VAR_6)
  return;


 VAR_7 = VAR_4->clock_seq_hi_and_reserved;
 if ((VAR_7 & 0x80) != 0x00 &&
     (VAR_7 & 0xc0) != 0x80 &&
     (VAR_7 & 0xe0) != 0xc0) {
  if (VAR_5 != ((void*)0))
   *VAR_5 = VAR_0;
 } else {
  if (VAR_5 != ((void*)0))
   *VAR_5 = VAR_2;
 }
}
