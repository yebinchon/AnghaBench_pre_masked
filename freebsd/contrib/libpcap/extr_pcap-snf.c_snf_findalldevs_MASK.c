
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct sockaddr_in {int sin_family; int sin_addr; } ;
struct snf_ifaddrs {int snf_ifa_portnum; char* snf_ifa_name; struct snf_ifaddrs* snf_ifa_next; } ;
struct TYPE_5__ {char* description; int name; } ;
typedef TYPE_1__ pcap_if_t ;
typedef int pcap_if_list_t ;
typedef int addr ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (TYPE_1__*,struct sockaddr_in*,int,int *,int ,int *,int ,int *,int ,char*) ;
 TYPE_1__* FUNC_1 (int *,char*,int ,char*,char*) ;
 scalar_t__ VAR_6 ;
 TYPE_1__* FUNC_2 (int *,char*) ;
 int FUNC_3 (char*) ;
 char* FUNC_4 (char*) ;
 int FUNC_5 (int ,int ,int *) ;
 int FUNC_6 (char*,int ,scalar_t__,char*) ;
 int FUNC_7 (char*,int,char*,...) ;
 int FUNC_8 (struct snf_ifaddrs*) ;
 scalar_t__ FUNC_9 (struct snf_ifaddrs**) ;
 scalar_t__ FUNC_10 (int ) ;
 char* FUNC_11 (char*) ;
 int FUNC_12 (char const*,int *,int ) ;

int
FUNC_13(pcap_if_list_t *VAR_7, char *VAR_8)
{
 pcap_if_t *VAR_9;



 struct snf_ifaddrs *VAR_10, *VAR_11;
 char VAR_12[VAR_1];
 char VAR_13[VAR_1];
 int VAR_14, VAR_15 = 0, VAR_16 = 0;
 const char *VAR_17 = ((void*)0);

 if (FUNC_10(VAR_5)) {
  (void)FUNC_7(VAR_8, VAR_2,
      "snf_getifaddrs: snf_init failed");
  return (-1);
 }

 if (FUNC_9(&VAR_10) || VAR_10 == ((void*)0))
 {
  FUNC_6(VAR_8, VAR_2,
      VAR_6, "snf_getifaddrs");
  return (-1);
 }
 if ((VAR_17 = FUNC_4("SNF_FLAGS")) && *VAR_17) {
  VAR_6 = 0;
  VAR_16 = FUNC_12(VAR_17, ((void*)0), 0);
  if (VAR_6) {
   (void)FUNC_7(VAR_8, VAR_2,
    "snf_getifaddrs: SNF_FLAGS is not a valid number");
   return (-1);
  }
  VAR_16 = VAR_16 & VAR_4;
 }

 for (VAR_11 = VAR_10; VAR_11 != ((void*)0); VAR_11 = VAR_11->snf_ifa_next) {
  (void)FUNC_7(VAR_13,VAR_1,"Myricom %ssnf%d",
   VAR_16 ? "Merge Bitmask Port " : "",
   VAR_16 ? 1 << VAR_11->snf_ifa_portnum : VAR_11->snf_ifa_portnum);



  if (VAR_16)
   VAR_15 |= 1 << VAR_11->snf_ifa_portnum;




  VAR_9 = FUNC_2(VAR_7, VAR_11->snf_ifa_name);
  if (VAR_9 != ((void*)0)) {



   char *VAR_18;

   VAR_18 = FUNC_11(VAR_13);
   if (VAR_18 == ((void*)0)) {
    FUNC_6(VAR_8,
        VAR_2, VAR_6,
        "snf_findalldevs strdup");
    return -1;
   }
   FUNC_3(VAR_9->description);
   VAR_9->description = VAR_18;
  } else {
   VAR_9 = FUNC_1(VAR_7, VAR_11->snf_ifa_name, 0, VAR_13,
       VAR_8);
   if (VAR_9 == ((void*)0))
    return -1;
  }
 }
 FUNC_8(VAR_10);



 if (VAR_16) {



  (void)FUNC_7(VAR_12,VAR_1,"snf%d",VAR_15);
  (void)FUNC_7(VAR_13,VAR_1,"Myricom Merge Bitmask All Ports snf%d",
   VAR_15);
  if (FUNC_1(VAR_7, VAR_12,
      VAR_3, VAR_13,
      VAR_8) == ((void*)0))
   return (-1);




 }

 return 0;
}
