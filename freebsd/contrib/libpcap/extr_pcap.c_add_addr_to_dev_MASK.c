
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct sockaddr {struct sockaddr* next; struct sockaddr* dstaddr; struct sockaddr* addr; struct sockaddr* netmask; struct sockaddr* broadaddr; } ;
struct TYPE_3__ {struct sockaddr* addresses; } ;
typedef TYPE_1__ pcap_if_t ;
typedef struct sockaddr pcap_addr_t ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct sockaddr*,size_t) ;
 int VAR_1 ;
 int FUNC_1 (struct sockaddr*) ;
 scalar_t__ FUNC_2 (int) ;
 int FUNC_3 (char*,int ,int ,char*) ;

int
FUNC_4(pcap_if_t *VAR_2,
    struct sockaddr *VAR_3, size_t VAR_4,
    struct sockaddr *VAR_5, size_t VAR_6,
    struct sockaddr *VAR_7, size_t VAR_8,
    struct sockaddr *VAR_9, size_t VAR_10,
    char *VAR_11)
{
 pcap_addr_t *VAR_12, *VAR_13, *VAR_14;




 VAR_12 = (pcap_addr_t *)FUNC_2(sizeof(pcap_addr_t));
 if (VAR_12 == ((void*)0)) {
  FUNC_3(VAR_11, VAR_0,
      VAR_1, "malloc");
  return (-1);
 }

 VAR_12->next = ((void*)0);
 if (VAR_3 != ((void*)0) && VAR_4 != 0) {
  VAR_12->addr = (struct sockaddr *)FUNC_0(VAR_3, VAR_4);
  if (VAR_12->addr == ((void*)0)) {
   FUNC_3(VAR_11, VAR_0,
       VAR_1, "malloc");
   FUNC_1(VAR_12);
   return (-1);
  }
 } else
  VAR_12->addr = ((void*)0);

 if (VAR_5 != ((void*)0) && VAR_6 != 0) {
  VAR_12->netmask = (struct sockaddr *)FUNC_0(VAR_5, VAR_6);
  if (VAR_12->netmask == ((void*)0)) {
   FUNC_3(VAR_11, VAR_0,
       VAR_1, "malloc");
   if (VAR_12->addr != ((void*)0))
    FUNC_1(VAR_12->addr);
   FUNC_1(VAR_12);
   return (-1);
  }
 } else
  VAR_12->netmask = ((void*)0);

 if (VAR_7 != ((void*)0) && VAR_8 != 0) {
  VAR_12->broadaddr = (struct sockaddr *)FUNC_0(VAR_7, VAR_8);
  if (VAR_12->broadaddr == ((void*)0)) {
   FUNC_3(VAR_11, VAR_0,
       VAR_1, "malloc");
   if (VAR_12->netmask != ((void*)0))
    FUNC_1(VAR_12->netmask);
   if (VAR_12->addr != ((void*)0))
    FUNC_1(VAR_12->addr);
   FUNC_1(VAR_12);
   return (-1);
  }
 } else
  VAR_12->broadaddr = ((void*)0);

 if (VAR_9 != ((void*)0) && VAR_10 != 0) {
  VAR_12->dstaddr = (struct sockaddr *)FUNC_0(VAR_9, VAR_10);
  if (VAR_12->dstaddr == ((void*)0)) {
   FUNC_3(VAR_11, VAR_0,
       VAR_1, "malloc");
   if (VAR_12->broadaddr != ((void*)0))
    FUNC_1(VAR_12->broadaddr);
   if (VAR_12->netmask != ((void*)0))
    FUNC_1(VAR_12->netmask);
   if (VAR_12->addr != ((void*)0))
    FUNC_1(VAR_12->addr);
   FUNC_1(VAR_12);
   return (-1);
  }
 } else
  VAR_12->dstaddr = ((void*)0);




 for (VAR_13 = VAR_2->addresses; VAR_13 != ((void*)0); VAR_13 = VAR_14) {
  VAR_14 = VAR_13->next;
  if (VAR_14 == ((void*)0)) {



   break;
  }
 }

 if (VAR_13 == ((void*)0)) {



  VAR_2->addresses = VAR_12;
 } else {




  VAR_13->next = VAR_12;
 }

 return (0);
}
