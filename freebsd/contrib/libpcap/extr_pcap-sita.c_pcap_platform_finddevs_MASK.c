
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ beginning; } ;
typedef TYPE_1__ pcap_if_list_t ;


 scalar_t__ FUNC_0 (char*) ;
 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_1 (char*) ;
 scalar_t__* VAR_1 ;
 int FUNC_2 (char*,char*) ;

int FUNC_3(pcap_if_list_t *VAR_2, char *VAR_3) {



 *VAR_1 = 0;
 FUNC_2(VAR_3, "");
 if (FUNC_1(VAR_3))
  {

  return -1;
  }

 if (FUNC_0(VAR_3))
  {

  return -1;
  }
 VAR_2->beginning = VAR_0;
 VAR_0 = 0;

 return 0;
}
