
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef scalar_t__ u_int ;
struct TYPE_8__ {struct TYPE_8__* next; int flags; int * addresses; struct TYPE_8__* name; int * description; } ;
typedef TYPE_1__ pcap_if_t ;
struct TYPE_9__ {TYPE_1__* beginning; } ;
typedef TYPE_2__ pcap_if_list_t ;
typedef int bpf_u_int32 ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_1__*) ;
 scalar_t__ FUNC_1 (TYPE_1__*) ;
 TYPE_1__* FUNC_2 (int) ;
 int FUNC_3 (char*,int ,int ,char*) ;
 void* FUNC_4 (char const*) ;

pcap_if_t *
FUNC_5(pcap_if_list_t *VAR_2, const char *VAR_3, bpf_u_int32 VAR_4,
    const char *VAR_5, char *VAR_6)
{
 pcap_if_t *VAR_7, *VAR_8, *VAR_9;
 u_int VAR_10, VAR_11;

 VAR_7 = FUNC_2(sizeof(pcap_if_t));
 if (VAR_7 == ((void*)0)) {
  FUNC_3(VAR_6, VAR_0,
      VAR_1, "malloc");
  return (((void*)0));
 }




 VAR_7->next = ((void*)0);
 VAR_7->name = FUNC_4(VAR_3);
 if (VAR_7->name == ((void*)0)) {
  FUNC_3(VAR_6, VAR_0,
      VAR_1, "malloc");
  FUNC_0(VAR_7);
  return (((void*)0));
 }
 if (VAR_5 == ((void*)0)) {



  VAR_7->description = ((void*)0);
 } else {



  VAR_7->description = FUNC_4(VAR_5);
  if (VAR_7->description == ((void*)0)) {
   FUNC_3(VAR_6, VAR_0,
       VAR_1, "malloc");
   FUNC_0(VAR_7->name);
   FUNC_0(VAR_7);
   return (((void*)0));
  }
 }
 VAR_7->addresses = ((void*)0);
 VAR_7->flags = VAR_4;





 VAR_10 = FUNC_1(VAR_7);
 VAR_8 = ((void*)0);
 for (;;) {



  if (VAR_8 == ((void*)0)) {



   VAR_9 = VAR_2->beginning;
  } else
   VAR_9 = VAR_8->next;




  if (VAR_9 == ((void*)0)) {



   break;
  }







  VAR_11 = FUNC_1(VAR_9);
  if (VAR_10 < VAR_11) {




   break;
  }

  VAR_8 = VAR_9;
 }




 VAR_7->next = VAR_9;





 if (VAR_8 == ((void*)0)) {




  VAR_2->beginning = VAR_7;
 } else
  VAR_8->next = VAR_7;
 return (VAR_7);
}
