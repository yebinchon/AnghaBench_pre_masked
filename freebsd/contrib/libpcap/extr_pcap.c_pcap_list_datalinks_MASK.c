
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int dlt_count; int linktype; int dlt_list; int errbuf; int activated; } ;
typedef TYPE_1__ pcap_t ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int,int) ;
 int VAR_2 ;
 scalar_t__ FUNC_1 (int) ;
 int FUNC_2 (int*,int ,int) ;
 int FUNC_3 (int ,int,int ,char*) ;

int
FUNC_4(pcap_t *VAR_3, int **VAR_4)
{
 if (!VAR_3->activated)
  return (VAR_1);
 if (VAR_3->dlt_count == 0) {






  *VAR_4 = (int*)FUNC_1(sizeof(**VAR_4));
  if (*VAR_4 == ((void*)0)) {
   FUNC_3(VAR_3->errbuf, sizeof(VAR_3->errbuf),
       VAR_2, "malloc");
   return (VAR_0);
  }
  **VAR_4 = VAR_3->linktype;
  return (1);
 } else {
  *VAR_4 = (int*)FUNC_0(sizeof(**VAR_4), VAR_3->dlt_count);
  if (*VAR_4 == ((void*)0)) {
   FUNC_3(VAR_3->errbuf, sizeof(VAR_3->errbuf),
       VAR_2, "malloc");
   return (VAR_0);
  }
  (void)FUNC_2(*VAR_4, VAR_3->dlt_list,
      sizeof(**VAR_4) * VAR_3->dlt_count);
  return (VAR_3->dlt_count);
 }
}
