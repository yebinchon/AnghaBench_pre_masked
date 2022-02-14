
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int pcap_if_list_t ;
struct TYPE_3__ {int device_code; } ;
typedef TYPE_1__ dag_card_inf_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int * FUNC_0 (int *,char*,int ,char*,char*) ;
 scalar_t__ FUNC_1 (int,int,int ,int ) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int,int) ;
 char* FUNC_4 (int ,int) ;
 int FUNC_5 (char*) ;
 int FUNC_6 (char*,char*,int,int*) ;
 TYPE_1__* FUNC_7 (int) ;
 int FUNC_8 (int) ;
 int FUNC_9 (char*,int,char*,...) ;

int
FUNC_10(pcap_if_list_t *VAR_4, char *VAR_5)
{
 char VAR_6[12];
 int VAR_7;
 char VAR_8[VAR_0];
 int VAR_9;
 int VAR_10;
 dag_card_inf_t *VAR_11;
 char *VAR_12;
 int VAR_13, VAR_14;


 for (VAR_7 = 0; VAR_7 < VAR_1; VAR_7++) {
  FUNC_9(VAR_6, 12, "dag%d", VAR_7);
  if (-1 == FUNC_6(VAR_6, VAR_8, VAR_0, &VAR_9))
  {
   (void) FUNC_9(VAR_5, VAR_3,
       "dag: device name %s can't be parsed", VAR_6);
   return (-1);
  }
  if ( (VAR_10 = FUNC_5(VAR_8)) >= 0 ) {
   VAR_12 = ((void*)0);
   if ((VAR_11 = FUNC_7(VAR_10)))
    VAR_12 = FUNC_4(VAR_11->device_code, 1);
   if (FUNC_0(VAR_4, VAR_6, 0, VAR_12, VAR_5) == ((void*)0)) {



    return (-1);
   }
   VAR_14 = FUNC_8(VAR_10);
   for(VAR_13=0;VAR_13<VAR_2;VAR_13+=2) {
    if (0 == FUNC_1(VAR_10, VAR_13, 0, 0)) {
     FUNC_3(VAR_10, VAR_13);

     FUNC_9(VAR_6, 10, "dag%d:%d", VAR_7, VAR_13);
     if (FUNC_0(VAR_4, VAR_6, 0, VAR_12, VAR_5) == ((void*)0)) {



      return (-1);
     }

     VAR_14--;
     if(VAR_14 <= 0) {
      break;
     }
    }
   }
   FUNC_2(VAR_10);
  }

 }
 return (0);
}
