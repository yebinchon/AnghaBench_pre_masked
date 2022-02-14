
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int time_t ;
struct TYPE_2__ {scalar_t__ pfra_fback; } ;
struct pfr_astats {scalar_t__** pfras_bytes; scalar_t__** pfras_packets; TYPE_1__ pfras_a; int pfras_tzero; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 char* FUNC_0 (int *) ;
 int FUNC_1 (TYPE_1__*,int *,int) ;
 int FUNC_2 (char*,char*,...) ;
 char*** VAR_3 ;

void
FUNC_3(struct pfr_astats *VAR_4, int VAR_5)
{
 time_t VAR_6 = VAR_4->pfras_tzero;
 int VAR_7, VAR_8;

 FUNC_1(&VAR_4->pfras_a, ((void*)0), VAR_5);
 FUNC_2("\tCleared:     %s", FUNC_0(&VAR_6));
  if (VAR_4->pfras_a.pfra_fback == VAR_1)
  return;
 for (VAR_7 = 0; VAR_7 < VAR_0; VAR_7++)
  for (VAR_8 = 0; VAR_8 < VAR_2; VAR_8++)
   FUNC_2("\t%-12s [ Packets: %-18llu Bytes: %-18llu ]\n",
       VAR_3[VAR_7][VAR_8],
       (unsigned long long)VAR_4->pfras_packets[VAR_7][VAR_8],
       (unsigned long long)VAR_4->pfras_bytes[VAR_7][VAR_8]);
}
