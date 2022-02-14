
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int pcap_if_list_t ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int * FUNC_0 (int *,int ,int ,char*,char*) ;
 int FUNC_1 (int) ;
 scalar_t__ VAR_9 ;
 int FUNC_2 (char*,int ,scalar_t__,char*) ;
 int FUNC_3 (int ,int ,int ) ;

int
FUNC_4(pcap_if_list_t *VAR_10, char *VAR_11)
{
 int VAR_12;

 VAR_12 = FUNC_3(VAR_0, VAR_8, VAR_3);
 if (VAR_12 < 0) {

  if (VAR_9 == VAR_1 || VAR_9 == VAR_2)
   return 0;
  FUNC_2(VAR_11, VAR_6,
      VAR_9, "Can't open netlink socket");
  return -1;
 }
 FUNC_1(VAR_12);





 if (FUNC_0(VAR_10, VAR_4,
     VAR_7,
     "Linux netfilter log (NFLOG) interface", VAR_11) == ((void*)0))
  return -1;
 if (FUNC_0(VAR_10, VAR_5,
     VAR_7,
     "Linux netfilter queue (NFQUEUE) interface", VAR_11) == ((void*)0))
  return -1;
 return 0;
}
