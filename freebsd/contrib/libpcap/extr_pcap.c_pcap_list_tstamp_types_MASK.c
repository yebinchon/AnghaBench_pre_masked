
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int tstamp_type_count; int tstamp_type_list; int errbuf; } ;
typedef TYPE_1__ pcap_t ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int,int) ;
 int VAR_1 ;
 int FUNC_1 (int*,int ,int) ;
 int FUNC_2 (int ,int,int ,char*) ;

int
FUNC_3(pcap_t *VAR_2, int **VAR_3)
{
 if (VAR_2->tstamp_type_count == 0) {



  *VAR_3 = ((void*)0);
 } else {
  *VAR_3 = (int*)FUNC_0(sizeof(**VAR_3),
      VAR_2->tstamp_type_count);
  if (*VAR_3 == ((void*)0)) {
   FUNC_2(VAR_2->errbuf, sizeof(VAR_2->errbuf),
       VAR_1, "malloc");
   return (VAR_0);
  }
  (void)FUNC_1(*VAR_3, VAR_2->tstamp_type_list,
      sizeof(**VAR_3) * VAR_2->tstamp_type_count);
 }
 return (VAR_2->tstamp_type_count);
}
