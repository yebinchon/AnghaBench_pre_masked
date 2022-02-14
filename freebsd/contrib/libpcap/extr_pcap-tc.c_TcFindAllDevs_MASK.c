
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {struct TYPE_5__* next; } ;
typedef TYPE_1__ pcap_if_t ;
typedef int pcap_if_list_t ;
typedef size_t ULONG ;
struct TYPE_7__ {TYPE_1__* beginning; } ;
struct TYPE_6__ {scalar_t__ (* QueryPortList ) (int **,size_t*) ;scalar_t__ (* FreePortList ) (int *) ;} ;
typedef scalar_t__ TC_STATUS ;
typedef scalar_t__ TC_API_LOAD_STATUS ;
typedef int * PTC_PORT ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 () ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 TYPE_1__* FUNC_1 (int ) ;
 TYPE_3__* VAR_3 ;
 TYPE_2__ VAR_4 ;
 scalar_t__ FUNC_2 (int **,size_t*) ;
 scalar_t__ FUNC_3 (int *) ;

int
FUNC_4(pcap_if_list_t *VAR_5, char *VAR_6)
{
 TC_API_LOAD_STATUS VAR_7;
 ULONG VAR_8;
 PTC_PORT VAR_9 = ((void*)0);
 TC_STATUS VAR_10;
 int VAR_11 = 0;
 pcap_if_t *VAR_12, *VAR_13;
 ULONG VAR_14;

 do
 {
  VAR_7 = FUNC_0();

  if (VAR_7 != VAR_1)
  {
   VAR_11 = 0;
   break;
  }




  VAR_10 = VAR_4.QueryPortList(&VAR_9, &VAR_8);

  if (VAR_10 != VAR_2)
  {
   VAR_11 = 0;
   break;
  }

  for (VAR_14 = 0; VAR_14 < VAR_8; VAR_14++)
  {



   VAR_12 = FUNC_1(VAR_9[VAR_14]);

   if (VAR_12 != ((void*)0))
   {



    if (VAR_3->beginning == ((void*)0))
    {
     VAR_3->beginning = VAR_12;
    }
    else
    {
     for (VAR_13 = VAR_3->beginning;
         VAR_13->next != ((void*)0);
         VAR_13 = VAR_13->next);
     VAR_13->next = VAR_12;
    }
   }
  }

  if (VAR_8 > 0)
  {



   VAR_10 = VAR_4.FreePortList(VAR_9);
  }

 }while(VAR_0);

 return VAR_11;
}
