
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int * node; int clock_seq_low; int clock_seq_hi_and_reserved; int time_hi_and_version; int time_mid; int time_low; } ;
typedef TYPE_1__ uuid_t ;
typedef int uint32_t ;


 char* FUNC_0 (int) ;
 int FUNC_1 (char**,int,int ) ;
 int FUNC_2 (TYPE_1__*,int *) ;
 int VAR_0 ;
 int VAR_1 ;

void
FUNC_3(const uuid_t *VAR_2, char **VAR_3, uint32_t *VAR_4)
{
 uuid_t VAR_5;
 char *VAR_6;

 if (VAR_4 != ((void*)0))
  *VAR_4 = VAR_1;
 if (VAR_3 == ((void*)0))
  return;
 VAR_6 = *VAR_3 = FUNC_0(37);
 if (*VAR_3 == ((void*)0)) {
  if (VAR_4 != ((void*)0))
   *VAR_4 = VAR_0;
  return;
 }
 if (VAR_2 == ((void*)0)) {
  VAR_2 = &VAR_5;
  FUNC_2(&VAR_5, ((void*)0));
 }

 FUNC_1(&VAR_6, 8, VAR_2->time_low);
 *VAR_6++ = '-';
 FUNC_1(&VAR_6, 4, VAR_2->time_mid);
 *VAR_6++ = '-';
 FUNC_1(&VAR_6, 4, VAR_2->time_hi_and_version);
 *VAR_6++ = '-';

 FUNC_1(&VAR_6, 2, VAR_2->clock_seq_hi_and_reserved);
 FUNC_1(&VAR_6, 2, VAR_2->clock_seq_low);
 *VAR_6++ = '-';
 FUNC_1(&VAR_6, 2, VAR_2->node[0]);
 FUNC_1(&VAR_6, 2, VAR_2->node[1]);
 FUNC_1(&VAR_6, 2, VAR_2->node[2]);
 FUNC_1(&VAR_6, 2, VAR_2->node[3]);
 FUNC_1(&VAR_6, 2, VAR_2->node[4]);
 FUNC_1(&VAR_6, 2, VAR_2->node[5]);
 *VAR_6++ = '\0';
}
