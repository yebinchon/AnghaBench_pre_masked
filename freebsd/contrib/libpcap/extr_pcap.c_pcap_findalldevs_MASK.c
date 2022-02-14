
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_4__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int pcap_if_t ;
struct TYPE_5__ {int * beginning; } ;
typedef TYPE_1__ pcap_if_list_t ;
struct TYPE_6__ {int (* findalldevs_op ) (TYPE_1__*,char*) ;} ;


 TYPE_4__* VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (TYPE_1__*,char*) ;
 int FUNC_2 (TYPE_1__*,char*) ;

int
FUNC_3(pcap_if_t **VAR_1, char *VAR_2)
{
 size_t VAR_3;
 pcap_if_list_t VAR_4;





 VAR_4.beginning = ((void*)0);
 if (FUNC_1(&VAR_4, VAR_2) == -1) {




  if (VAR_4.beginning != ((void*)0))
   FUNC_0(VAR_4.beginning);
  *VAR_1 = ((void*)0);
  return (-1);
 }





 for (VAR_3 = 0; VAR_0[VAR_3].findalldevs_op != ((void*)0); VAR_3++) {
  if (VAR_0[VAR_3].findalldevs_op(&VAR_4, VAR_2) == -1) {




   if (VAR_4.beginning != ((void*)0))
    FUNC_0(VAR_4.beginning);
   *VAR_1 = ((void*)0);
   return (-1);
  }
 }




 *VAR_1 = VAR_4.beginning;
 return (0);
}
